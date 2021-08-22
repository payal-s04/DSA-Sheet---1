/*
Problem :

You are given n size of an array a[n]. Array contains both positive and negative numbers in random order.
Rearrange the array elements so that all negative numbers appear before all positive numbers.

E.g.
 Input:
 -12 11 -13 -5 6 -7 5 -3 -6
 Output:
 -12 -13 -5 -7 -3 -6 11 6 5
*/

#include<iostream>
using namespace std;

void Rearrange(int a[], int n)
{
    int j = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            if(i != j)
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            j++;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    Rearrange(a, n);
    
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
        
    return 0;
}
