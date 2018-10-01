#include <iostream>
#include "point.h"
#include "direction.h"
#include "sphere.h"

using namespace std;

void showMenu(){
	cout << endl << "---------------------------------------------------" << endl;
	cout << "0. Cerrar" << endl;
	cout << "1. Crear point" << endl;
	cout << "2. Setear X" << endl;
	cout << "3. Setear Y" << endl;
	cout << "4. Setear Z" << endl;
	cout << "5. Getear X" << endl;
	cout << "6. Getear Y" << endl;
	cout << "7. Getear Z" << endl;
	cout << "8. Sumar point + direction" << endl;
	cout << "9. Sumar direction + point" << endl;
	cout << "10. Restar point - point" << endl;
	cout << "11. Crear direction"<< endl;
	cout << "12. Setear X" << endl;
	cout << "13. Setear Y" << endl;
	cout << "14. Setear Z" << endl;
	cout << "15. Getear X" << endl;
	cout << "16. Getear Y" << endl;
	cout << "17. Getear Z" << endl;
	cout << "18. Modulo" << endl;
	cout << "19. Sumar direction + direction" << endl;
	cout << "20. Restar direction - direction" << endl;
	cout << "21. Multiplicar direction * escalar" << endl;
	cout << "22. Dividir direction / escalar" << endl;
	cout << "23. Producto escalar direction . direction" << endl;
	cout << "24. Producto vectorial direction x direction" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << endl << "Que quieres hacer prim? " << flush;
}

