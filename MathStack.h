// This program demonstrates the MathStack template class.

#ifndef MATHSTACK_H
#define MATHSTACK_H
#include <iostream>
using namespace std;

template <class T>
class MathStack
{
  private:
    T *stackArray; // Pointer to the stack array
    int stackSize; // The stack size
    int top; // Indicates the top of the stack

  public:
    // Constructor
    MathStack(int);

    // Destructor
     ~MathStack();

    // Stack operations
    void push(T);
    void pop(T &);
    bool isFull() const;
    bool isEmpty() const;
    void add();
    void sub();
    void mult();
    void div();
};
//***********************************************
// Constructor                                  *
// This constructor creates an empty stack. The *
// size parameter is the size of the stack.     *
//***********************************************
template <class T>
MathStack<T>::MathStack(int size)
{
   stackArray = new T[size]; 
   stackSize = size; 
   top = -1;
}

//***********************************************
// Destructor                                   *
//***********************************************

template <class T>
MathStack<T>::~MathStack()
{
   delete [] stackArray;
}
#endif
