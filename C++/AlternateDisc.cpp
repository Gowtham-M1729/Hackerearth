#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
int subarraySum(int arr[], int n)
{
    int c = 0;
    for (int i = 0; i < n / 2; i++)
    {
        int st = i;
        int end = n - 1 - i;
        for (int j = st; j <= end; j = j + 2)
        {
            c++;
            swap(&arr[j], &arr[j + 1]);
        }
        print(arr, n);
        cout << endl;
        cout << "Count is " << c << endl;
    }
    return 0;
}
int main()
{
    int n, i, j, s;
    int a[100];
    cout << "Enter the nimber of elements you want" << endl;
    cin >> n;
    cout << "Enter the Array" << endl;
    a[0] = 0;
    for (i = 1; i < 2 * n; i++)
    {
        a[i] = 1 - a[i - 1];
    }
    cout << "The Given Array is:" << endl;
    print(a, 2 * n);
    cout << endl;
    cout << "Step By Step process Will be" << endl;
    subarraySum(a, 2 * n);
}