//https://ravesli.com/urok-116-konstruktory/
#include <iostream>
#include <string>
using namespace std;


class Ball
{

string m_color = "Red";
float m_radius = 20.0;

public:
    Ball(string color){
        m_color = color;
    }
    Ball(float radius){
        m_radius = radius;
    }
    Ball(string color, float radius ){
         m_color = color;
         m_radius = radius;
    }
    Ball(){
        m_color = "Red";
        m_radius = 20.0;
    }
    void print(){
        cout << "color:" << m_color << ", radius: " << m_radius << endl; 
    }
    

};


int main(){
    Ball def;
    def.print();

    Ball black("black");
	black.print();

    Ball thirty(30.0);
	thirty.print();

    Ball blackThirty("black", 30.0);
	blackThirty.print();

     return 0;
}