#include <iostream>
#include <map>
using namespace std;
int main()
{
  map<string, int> myMap;

  // inserting key value pairs
  myMap["apple"] = 10;
  myMap["banana"] = 20;
  myMap["mango"] = 50;

  // Acessing the key value pair
  cout << "Quanyity of apple : " << myMap["apple"] << endl;
  cout << "Quanyity of banana : " << myMap["banana"] << endl;
  cout << "Quanyity of mango : " << myMap["mango"] << endl;

  // searchnig by usnig find function
  // find function gives the index of the value but if not then it will return .end() so we will use .end() to check wherther that valueis presrn in unordered map or not

  if (myMap.find("banana") != myMap.end())
  {
    cout << "Bananan found in the myMap" << endl;
  }
  else
  {
    cout << "Banana not found in the myMap" << endl;
  }

  // updatinng value of unordered map
  myMap["apple"] = 15;

  // erase a key-value pair
  myMap.erase("mango");
  return 0;
}