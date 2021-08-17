/*
Problem 2 :

You are given t number of testcases. Each testcase contains 2 lines. First line contains size of an array n. Second line contains n elements of an array a.
Find the maximum and minimum element in the array.

E.g.
 Input:
 4
 12 23 0 87
 Output:
 87 0
*/

#include <iostream>
using namespace std;

int maxElement(int a[], int n)
{
    int Max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        Max = max(Max, a[i]);
    }
    
    return Max;
}

int minElement(int a[], int n)
{
    int Min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        Min = min(Min, a[i]);
    }
    
    return Min;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        cout << maxElement(a, n) << " " << minElement(a, n) << endl;
    }
    
    return 0;
}
