
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    stack<char> st;

    for (char c : s)
    {
        st.push(c);
    }

    int c = 1, mx = 1;

    while (st.size() > 1)
    {
        char last = st.top();
        st.pop();

        if (last == st.top())
        {
            c++;
        }
        else
        {
            mx = max(mx, c);
            c = 1;
        }
    }

    mx = max(mx, c);

    cout << mx << endl;

    return 0;
}
