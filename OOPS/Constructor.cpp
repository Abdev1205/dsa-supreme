// Constructor is used to create a new instance of the class / object
// it is also used to initialize the value in the class object
// types of constructor
// 1. Deafult Constructor
// 2. Parametrized Constructor
// 3. Copy Constrcutor

#include <iostream>
using namespace std;

class Animal
{
public:
  int age;
  string name;

  // creating deafault constructor
  Animal()
  {
    this->age = 34;
    this->name = "dogesh";
    cout << " Animal constructor is called " << endl;
  }

  // creating a parametrized constructor
  Animal(int age, string name)
  {
    this->age = age;
    this->name = name;
    cout << " Parametrized constructor is called with parameters :" << age << ", " << name << endl;
  }

  // creating a Copy Constructed constructor
  Animal(Animal &a)
  {
    this->age = a.age;
    this->name = a.name;
    cout << " Copy constructor is called with reference parameter : " << a.age << ", " << a.name << endl;
  }
  ~Animal()
  {
    cout << " Destructor is called with " << endl;
  }
};

int main()
{
  Animal *a = new Animal(34, "bumarchamatta");
  Animal b = *a;
  return 0;
}