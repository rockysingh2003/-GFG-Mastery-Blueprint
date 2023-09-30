#include<bits/stdc++.h>
using namespace std;
void move_all_zeroes_to_end(int ar[],int n)
{
   
   int count=0;

   for(int i=0;i<n;i++)
   {
       if(ar[i]!=0)
       {
        swap(ar[i],ar[count]);
        count++;
       }
   }

   
}


int main()
{
    
    
       int n;
       cout<<"\n enter the size of an array";
       cin>>n;
       int ar[n];
       cout<<"\n enter the elements in the array";
       for(int i=0;i<n;i++)
       {
        cin>>ar[i];
       }

       move_all_zeroes_to_end(ar,n);


       cout<<"\n the array after the moving of the zeroes to the end"<<endl;
       for(int i=0;i<n;i++)
       {
        cout<<ar[i]<<endl;
       }


    return 0;
}