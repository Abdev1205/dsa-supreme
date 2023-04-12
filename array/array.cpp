#include <iostream>
using namespace std;
int main() {
  // #1 what is array
  // -> It is Linear Data structure
  // -> It is collection of data
  // -> It is colleection of similar data
  // -> It use continuous memory block ex index 0-5

  // #2 why do we need Array
  // -> It used to store mutiplt value in single varaible
  // ex - suppose we have to store 30000 value so it is not possible to store that value in 30000 variable
  // thats why array is used 

  // 3# what does index 0 of array tells us
  // -> Oth index of array tells about the staring of the index and in array we count from 0 
  //    becuase it give accurate distance of element from the starting
  // ex - 1st element of arary is at 200 
  // so arr[4] will be in (arr+4*4) that will be 200 +16 = 216

  // #4 How we access element in Array
  // -> We can access element of aray by giving it index 
  // ex - we have to print 4th elementt of array so we will write 
  // cout<<arr[3] her we havr written 3 instead 4 because we started oaur counting from 0

  // #5 How do we intialize our array
  // -> we can intialize our array like this
  //    int arr[] = {1,2,3,4,5} here aur array is of integer datatype and value of array is seprated by ,

  // #6 How to use Array in function 
  // -> suppose we have intialised our array like this
  //    int arr[] = {1,2,3,4,5} now we want to pass this array inside our function to certain work
  //    function(arr) here we don't need to write datatype whilw giving parameter for function 
  //    but while aceesing the argument we need to spedify the datatype of the argument
  //    int function(int arr[]){} like this we access array as argument
}