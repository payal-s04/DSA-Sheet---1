/*
Problem 1 :

You are given t number of testcases. Each testcase contains a string s.
Write a program to reverse the given array string.

E.g.
 Input:
 github
 
 Output:
 buhtig
*/

#include <iostream>
using namespace std;

void reversedString(string s)
{
    int len = s.size(), i = 0;
  
    while (i < len)
    {
        char temp = s[len - 1];
        s[len - 1] = s[i];
        s[i] = temp;
        len--;
        i++;
    }
  
    cout << s << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        reversedString(s);
    }

    return 0;
}
