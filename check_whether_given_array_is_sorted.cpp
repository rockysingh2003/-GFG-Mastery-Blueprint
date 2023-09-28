#include<bits/stdc++.h>
using namespace std;
//we are checking whether the element present is sorted in an increasing order or not .
 int check_the_array(int ar[], int n)
{
      if(n==1)
      {
        return 1;
      }

      else
      
      {
         for(int i=1;i<n;i++)
         {
          if(ar[i]>ar[i+1])
          return -1;
         }
      }

      return 1;
}

int main()
{
       int n;
       cout<<"\n enter the size of an array";
       cin>>n;
       int ar[n],return_value;
       cout<<"\n enter the elements in the array";
       for(int i=0;i<n;i++)
       {
        cin>>ar[i];
       }

       return_value = check_the_array(ar,n);
       if(return_value==1)
       cout<<"\n the element is sorted in the increasing order";
       else 
       cout<<"\n th element is not sorted in the increasing order ";
    return 0;
}