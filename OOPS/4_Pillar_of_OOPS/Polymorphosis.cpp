// polymorphosis is poly :- Many  and morph :- forms
// there are two types of polymorph
// 1.compile time polymorph  -> it have function overloading and operator
// overloading
// 2.run time polymorph

// lets see funcation overloading
// here we can create multiple funcation by changing its argument and parameter

// #include <iostream>
// using namespace std;

// class Maths {
// public:
//   // this is function overloading
//   int sum(int a, int b) { return a + b; }
//   int sum(int a, int b, int c) { return a + b + c; }
//   int sum(int a, int b, float c) {
//     // i am here
//     return a + b + c;
//   }
// };

// int main() {

//   Maths m;
//   int m1 = m.sum(1, 2);
//   int m2 = m.sum(1, 2, 3);
//   int m3 = m.sum(1, 2, 3.5f);
//   cout << m1 << endl;
//   cout << m2 << endl;
//   cout << m3 << endl;

//   return 0;
// }

// runtime polymorphosis
// here we are overriding the funcation as per our need in runtime

#include <iostream>
using namespace std;

class Animal {
public:
  virtual void speaking() { cout << "Speaking" << endl; }
};

class Dog : public Animal {
public:
  void speaking() { cout << "Barking" << endl; }
};

int main() {
  // if we are calling Animal Class funcation then
  Animal *a = new Animal();
  a->speaking();

  // if we are callling Dog class then
  Dog *a2 = new Dog();
  a2->speaking();

  // upto here evyerthing is ok but when we giving address of
  // Parent Class Animal and creating a new Dog object
  // then here we are applying //* upCasting
  // so here parent classs funcation will be called

  Animal *a3 = new Dog();
  a3->speaking();

  // and when we are giving child class address to
  // parent class new object then we can get error as its depende upon compiler
  // to solve this we can apply vitual keyword in parent class

  Dog *d1 = new Animal();
  d1->speaking();

  // so this will call as runtime polymorphosis
  // and here are doing //* function Overriding
  return 0;
}