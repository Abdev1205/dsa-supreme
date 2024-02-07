// we can create a class to create user defined data types
// class is blueprint and object is instance of class tahtwe use to work under class
// actual entity is object and class is mainly a design or bluprint
// ex if we are creating a car then then is just a design so we can this as class
// but when enginner produced a car then we can cal that car as object
// beacuse we can use them as a real object
// this is pointer to current object in the class

// #NOTE - empty class size is 1 because we are giving it a spaces in memory so we are

//^ IN class we have
// 1 --> state / property -->this is also called as data member in OOPS terminology
// 2 --> behaviour -->this is also called as member function in OOPS terminology

//* IN class we also have access modifier
// 1-> public : this can be acces inside the class and outside the class
// 2-> private : this can not be access outside the class so we have to create a
// member funcation {getter, setter} which will be used to accessing and modifing the private member
// 3-> protected :

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
  // trying to acces the Animal class value in main function
  //* static memory
  // creating object of Animal to use
  Animal dogesh;
  // updating class value
  dogesh.name = "Vimdhayak";
  dogesh.age = 12;
  cout << "Name of Animal: " << dogesh.name << endl;
  cout << "Age of Animal: " << dogesh.age << endl;
  dogesh.eat();
  dogesh.sleep();
  // accessing and modifying private memeber of class Animal
  dogesh.setWeight(50);
  dogesh.getWeight();

  //* Dynamic memory
  // we are creating a dynamic space for class animal in heap and then we passing that address to
  // stack memory then that address is linked with varible with pointers
  Animal *bumarchammata = new Animal;

  // in order to access the this dynamic class oject we have two type of option
  // by dot operator
  (*bumarchammata).name = "Dogesh ka dost";
  (*bumarchammata).age = 3;
  // by arrow
  bumarchammata->name = "Dogesh ka dost in arrow notation";
  bumarchammata->age = 12;

  cout << bumarchammata->name;

  // now all things are going to be similar

  return 0;
}