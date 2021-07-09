#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value" << endl;
    cin >> n;
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
        cout << endl
             << endl;
    }
}