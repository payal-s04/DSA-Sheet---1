/*
Problem 2:

You are given t number of testcases. Each testcase contains a string s.
Write a program to check whether a String is Palindrome or not. Return 1, if yes and -1 otherwise.

E.g.
 Input:
 aba
 Output:
 1
 
 Input:
 abc
 Output:
 -1
*/

#include <iostream>
using namespace std;

int checkPalindrome(string s)
{
    for (int i = 0; i <= (s.size() / 2); i++)
    {
        if(s[i] != s[s.size() - 1 - i])
        {
            return -1;
        }
    }
    
    return 1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        cout << checkPalindrome(s) << endl;
    }
    
    return 0;
}
