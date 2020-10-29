#include <iostream>
#include "MathStack.h"
using namespace std;

// Constants for the menu choices
const int Add = 1,
          Subtract = 2,
          Multiply = 3,
          Division = 4,
          QUIT = 5;

// Function prototypes
void menu(int &);
void getStackSize(int &);

int main()
{
    int stackSize; // The stack size
    int choice;    // To hold a menu choice
    

     menu(choice);
  
    // Create the stack.
    MathStack<int> Math(stackSize);
    MathStack<float> Math1(stackSize);
  

    /*do
    {
        // Get the user's menu choice.
        menu(choice);
    
        // Perform the user's choice.
        if (choice != QUIT_CHOICE)
        {
            switch (choice)
            {
               case PUSH_CHOICE:
                    
                    break;
               case POP_CHOICE:
                    //popItem(stack);
                    break;
            }
        }
    } while (choice != QUIT_CHOICE);*/
    
    return 0;
}

//************************************************
// The menu function displays the menu and gets  *
// the user's choice, which is assigned to the   *
// reference parameter.                          *
//************************************************
void menu(int &choice)
{    
    int stackSize;      
    int number;
    getStackSize(stackSize);     
     // Display the menu and get the user's choice.
     cout << "\nWhat do you want to do?\n"
          << Add
          << " - Add items from the stack\n"
          << Subtract
          << " - Subtact items from the stack\n"
          << Multiply
          << " - Multiply items from the stack\n"
          << Division
          << " - Divide items form the stack\n"
          << QUIT
          << " - Quit the program\n"
          << "Enter your choice: ";
     cin >> choice;
     
     // Validate the choice
     while (choice < Add || choice > QUIT)
     {
        cout << "Enter a valid choice: ";
        cin >> choice;
     }
    switch(choice)
    {
      case 1: 
       MathStack<int> Math(stackSize);
       for (int i = 0; i < stackSize; i++)
       {
        cout << " Enter number to insert to the stack:\n" << endl;
       }
       cin >> number;
       Math.push(number);
    }
}
//************************************************
// The getStackSize function gets the desired    *
// stack size, which is assigned to the          * 
// reference parameter.                          *
//************************************************
void getStackSize(int &size)
{
     // Get the desired stack size.
     cout << "How big should I make the stack? ";
     cin >> size;
     
     // Validate the size.
     while (size < 1)
     {
           cout << "Enter 1 or greater: ";
           cin >> size;
     }
}

