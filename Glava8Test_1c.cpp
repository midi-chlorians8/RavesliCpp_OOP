#include <iostream>
#include <cmath>
using namespace std;

class Point{
    double m_a = 0.0;
    double m_b = 0.0;
public:
    Point(){

    }
    Point(double a,double b):m_a(a),m_b(b){

    }
    void print(){
        cout << "Point(" << m_a <<", " << m_b <<")" << endl;
    }
    friend double distanceFrom(const Point& point_a,const Point& point_b);
};
    double distanceFrom(const Point& First,const Point& Second){
       return sqrt((First.m_a - Second.m_a) * (First.m_a - Second.m_a) + (First.m_b - Second.m_b) * (First.m_b - Second.m_b));
    }
int main(){
    Point first;
    Point second(2.0, 5.0);
    first.print();
    second.print();
    std::cout << "Distance between two points: " << distanceFrom(first,second) << '\n';
 
    return 0;
}