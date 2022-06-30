#include <bits/stdc++.h>
using namespace std;

int calc(int n, int v)
{
    int d = n / v;
    int x = 10 - d;
    int l = d * v;
    int u = l + x;

    if (n > u)
        return -1;

    return (d + (n - l));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans;

        if (n < 100)
        {
            if (n == 10)
            {
                cout << 10 << endl;
            }
            else
            {
                ans = calc(n, 10);
                if (ans == -1)
                    cout << -1 << endl;
                else
                    cout << ans << endl;
            }
        }
        else if (n >= 100 && n <= 1000)
        {
            ans = calc(n, 100);
            if (ans == -1)
                cout << -1 << endl;
            else
                cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}