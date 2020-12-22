// Определение методов класса Point3D
 
#include <iostream> // для std::cout
#include "Point3D.h" // класс Point3D определен здесь
#include "Vector3D.h" // для параметра функции moveByVector()
 
void Point3D::moveByVector(const Vector3D &v)
{
    // Добавляем координаты вектора к соответствующим координатам точки
    m_x += v.m_x;
    m_y += v.m_y;
    m_z += v.m_z;
}
 
void Point3D::print()
{
    std::cout << "Point(" << m_x << " , " << m_y << " , " << m_z << ")\n";
}