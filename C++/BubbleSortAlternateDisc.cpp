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
void bubbleSort(int arr[], int n)
{   
    int i, j,count=0;
    int swaps;
    for (i = 0; i < n - 1; i++)
    {
        swaps = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            count += 1;
            if (arr[j] < arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swaps = 1;
            }
        }
        print(arr, n);
        cout<<"Count is "<<count<<endl<<endl;
        if (swaps == 0)
            break;
    }
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
    bubbleSort(a, 2 * n);

    return 0;
}
