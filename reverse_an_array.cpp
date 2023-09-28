#include<bits/stdc++.h>
using namespace std;
void revere_array(int ar[], int n)
{
   int temp;

   for(int i=0;i<=n-i-1;i++)
   {
     
         temp=ar[i];
         ar[i]=ar[n-i-1];
         ar[n-i-1]=temp;
      
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

        
        //calling of the function
        revere_array(ar,n);


       cout<<"\n the reverse array is"<<endl;
       for(int i=0;i<n;i++)
       cout<<ar[i]<<endl;


    return 0;
}