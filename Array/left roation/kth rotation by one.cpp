#include<bits/stdc++.h>
using namespace std;
void reversal(vector<int> &v,int low,int high)
{
   while(low<high)
   {
       swap(v[low], v[high]);
       low++;
       high--;
   }
}
void leftRotate(vector<int> &v,int d ,int n)
{
    reversal(v, 0, d - 1);
    reversal(v, d, n - 1);
    reversal(v, 0, n - 1);
}

int main()
{
    vector<int> v;

    int n;
    std::cout << "Enter how many elements you want to insert in the vector: ";
    std::cin >> n;

    std::cout << "Enter your elements in the vector: ";
    for (int i = 0; i < n; ++i)
    {
        int element;
        std::cin >> element;
        v.push_back(element); // Add the element to the end of the vector
    }

    int d;
    cout << "\n how many times you want to rotate the array" << endl;
    cin >> d;

    leftRotate(v, d, n);
    cout << "\n after the rotation the array is " << endl;
    for (int i = 0; i < n;i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}