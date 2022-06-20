#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> a, int x, int l, int r)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (a[mid] == x)
            return mid;

        if (a[mid] > x) 
            return binarySearch(a, x, l, mid - 1);

        return binarySearch(a, x, mid + 1, r);
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

    int res = binarySearch(a, x, 0, a.size() - 1);
    (res == -1) ? cout << "Element Not Found" << endl : cout << "Element Found at index : " << res << endl;

    return 0;
}