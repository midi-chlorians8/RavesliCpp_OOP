//https://ravesli.com/urok-126-druzhestvennye-funktsii-i-klassy/
#include <iostream>
//class Point3D; // Обьявили прототип чтоб можно было класс сделать дружественным
#include "Point3D.h"
#include "Vector3D.h"
//class Vector3D;

int main()
{
	Point3D p(3.0, 4.0, 5.0);
	Vector3D v(3.0, 3.0, -2.0);
 
	p.print();
	p.moveByVector(v);
	p.print();
 
	return 0;
}