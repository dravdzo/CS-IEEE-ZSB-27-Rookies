
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin >> x;

    long long sum = x * (x + 1) / 2;

    if (sum % 2 != 0)
    {
        cout << "NO\n";
        return 0;
    }

    sum /= 2;

    cout << "YES\n";

    vector<int> a, b;

    for (int i = x; i >= 1; i--)
    {
        if (i <= sum)
        {
            a.push_back(i);
            sum -= i;
        }
        else
        {
            b.push_back(i);
        }
    }

    cout << a.size() << '\n';

    for (int i : a)
        cout << i << ' ';

    cout << '\n';

    cout << b.size() << '\n';

    for (int i : b)
        cout << i << ' ';

    cout << '\n';

    return 0;
}
