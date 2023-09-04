#include <iostream>
#include <vector>
using namespace std;

// isme hum har element ko bagal wale element se swap karte karte last me gratest element set karna hota hai
//  time complexity iska bhi 0(n*n) hai

// testing github
//  commen test

int main()
{
  vector<int> arr{41, 467, 334, 500, 169, 724, 478, 358, 962, 464};

  for (int round = 1; round < arr.size(); round++)
  {
    bool swapped = false;
    for (int i = 0; i < arr.size() - round; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        swapped = true;
        swap(arr[i], arr[i + 1]);
      }
    }
    if (swapped == false)
    {
      break;
    }
  }

  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
}