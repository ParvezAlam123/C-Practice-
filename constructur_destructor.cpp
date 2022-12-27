#include<iostream>
using namespace std ;

#define SIZE 100 

class stack {
       int stck[SIZE];
       int tos;
    public:
       stack();
       ~stack();
       void push(int);
       int pop();
};

stack :: stack() {
    int tos = 0;
    cout << "Stack initialized\n";
}

stack :: ~stack() {
    cout << "Stack Destroyed\n";
}

void stack :: push(int i) {
    if (tos == SIZE) {
        cout << "Stack is full\n";
        return ;
    }
    stck[tos] = i;
    tos++;
}

int stack :: pop() {
    if (tos == 0){
        cout << " Stack is underflow.\n";
        return 0;
    }
    tos--;
    return stck[tos];
}


int main()
{
    
    stack s1;
    
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    
    cout << s1.pop() << s1.pop() ;
    
    return 0;
    
}


