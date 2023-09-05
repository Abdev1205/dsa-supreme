#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
  unordered_map<string, int> hashmap;

  // inserting key value pairs
  hashmap["apple"] = 10;
  hashmap["banana"] = 20;
  hashmap["mango"] = 50;

  // Acessing the key value pair
  cout << "Quanyity of apple : " << hashmap["apple"] << endl;
  cout << "Quanyity of banana : " << hashmap["banana"] << endl;
  cout << "Quanyity of mango : " << hashmap["mango"] << endl;

  // searchnig by usnig find function
  // find function gives the index of the value but if not then it will return .end() so we will use .end() to check wherther that valueis presrn in unordered map or not

  if (hashmap.find("banana") != hashmap.end())
  {
    cout << "Bananan found in the hashmap" << endl;
  }
  else
  {
    cout << "Banana not found in the hashmop" << endl;
  }

  // updatinng value of unordered map
  hashmap["apple"] = 15;

  // erase a key-value pair
  hashmap.erase("mango");
  return 0;
}