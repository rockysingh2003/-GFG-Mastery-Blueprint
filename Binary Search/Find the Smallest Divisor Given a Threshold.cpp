/*

#include<bits/stdc++.h>
using namespace std;
int divisor(vector<int> &ar,int threshold)
{
    int maximum = *max_element(ar.begin(), ar.end());
    for (int i = 1; i <= maximum;i++)  //this loop is divisor for us
    {
        int sum = 0;
        for (int j = 0; j < ar.size();j++)
        {

            sum += ceil(ar[j] / i);
        }


        if(sum<=threshold)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    vector<int> ar = {1, 2, 5, 9};
    int threshold = 8;

    int result = divisor(ar, threshold);

    if(result==-1)
    {
        cout << "\n no divisor is possible " << endl;
    }
    else
    {
        cout << "\n the divisor is " << result << endl;
    }
    return 0;
}*/

/*
#include <bits/stdc++.h>
using namespace std;

int divisor(vector<int> &ar, int threshold)
{
    int n = ar.size();
    int maximum = *max_element(ar.begin(), ar.end());
    for (int i = 1; i <= maximum; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += ceil((double)ar[j] /double(i)); // Corrected the division to ensure floating-point division
        }
        if (sum <= threshold)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> ar = {1, 2, 3, 4, 5};
    int threshold = 10;

    int result = divisor(ar, threshold);

    if (result == -1)
    {
        cout << "\n No divisor is possible." << endl;
    }
    else
    {
        cout << "\n The divisor is " << result << endl;
    }
    return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;
bool divide_kar_array_ko(vector<int> &ar, int middle, int threshold)
{
    int sum = 0;
    int n = ar.size();
    for (int i = 0; i < n; i++)
    {
        sum += ceil(double(ar[i]) / double(middle));
    }

    if (sum <= threshold)
        return true;
        else
            return false;
}

int divisor(vector<int> &ar, long double threshold)
{
    int lower = 1;
    int higher = *max_element(ar.begin(), ar.end());
    long double ans = -1;
    while (lower <= higher)
    {
        long double middle = lower + (higher - lower) / 2;

        if (divide_kar_array_ko(ar, middle, threshold) == true)
        {
            ans = middle;
            higher = middle - 1;
        }
        else
        {
            lower = middle + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> ar = {8, 4, 2, 3};
    int threshold = 10;
    int result = divisor(ar, threshold);
    if (result == -1)
    {
        cout << "\n No divisor is possible." << endl;
    }
    else
    {
        cout << "\n The divisor is " << result << endl;
    }
    return 0;
}