int main(){
	char c;
	int seleccion;
	float x, y, z, s;
	Point p(1,1,1), p1(2,2,2), p2(3,3,3);
	p1.show();
	p1 = p;
	p1.show();
	Direction d(3,3,3), d1, d2;
	Sphere sphere(p, p1, d);
	sphere.show();
	/*showMenu();
	cin >> seleccion;
	while(seleccion != 0){
		switch(seleccion){
			case 0:
				break;
			case 1:
				cout << "Creando point" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				p.setX(x);
				p.setY(y);
				p.setZ(z);
				cout << "Point creado: " << flush;
				p.show();
				cout << endl;		
				break;
			case 2:
				cout << "Seteando x" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				p.setX(x);
				p.setY(y);
				p.setZ(z);
				cout << "Point creado: " << flush;
				p.show();
				cout << endl;
				cout << "Introduzca nueva x: " << flush;
				cin >>  x;
				p.setX(x);
				p.show();
				break;
			case 3:
				cout << "Seteando y" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				p.setX(x);
				p.setY(y);
				p.setZ(z);
				cout << "Point creado: " << flush;
				p.show();
				cout << endl;
				cout << "Introduzca nueva y: " << flush;
				cin >>  y;
				p.setY(y);
				p.show();
				break;
			case 4: 
				cout << "Seteando z" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				p.setX(x);
				p.setY(y);
				p.setZ(z);
				cout << "Point creado: " << flush;
				p.show();
				cout << endl;
				cout << "Introduzca nueva z: " << flush;
				cin >>  z;
				p.setZ(z);
				p.show();
				break;
			case 5:
				cout << "Geteando x" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				p.setX(x);
				p.setY(y);
				p.setZ(z);
				cout << "Point creado: " << flush;
				p.show();
				cout << endl;
				cout << "La x es: " << p.getX() << endl;
				break;
			case 6:
				cout << "Geteando y" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				p.setX(x);
				p.setY(y);
				p.setZ(z);
				cout << "Point creado: " << flush;
				p.show();
				cout << endl;
				cout << "La y es: " << p.getY() << endl;
				break;
			case 7:
				cout << "Geteando z" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				p.setX(x);
				p.setY(y);
				p.setZ(z);
				cout << "Point creado: " << flush;
				p.show();
				cout << endl;
				cout << "La z es: " << p.getZ() << endl;
				break;
			case 8:
				cout << "Sumando point + direction" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				p.setX(x);
				p.setY(y);
				p.setZ(z);
				cout << "Point creado: " << flush;
				p.show();
				cout << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				d.setX(x);
				d.setY(y);
				d.setZ(z);
				cout << "Direction creada: " << flush;
				d.show();
				cout << endl;
				cout << "La suma es: " << flush;
				p1 = p + d;
				p1.show();
				break;
			case 9:
				cout << "Sumando direction + point" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				d.setX(x);
				d.setY(y);
				d.setZ(z);
				cout << "Direction creada: " << flush;
				d.show();
				cout << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				p.setX(x);
				p.setY(y);
				p.setZ(z);
				cout << "Point creado: " << flush;
				p.show();
				cout << endl;
				cout << "La suma es: " << flush;
				p1 = d + p;
				p1.show();
				break;
			case 10:
				cout << "Restando point - point" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				p1.setX(x);
				p1.setY(y);
				p1.setZ(z);
				cout << "Point creado: " << flush;
				p1.show();
				cout << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				p2.setX(x);
				p2.setY(y);
				p2.setZ(z);
				cout << "Point creado: " << flush;
				p2.show();
				cout << endl;
				cout << "La resta es: " << flush;
				d = p1 - p2;
				d.show();
				break;
			case 11:
				cout << "Creando direction" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				d.setX(x);
				d.setY(y);
				d.setZ(z);
				cout << "Direction creada: " << flush;
				d.show();
				cout << endl;		
				break;
			case 12:
				cout << "Seteando x" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				d.setX(x);
				d.setY(y);
				d.setZ(z);
				cout << "Direction creada: " << flush;
				d.show();
				cout << endl;
				cout << "Introduzca nueva x: " << flush;
				cin >>  x;
				d.setX(x);
				d.show();
				break;
			case 13:
				cout << "Seteando y" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				d.setX(x);
				d.setY(y);
				d.setZ(z);
				cout << "Direction creada: " << flush;
				d.show();
				cout << endl;
				cout << "Introduzca nueva y: " << flush;
				cin >>  y;
				d.setY(y);
				d.show();
				break;
			case 14: 
				cout << "Seteando z" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				d.setX(x);
				d.setY(y);
				d.setZ(z);
				cout << "Direction creada: " << flush;
				d.show();
				cout << endl;
				cout << "Introduzca nueva z: " << flush;
				cin >>  z;
				d.setZ(z);
				d.show();
				break;
			case 15:
				cout << "Geteando x" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				d.setX(x);
				d.setY(y);
				d.setZ(z);
				cout << "Direction creada: " << flush;
				d.show();
				cout << endl;
				cout << "La x es: " << d.getX() << endl;
				break;
			case 16:
				cout << "Geteando y" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				d.setX(x);
				d.setY(y);
				d.setZ(z);
				cout << "Direction creada: " << flush;
				d.show();
				cout << endl;
				cout << "La y es: " << d.getY() << endl;
				break;
			case 17:
				cout << "Geteando z" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				d.setX(x);
				d.setY(y);
				d.setZ(z);
				cout << "Direction creada: " << flush;
				d.show();
				cout << endl;
				cout << "La z es: " << d.getZ() << endl;
				break;
			case 18:
				cout << "Calculando modulus" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				d.setX(x);
				d.setY(y);
				d.setZ(z);
				cout << "Direction creada: " << flush;
				d.show();
				cout << endl;
				cout << "El modulus es " << d.modulus();
				break;
			case 19:
				cout << "Sumando direction + direction" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				d1.setX(x);
				d1.setY(y);
				d1.setZ(z);
				cout << "Direction creada: " << flush;
				d1.show();
				cout << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				d2.setX(x);
				d2.setY(y);
				d2.setZ(z);
				cout << "Direction creada: " << flush;
				d2.show();
				cout << endl;
				d = d1 + d2;
				cout << "La suma es: " << flush;
				d.show();
				break;
			case 20:
				cout << "Restando direction - direction" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				d1.setX(x);
				d1.setY(y);
				d1.setZ(z);
				cout << "Direction creada: " << flush;
				d1.show();
				cout << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				d2.setX(x);
				d2.setY(y);
				d2.setZ(z);
				cout << "Direction creada: " << flush;
				d2.show();
				cout << endl;
				d = d1 - d2;
				cout << "La suma es: " << flush;
				d.show();
				break;
			case 21:
				cout << "Multiplicando direction + escalar" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				d1.setX(x);
				d1.setY(y);
				d1.setZ(z);
				cout << "Direction creada: " << flush;
				d1.show();
				cout << endl;
				cout << "Introduzca escalar" << endl;
				cin >> s;
				d = d1 * s;
				cout << "La multiplicacion es: " << flush;
				d.show();
				break;
			case 22:
				cout << "Dividiendo direction / escalar" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				d1.setX(x);
				d1.setY(y);
				d1.setZ(z);
				cout << "Direction creada: " << flush;
				d1.show();
				cout << endl;
				cout << "Introduzca escalar" << flush;
				cin >> s;
				d = d1 / s;
				cout << "La division es: " << flush;
				d.show();
				break;
			case 23:
				cout << "Calculando producto escalar" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				d1.setX(x);
				d1.setY(y);
				d1.setZ(z);
				cout << "Direction creada: " << flush;
				d1.show();
				cout << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				d2.setX(x);
				d2.setY(y);
				d2.setZ(z);
				cout << "Direction creada: " << flush;
				d2.show();
				cout << endl;
				cout << "El producto escalar es: " << dotProduct(d1, d2) << endl;;
				break;
			case 24:
				cout << "Calculando producto vectorial" << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				d1.setX(x);
				d1.setY(y);
				d1.setZ(z);
				cout << "Direction creada: " << flush;
				d1.show();
				cout << endl;
				cout << "Introduce x y z: " << flush;
				cin >> x >> y >> z;
				d2.setX(x);
				d2.setY(y);
				d2.setZ(z);
				cout << "Direction creada: " << flush;
				d2.show();
				cout << endl;
				cout << "El producto vectorial es: " << flush;
				d = crossProduct(d1, d2);
				d.show();
				break;
		}
		cout << endl << "c to continue..." << endl;
		cin >> c;
		showMenu();
		cin >> seleccion;
	}*/
	return 0;
}