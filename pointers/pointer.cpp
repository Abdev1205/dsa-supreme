#include <iostream>
using namespace std;
int main() {
  /*
  
  #1 What is pointer ?
  -> A pinter in c++ is variable that stores the memory adress
  of another variable . 
    ex -> int* mypointer

  #2 How to declare a pointer in c++;
  -> To declare a pointer we need to add * after datatype and name of the pointer 
   ex -> int* mypointer;

  #3 How to intialize a pointer in c++;
  -> After the declaration of pointer we need to declare it 
  ex -> int myvar = 5;
        int* myptr = &myvar;
  
  #4 How to dereference the pointer (or how to get value of that pointer adress)
  -> we use * with pointer name
      ex-> int myVariable = 10;
      int* myPointer = &myVariable;
    --dereference the pointer to access the value of myVariable--
    int value = *myPointer;
  
  #5 What is null pointer 
  -> A null pointer is a pointer that does not point to any valid memory address. it is represented as nullptr
    ex -> int* mypointer = nullptr;

  #6 What is double pointer 
  -> double pointer is just pointer but it is used for pointer-to-pointer memory location 
    ex-> int x =5; 
         int* p = &x;  -> this is pointer to x
         int** pp = &p; -> this is pointer to pointer to x
         cout<<** pp;



  */
  

}