#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;

    int x1, y1, x2, y2;
    bool found = false;

    for (int i = 0; i < h; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < w; j++)
        {
            if (s[j] == 'o')
            {
                if (!found)
                {
                    x1 = i;
                    y1 = j;
                    found = true;
                }
                else
                {
                    x2 = i;
                    y2 = j;
                }
            }
        }
    }

    cout << abs(x1 - x2) + abs(y1 - y2);

    return 0;
}