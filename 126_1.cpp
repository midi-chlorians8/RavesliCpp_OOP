//https://ravesli.com/urok-126-druzhestvennye-funktsii-i-klassy/
#include <iostream>
class Point3D; // Обьявили прототип чтоб можно было класс сделать дружественным

class Vector3D
{
private:
	double m_x, m_y, m_z;
 
public:
	Vector3D(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{
 
	}
 
	void print()
	{
		std::cout << "Vector(" << m_x << " , " << m_y << " , " << m_z << ")\n";
	}
    friend Point3D; // Разрешили классу Point3D доступ к приватным переменным Vector3D 
};
 
class Point3D
{
private:
	double m_x, m_y, m_z;
 
public:
	Point3D(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{
 
	}
 
	void print()
	{
		std::cout << "Point(" << m_x << " , " << m_y << " , " << m_z << ")\n";
	}
 
	void moveByVector(const Vector3D &v)
	{
		// Реализуйте эту функцию как дружественную классу Vector3D
        this->m_x = v.m_x +this->m_x;
        this->m_y = v.m_y +this->m_y;
        this->m_z = v.m_z +this->m_z;
	}
};
 
int main()
{
	Point3D p(3.0, 4.0, 5.0);
	Vector3D v(3.0, 3.0, -2.0);
 
	p.print();
	p.moveByVector(v);
	p.print();
 
	return 0;
}