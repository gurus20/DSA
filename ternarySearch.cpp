#include <bits/stdc++.h>
using namespace std;

int ternarySearch(vector<int> a, int x, int l, int r)
{
    if (r >= l)
    {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        if (a[mid1] == x) return mid1;
        if (a[mid2] == x) return mid2;

        if (x < a[mid1]) 
            return ternarySearch(a, x, l, mid1-1);
        return ternarySearch(a, x, mid1+1, r);

        if (x > a[mid2]) 
            return ternarySearch(a, x, l, mid2-1);
        return ternarySearch(a, x, mid2+1, r);
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int x;
    cin >> x;

    int res = ternarySearch(a, x, 0, a.size() - 1);
    (res == -1) ? cout << "Element Not Found" << endl : cout << "Element Found at index : " << res << endl;

    return 0;
}