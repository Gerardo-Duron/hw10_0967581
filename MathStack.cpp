// Implementation file for the MathStack class
#include "MathStack.h"


//***********************************************
// Member function add. add pops                *
// the first two values off the stack and       *
// adds them. The sum is pushed onto the stack. *
//***********************************************
template <class T>
void MathStack<T>::add()
{
   T num, sum;

   // Pop the first two values off the stack.
   pop(sum);
   pop(num);

   // Add the two values, store in sum.
   sum += num;

   // Push sum back onto the stack.
   push(sum);
}

//***********************************************
// Member function sub. sub pops the            *
// first two values off the stack. The          *
// second value is subtracted from the          *
// first value. The difference is pushed        *
// onto the stack.                              *
//***********************************************
template <class T>
void MathStack<T>::sub()
{
   T num, diff;

   // Pop the first two values off the stack.
   pop(diff);
   pop(num);

   // Subtract num from diff.
   diff -= num;

   // Push diff back onto the stack.
   push(diff);
}

//**********************************************
// Member function mult. multiplies first two  *
// values of the stack.                        *
//**********************************************
template <class T>
void MathStack<T>::mult()
{
T num, res;

// pop the first two values of the stack
pop(res);
pop(num);

// multiply thw two values
res = res*num;

// push result back into the stack
push(res);
}
template <class T>

//*********************************************
// Member funciton div. divides the first two *
// values of the stack.                       *
// shows an error when divided by zero        *
//*********************************************


void MathStack<T>::div()
{
 T quot, divisor;

// pop the first two values of the stack
 pop(divisor);
 pop(quot);


 // exexption 
 if (divisor == 0)
 {
    cout << "ERROR: Cannot divide by zero.\n"; 
 }
    else {quot = quot/divisor; } // division formula 

// push quotient back into the stack
 push(quot);
}



//*************************************************
// Member function push pushes the argument onto  *
// the stack.                                     *
//*************************************************

template <class T>
void MathStack<T>::push(T num)
{
   if (isFull())
   {
      cout << "The stack is full.\n";
   }
   else
   {
      top++;
      stackArray[top] = num;
   }
}

//****************************************************
// Member function pop pops the value at the top     *
// of the stack off, and copies it into the variable *
// passed as an argument.                            *
//****************************************************


template <class T>
void MathStack<T>::pop(T &num)
{
   if (isEmpty())
   {
      cout << "The stack is empty.\n";
   }
   else
   {
      num = stackArray[top];
      top--;
   }
}

//***************************************************
// Member function isFull returns true if the stack *
// is full, or false otherwise.                     *
//***************************************************

template <class T>
bool MathStack<T>::isFull() const
{
   bool status;

   if (top == stackSize - 1)
      status = true;
   else
      status = false;

   return status;
}

//****************************************************
// Member funciton isEmpty returns true if the stack *
// is empty, or false otherwise.                     *
//****************************************************

template <class T>
bool MathStack<T>::isEmpty() const
{
   bool status;

   if (top == -1)
      status = true;
   else 
      status = false;

   return status;
}
