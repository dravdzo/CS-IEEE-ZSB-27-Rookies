
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;

    vector<int> w(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> w[i];

    int q;
    cin >> q;

    set<int> s;

    while (q)
    {
        int p;
        cin >> p;

        if (s.insert(p).second)
            x += w[p];
        else
        {
            s.erase(p);
            x -= w[p];
        }

        cout << x << '\n';

        q--;
    }

    return 0;
}
