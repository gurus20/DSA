#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int s1 = (n + 1) * (n + 2) / 2;
    int s2 = 0;

    for (int i = 0; i < n; i++)
    {
        s2 = s2 + a[i];
    }

    cout << s1 - s2 << endl;

    return 0;
}