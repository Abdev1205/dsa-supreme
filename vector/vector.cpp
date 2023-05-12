#include <iostream>
using namespace std;
int main() {
  // #1 Why vector is used insted of array
  // -> Vector is simply dynamica array wher don't need to give its size
  // -> It have various built in methods and function some of them are 
  //    i. nums.size() // its is used to get size of the vector
  //    ii. nums.push_back(arr[i]) // it is used to insert elemnts in the array
  //    iii. nums.pop_back() // its is used to remove last enterd elment from the array

  // #2 How to declare vector
  // -> we can declare vector like this
  //    vector<int> nums; // here int indicates the data type of the vector

  // #3 How to intialize vector
  // -> we cvan intialize vector like this
  //    vector<int> nums{1,2,3,4,5};

  // #4 Do we have to import extra package to use vector
  // -> Yes we have to import #include <vector> package to use vector in code 

  // #5 How to insert element by user
  // -> we can insert element using for loop 
  //    in the for loop we can take input fo every element like this
  //    cin>>nums[i];

  // #6 How to print element of vector
  // -> we can print elements of an array using any loop 
  //    we will loop till the size of the loop 
  //    and print element like this cout<<nums[i];
}