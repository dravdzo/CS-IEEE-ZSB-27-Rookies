#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set<int> x;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        x.insert(a);
    }

    cout << x.size() << '\n';

    return 0;
}