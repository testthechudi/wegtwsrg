#include <iostream>
using namespace std;

int main()
{
    int n, i, j, x;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        long long int fact = 1;
        cin >> x;
        for (j = 1; j <= x; j++)
        {
            fact = fact * j;
        }
        cout << fact << endl;
    }
    return 0;
}