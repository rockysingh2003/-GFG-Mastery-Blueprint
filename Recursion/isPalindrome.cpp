#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string str, int start, int end)
{
    // start = 0;
    // int size = sizeof(str) / sizeof(str[0]);
    // end = size - 1;

       if(start>=end)
           return true;
           
           return ((str[start] == str[end]) && isPalindrome(str, start + 1, end - 1));
}
int main()
{
    string str = "cabbac";
    cout << isPalindrome(str, 0, str.length()-1);
    return 0;
}