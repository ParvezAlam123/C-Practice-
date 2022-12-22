#include<iostream>
using namespace std ;

#define SIZE 100

class Stack {
      int stck[SIZE];
      int tos;
    public :
      void init();
      void push(int i);
      int pop();
    
};

void Stack:: init() {
    tos = 0;
}

void Stack :: push(int i) {
    if (tos == SIZE ) {
        cout << "Stack is full.\n";
        return ;
    }
    stck[tos] = i ;
    tos++;
}

int Stack :: pop() {
    if (tos == 0) {
        cout << "Stack underflow.\n";
        return 0;
    }
    tos-- ;
    return stck[tos];
}

int main()
{
    Stack stck1, stck2 ;
    
    stck1.init();
    stck2.init();
    
    stck1.push(1);
    stck2.push(2);
    
    stck1.push(3);
    stck2.push(4);
    
    cout << stck1.pop() << " ";
    cout << stck1.pop() << " ";
    cout << stck2.pop() << " ";
    cout << stck2.pop() << "\n" ;
    
    return 0;
}
