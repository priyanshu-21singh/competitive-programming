#include <iostream>
using namespace std;

int main()
{
    int n, p;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> p;
        a[p - 1] = i + 1;
    }

    for(int j = 0; j < n; j++)
    {
        cout << a[j] << " ";
    }

    return 0;
}