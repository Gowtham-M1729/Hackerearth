
#include <bits/stdc++.h>
using namespace std;
int printPowerSet(int arr[], int n)
{
    cout << (1 << n) << endl;

    for (int i = 0; i < (1 << n); i++)
    {
        cout << "{ ";
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
                cout <<arr[j] << ",";
        }
        cout << " }";
        cout << endl<<endl;
    }

    return 0;
}

int main()
{
    int arr[100];
    int i,n;
    cout << "Enter the nimber of elements you want" << endl;
    cin >> n;
    cout << "Enter the Array" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The Given Array is:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    printPowerSet(arr, n);

    return 0;
}
