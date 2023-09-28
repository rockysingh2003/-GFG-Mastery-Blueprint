#include<bits/stdc++.h>
using namespace std;
// int  largest_element(int ar[] , int n)
// {
//     int count =0,index;

//     for(int i=0;i<n;i++)
//     {
//         if(count<=ar[i])
//         {
            
//               index=i;
//         }
//     }

//    return index;
// }



// void second_largest_element(int ar[], int n)
// {
//     int largest= largest_element(ar,n);
//     int res=-1;

//     for(int i=0;i<n;i++)
//     {
//          if(ar[i]!=ar[largest])
//          {
//             if(res==-1)
//             res=i;
//             else if(ar[i]>ar[res])
//             res=i;

//          }
//     }

//     cout<<res;
// }


//above approach is naive .

int second_largest_element(int ar[], int n)
{
    int res=-1,largest=0;
    for(int i=1;i<n;i++)
    {
        if(ar[i]>ar[largest])
        {
            res=largest;//this line of code providing the index of the second largest element in the array.
            largest=i; //this is giving the index of the first largest element in an array
        }


        else  if(ar[i]!=ar[largest]) 
        {
            //suppose we till here not find the second largest element in an array.
            //therefore:
            if(res==-1)
            res=i;
            else if(ar[i]>ar[res])
            res=i;
        }
    }
    return res;
}



int main()
{
    int n;
    cout<<"\n enter the size of an array";
    cin>>n;
    int ar[n],x,return_value;
    cout<<"\n enter the elements in the array";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

     return_value=second_largest_element(ar,n); 
     cout<<"\n the the second largest element present in an array is "<<ar[return_value]<<"at the index"<<return_value;
    return 0;
}