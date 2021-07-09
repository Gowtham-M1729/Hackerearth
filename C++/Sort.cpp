#include <bits/stdc++.h>
using namespace std;
int print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
int main()
{
    int A[] = {1, 4, 45, 6, 10, 8};
    int sum = 22;
    int arr_size = *(&A + 1) - A;
    // = sizeof(A) / sizeof(A[0]);
    print(A, arr_size);
    sort(A, A + arr_size);
    print(A, arr_size);
    return 0;
}
