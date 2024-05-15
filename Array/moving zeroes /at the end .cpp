#include<bits/stdc++.h>
using namespace std;
void moving_zeroes(vector<int> &vr,int size)
{
    // vector<int> br;
    // int count = 0;

    // for (int i = 0; i < size;i++)
    // {
    //     if(vr[i]!=0)
    //     {
    //         br.push_back(vr[i]);
    //     }
    //     else{
    //         count++;
    //     }
    // }

    // while(count!=0)
    // {
    //     br.push_back(0);
    //     count--;
    // }


    // cout<<"\n the array after the moving the zeroes is "<<endl;
    // for (int i = 0; i < br.size(); ++i)
    // {
    //     cout << br[i] << " ";
    // }
    // cout << endl;

    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if(vr[i]!=0)
        {
            swap(vr[i], vr[count]);
            count++; //count humrha yeah bta rha hai ki kitne non -zero element apni place pe aa gye hai plus yeahh jo hai pehle zero pe point kar rha hai nad uske baad bale zero pe bhi.....
        }
    }

    cout << "\n the elements after moving is " << endl;
    for (int i = 0; i < size;i++)
    {
        cout << vr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vr;

    int size;
    cout << "\n enter the size of an array";
    cin >> size;

    for (int i = 0; i < size;i++)
    {
        int element;
        cin >> element;
        vr.push_back(element);
    }

    moving_zeroes(vr, size);
}