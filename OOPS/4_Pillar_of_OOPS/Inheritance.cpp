// Inheritance simple means that child class inherits property from parent class

// types of Inheritance
// 1-> Single inheritance -- here we have single is a realtion between parent and child
// 2-> Multi-level inheritance -- here we have multile is a realtion between parent and child
// 3-> Multiple inheritance -- here child inherits property from more than one parent ex father,mother
// 4-> Herirarichal inheritance -- here multiple child inherits property from one parent ex brother,sister
// 5-> Hybrid inheritance -- misture of diffrent type inheritance

#include <iostream>
using namespace std;

class Animal
{
public:
  int age;
  string name;

  void eat()
  {
    cout << "Eating";
  }
};

class Dog : public Animal
{
};

int main()
{
  Dog myDog;
  myDog.name = "Rex";
  myDog.age = 3;
  cout << "My dog's name is " << myDog.name << endl;
  cout << "My dog's age is " << myDog.age << endl;
  myDog.eat();
  return 0;
}