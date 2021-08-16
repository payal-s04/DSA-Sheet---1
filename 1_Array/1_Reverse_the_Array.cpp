/*
Problem :
You are given t number of testcases. Each testcase contains an array or a string.
Write a program to reverse the given array or the string.
  Case I :
    Taking an array a of size n
  Case II :
    Taking a string s of unknown size
*/

#include <iostream>
using namespace std;

/*
// Case I:

void reversedArray(int a[], int s, int e)
{
    while (s < e)
    {
        int temp = a[s];
        a[s] = a[e];
        a[e] = temp;
        s++;
        e--;
    }
}

void printReversedArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    cout << endl;
}
*/

// Case II:

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
        /*
        // Case I:

        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        reversedArray(a, 0, n - 1);
        printReversedArray(a, n);
        */

        // Case II:

        string s;
        cin >> s;

        reversedString(s);
    }

    return 0;
}
