// https://ravesli.com/urok-113-klassy-obekty-i-metody-klassov/
#include <iostream>
using namespace std;

class Numbers{
public:
int m_x;
int m_y;


    void set(int x, int y){
        m_x = x;
        m_y = y;
    }
    void print(){
        cout << "Numbers(" << m_x << " " << m_y << ")" <<endl; 
    }
};

int main(){
    //cout << "Hello" << endl;
    Numbers n1;
	n1.set(3, 3); // инициализируем объект n1 значениями 3 и 3
    Numbers n2{ 4, 4 }; // инициализируем объект n2 значениями 4 и 4
 
	n1.print();
	n2.print();
    return 0;
}