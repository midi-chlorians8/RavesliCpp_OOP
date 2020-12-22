#include <iostream>
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
};
int main(){
 Point first;
    Point second(2.0, 5.0);
    first.print();
    second.print();
    //std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';
 
    return 0;
}