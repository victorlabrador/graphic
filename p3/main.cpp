#include <iostream>
#include <vector>
#include <fstream>	
#include <limits>
#include "shape.h"
#include "camera.h"

using namespace std;

int main(){	
	vector<Shape*> list;
	Shape *shape = nullptr;
	shape = new Plane(Direction(1, 0, 0), Point(-20, 0, 0), RGB(255, 0, 0)); //LEFT
	list.push_back(shape);
	shape = new Plane(Direction(1, 0, 0), Point(20, 0, 0), RGB(0, 255, 0)); //RIGHT
	list.push_back(shape);
	shape = new Plane(Direction(0, 1, 0), Point(0, -20, 0), RGB(230, 230, 230)); //DOWN
	list.push_back(shape);
	shape = new Plane(Direction(0, 1, 0), Point(0, 20, 0), RGB(140, 140, 140)); //UP
	list.push_back(shape);
	shape = new Plane(Direction(0, 0, 1), Point(0, 0, 40), RGB(191, 191, 191)); //BACK
	list.push_back(shape);
#if 1	
	/*shape = new Sphere(Point(-12, -13, 33), 7, RGB(255, 0, 255));//LEFT BALL
	list.push_back(shape);
	shape = new Sphere(Point(12, -13, 33), 7, RGB(0, 0, 255)); //RIGHT BALL
	list.push_back(shape);
	shape = new Sphere(Point(0, -13, 26), 7, RGB(255, 255, 0));//FRONT BALL
	list.push_back(shape);
	shape = new InfiniteCylinder(Direction(0, 1, 0), Point(0, 0, 20), 2, RGB(255, 255, 255)); //cylinder
	list.push_back(shape);
	shape = new Cylinder(Plane(Direction(0, 1, 0), Point(0, -10, 0), RGB(230, 230, 230)),
				Plane(Direction(0, 1, 0), Point(0, 10, 0), RGB(230, 230, 230)), 1.2, Direction(0, 1, 0), Point(0, -20, 10), RGB(170, 19, 175));
	shape = new Disc(Direction(0, 0, 1), Point(0, 0, 5), 3.2, RGB(255, 255, 255));
	list.push_back(shape);
	shape = new Cylinder(Disc(Direction(0, 1, 0), Point(0, -3, 10), 2, RGB(255, 255, 255)), 
				Disc(Direction(0,1,0), Point(0, 5, 10), 2, RGB(255,255,255)), RGB(170, 19, 175));
	list.push_back(shape);	
	shape = new Cylinder(Disc(Direction(0, 1, 0), Point(0, -6, 12), 2, RGB(255, 255, 255)), 
				Disc(Direction(0,1,0), Point(0, 6, 12), 2, RGB(255,255,255)), RGB(170, 0, 0));
	list.push_back(shape);	
	shape = new Cylinder(Disc(Direction(0, 0, 1), Point(7, 0, 10), 2, RGB(255, 255, 255)), 
				Disc(Direction(0,0,1), Point(7, 0, 25), 2, RGB(255,255,255)), RGB(0, 0, 255));
	list.push_back(shape);*/
	shape = new Cylinder(Disc(Direction(1, 1, 0), Point(-4, -4, 10), 4, RGB(255, 255, 255)), 
				Disc(Direction(1, 1, 0), Point(4, 4, 10), 4, RGB(255,255,255)), RGB(0, 0, 255));
	list.push_back(shape);
#else //EL MARAVILLOSO PENE
	shape = new Sphere(Point(5, -13.5, 35), 7, RGB(252, 123, 220)); //RIGHT BALL
	list.push_back(shape);
	shape = new Sphere(Point(-5, -13.5, 35), 7, RGB(252, 123, 220)); //LEFT BALL
	list.push_back(shape);
	shape = new Cylinder(Disc(Direction(0, 1, 0), Point(0, -13, 35), 6, RGB(255, 255, 255)), 
				Disc(Direction(0,1,0), Point(0, 15, 35), 6, RGB(255,255,255)), RGB(214, 104, 187));
	list.push_back(shape);
	shape = new Sphere(Point(0, 15, 35), 6, RGB(173, 83, 151)); //TOP
	list.push_back(shape);
	
#endif
	Camera camera = Camera(Point(0, 0, 0), Direction(0, 0, 10), Direction(10, 0, 0), 720, 720);	camera.setL(camera.getL() * -1);
	ofstream o("prueba.ppm");
	o << "P3" << endl;
	o << camera.getX() << " " << camera.getY() << endl;
	o << "255" << endl;
	Direction d;
	float minDist = numeric_limits<float>::max();
	int index = -1;
	bool collision;
	float currentDist;
	Direction planeVectorL = camera.getL() * -2 / camera.getX();

	Direction planeVectorU = camera.getU() * -2 / camera.getY();
	Point aux = camera.getOrigin() + camera.getL() + camera.getU() + camera.getF() + planeVectorL / 2 + planeVectorU / 2;
	for(int i = 0; i < camera.getY(); i++){
		for(int j = 0; j < camera.getX(); j++){
			d = (aux + (planeVectorL * j) + (planeVectorU * i))  - camera.getOrigin();
			d.normalize();
			for(int k = 0; k < list.size(); k++){	
				currentDist = list[k]->collision(d, camera.getOrigin(), collision);
				if(currentDist < minDist && collision && currentDist > 0){
					index = k;
					minDist = currentDist;
				}
			}
			if(index != -1){
				o << (long int) list[index]->getColor().getR() << " " << (long int) list[index]->getColor().getG() << " " 
				  << (long int) list[index]->getColor().getB() << "	";
			}
			else{
				o << "0 0 0	";
			}
			index = -1;
			minDist = numeric_limits<float>::max();
		}
		o << endl;
	}
	o.close();
	return 0;
}