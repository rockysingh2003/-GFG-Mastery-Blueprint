#include<bits/stdc++.h>
using namespace std;
void left_rotate_an_array_by_one(int ar[],int n,int d)
{
    /*
    vector<int> s;

    for(int i=d;i<n;i++)
    s.push_back(ar[i]);

    for(int i=0;i<d;i++)
    s.push_back(ar[i]);

    for(int i=0;i<n;i++)
    ar[i]=s[i];
    */


   //brute force by Striver's solution

   /*
    //how many rotation we have to perform as 'd' can vary from 1 to 10,00,000
   //therefore:
   d=d%n;

   int temp[d];
   
   //putting the element in the temp array;
   for(int i=0;i<d;i++)
   temp[i]=ar[i];

   //now starting the main logic .
   for(int i=d;i<n;i++)
   ar[i-d]=ar[i];


   //now putting the starting element in the above array after the insertion of some element from i-d;
   for(int i=d;i<n;i++)
   {
    ar[i]=temp[i-(n-d)];
   }

   */
  
     //optimal approach.
     reverse(ar,ar+d);
     reverse(ar+d,ar+n);
     reverse(ar,ar+n);
   
}


int main()
{
    int n,d;
       cout<<"\n enter the size of an array";
       cin>>n;
       int ar[n];
       cout<<"\n enter the elements in the array";
       for(int i=0;i<n;i++)
       {
        cin>>ar[i];
       }

       cout<<"\n Enter how many d places you want to rotate the array"<<endl;
       cin>>d;


       cout<<"array before the remove function starting."<<endl;
       for(int i=0;i<n;i++)
       cout<<ar[i]<<endl;

       cout<<"\nafter the rotation of the array"<<endl;
       left_rotate_an_array_by_one(ar,n,d);
       for(int i=0;i<n;i++)
       cout<<ar[i]<<endl;
    return 0;
}