#!/bin/bash

g++ -std=c++11 -fPIC ../SmallPM/src/main.cpp ../SmallPM/src/PhotonMapping.cpp ../SmallPM/src/RenderEngine.cpp ../SmallPM/smallrt/lib/smallrt.a -I../SmallPM/smallrt/include -I../SmallPM/include/ -o smallpm