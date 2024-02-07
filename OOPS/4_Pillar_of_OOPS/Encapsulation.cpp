// Encapsulation simply means we are having data member or funcation inside the capsule
// capsule refers to class
// we have perfect encapsulation where all data members are private

#include <iostream>
using namespace std;

class Animal
{

  // making one private data member
private:
  int weight;

  // making all my varaiable and function public so that i can access outside the class also
public:
  // defining state or property --> also called as data member
  int age;
  string name;

  // defining beahaviour --> we can also call this as function -->also called as member function
  void eat()
  {
    cout << "I am eating" << endl;
  }

  void sleep()
  {
    cout << "I am Sleeping" << endl;
  }

  // creating member function type {getter, setter} to access private data members
  void getWeight()
  {
    cout << "weight = " << weight << endl;
  }
  void setWeight(int w)
  {
    weight = w;
  }
};

int main()
{
  Animal a;
  a.setWeight(19);
  a.getWeight();
  return 0;
}