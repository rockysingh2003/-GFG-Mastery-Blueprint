//using the hasp map which is of two type:
//hash array.
//hash data structure...
//using xor...
#include <bits/stdc++.h>
using namespace std;
// using hash array
 void countdown(vector<int> &v,int n)
 {
   //we have to find the maximum in the array.
   int maximum = 0;
   for (int i = 0; i < n;i++)
   {
       maximum = max(maximum, v[i]);
   }

  vector<int> hasharray(maximum + 1, 0);

  // traversing through the array v;
  for (int i = 0; i < n;i++)
  {
      hasharray[v[i]]++;
  }

  // traversing again through the vector hasharray to check the count that should be equal to 1;
  for (int i = 0; i < n;i++)
  {
    if(hasharray[v[i]]==1)
    {
        cout << "\n the element is " << v[i];
        break;
    }
  }

}

int main()
{
    vector<int> v;
    int size;
    cout << "\n enter the size of your vector" << endl;
    cin >> size;

    cout << "\n enter the elements in you vector" << endl;
    for (int i = 0; i < size;i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    countdown(v, size);
}