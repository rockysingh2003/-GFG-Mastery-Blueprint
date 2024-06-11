/*
There exists so many solution to solve this problem.
Approach 1: Using the hash map or vector count of the element.
Approach 2: Using the XOR-ing of the element.
Approach 3: Using the two pointer .
Approach 4: Using the binary Search
*/
#include<bits/stdc++.h>
using namespace std;
int approach_four(vector<int> &arr)
{
    int n = arr.size();
    
    //checking for the size of one .
    if(n==1)
        return arr[0];

    //edge cases checking .
    if(arr[0]!=arr[1])
        return arr[0];
    if(arr[n-1]!=arr[n-2])
        return arr[n - 1];

    int lower = 1;
    int higher = n - 2;

    while(lower<=higher)
    {
        int middle = lower + (higher - lower) / 2;

        if(arr[middle]!= arr[middle-1] and arr[middle]!=arr[middle+1])
        {
            return arr[middle];
        }

        /*
        note the point if the element is present once times only then there is pattern present :
        if element is present twice times ,no one time: therefore the pattern of the index would be like this --- (even,odd),(even,odd)
        clearly see that arr[odd]==arr[even];
        but if the  any element is present once timese then the pattern would be divided into two halvess :
        left halves in which pattern goes likes this :(even,odd),(even,odd).....
        rightt halves in which pattern goes like this :(odd,even),(odd,even)....
        */

       if((middle%2==0 and arr[middle]==arr[middle+1]) or (middle%2==1 and arr[middle]==arr[middle-1])) //this condition is for the left part ....
       {
           lower = middle + 1;
       }

       else if((middle%2==1 and arr[middle]==arr[middle+1]) or (middle%2==0 and arr[middle]==arr[middle-1]))
       {
           higher = middle - 1;
       }
    }

    return -1;
}


int main()
{
    vector<int> v;
    int size;
    cout << "\n enter the size of the vector" << endl;
    cin >> size;
    cout << "\n enter the elements in the vector" << endl;
    for (int i = 0; i < size;i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    int ans = approach_four(v);
    cout << "The single element is: " << ans << "\n";
    return 0;
}