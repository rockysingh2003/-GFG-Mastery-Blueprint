//to be done tomorrow....
/*
       When calculating the middle of a range, especially in the context of algorithms like binary search, we use the floor function (integer division) instead of the ceil function. Here's why:

### Binary Search Context

1. **Definition of Middle**:
  The "middle" of two indices \( \text{low} \) and \( \text{high} \) in an array is typically defined as the integer part of their average. This is because indices are integers and arrays are accessed using integer indices.

2. **Avoiding Out of Bounds**:
  Using the floor function (integer division) ensures that the midpoint calculation does not go out of bounds:
  \[
  \text{middle} = \left\lfloor \frac{\text{low} + \text{high}}{2} \right\rfloor
  \]
  This calculation ensures that \( \text{middle} \) is always within the range of \( \text{low} \) to \( \text{high} \).

3. **Consistent Halving**:
  Binary search relies on consistently halving the search range. Using the floor function guarantees that the search range is reduced by at least one element in each iteration:
  - If \( \text{low} = 0 \) and \( \text{high} = 3 \):
    \[
    \text{middle} = \left\lfloor \frac{0 + 3}{2} \right\rfloor = \left\lfloor 1.5 \right\rfloor = 1
    \]
  - If \( \text{low} = 0 \) and \( \text{high} = 2 \):
    \[
    \text{middle} = \left\lfloor \frac{0 + 2}{2} \right\rfloor = \left\lfloor 1 \right\rfloor = 1
    \]

  In both cases, the search space is reduced effectively.

4. **Ceil Function Complications**:
       */

#include<bits/stdc++.h>
using namespace std;
bool iterative_approach(int ar[],int size,int target)
{
    // ar[]={1,2,3,4,5,6,7,89,7986};
    int lower = 0;
    int higher = size - 1; 

    while(lower<=higher)
    {
        int middle = lower + (higher - lower) / 2;
        if(ar[middle]==target)
        {
            cout << "\n the target is found at the index " << middle;
            return true;
        } 

        else if (ar[middle]<target)
        {
            lower++;
        }    

        else if(ar[middle]>target)
        {
            higher--;
        }
    }

    return false;
}
int main()
{
    int size;
    cout << "\n enter the size of the array" << endl;
    cin >> size;
    int ar[size];
    cout << "\n enter the elements in the array" << endl;
    for (int i = 0; i < size;i++)
    {
        cin >> ar[i];
    }

    int target;
    cout << "\n enter the target valu;";
    cin >> target;
    bool flag = iterative_approach(ar, size,target);

    if(flag==false)
    {
        cout << "\n no element is not .Sorry Darling!" << endl;
    }
}