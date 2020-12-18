// https://ravesli.com/urok-114-spetsifikatory-dostupa-public-i-private/#toc-3
#include <iostream>
#include <cassert> // для assert()
using namespace std;

class Stack {
 int mass[10];
 int Polzunok; // Перебираем им по стеку
 public:
    void reset(){
        for(int i=0;i<9; i++){
            mass[i] = 0;
        }
        Polzunok=0; // Помечаем что писать в стек с самого начала
    }
    bool push(int Add){
        if(Polzunok == 9){
            return false;
        }
        else{   // Если стек не заполнен = добавить к массиву значение
            mass[Polzunok] = Add;
            Polzunok++; // Cдвинули ползунок вверх
            return true;
        }
    }
    void pop(){ //Убирает одно значение из стека
        assert(Polzunok >= 0); //Если в стеке нет значений, то должен выводиться стейтмент assert.
        mass[Polzunok] = 0;
        Polzunok--; // Cдвинули ползунок вниз
    }
    void print(){
        cout << "(";
        for(int i=0; i <Polzunok; i++){
            cout << " " << mass[i] ;
        }
       
            cout << " )" << endl;
        

    }
};

int main(){
	Stack stack;
	stack.reset();
 
	stack.print();

    stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();

    stack.pop();
	stack.print();

    stack.pop();
	stack.pop();
 
	stack.print();
    return 0;
}