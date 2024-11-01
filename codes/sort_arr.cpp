#include <bits/stdc++.h>
using namespace std;

void swap1(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sort1(int a[], int n)  
{
    for (int i = 0; i < n - 1; i++)  
    {
        for (int j = i + 1; j < n; j++)  
        {
            if (a[i] > a[j])  
            {
                swap1(a[i], a[j]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort1(a, n);
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
