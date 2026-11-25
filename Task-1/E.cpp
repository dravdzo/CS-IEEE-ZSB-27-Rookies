#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;

        if (x == 'c' || x == 'o' || x == 'd' || x == 'e' || x == 'f' || x == 'r' || x == 's')
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}