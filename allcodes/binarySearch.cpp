#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> a, int s, int l, int h)
{
    if (h >= l)
    {
        int mid = l + (h - l) / 2;

        if (a[mid] == s)
            return mid;
        

        if (a[mid] > s)
            return binarySearch(a, s, l, mid - 1);
        
        return binarySearch(a, s, mid + 1, h);
    }

    return -1;
}

int main()
{
    vector<int> a = {0, 4, 5, 6, 7, 8, 9, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int s = 19;
    // cin >> s;

    int foundAt = binarySearch(a, s, 0, a.size() - 1);

    if (foundAt == -1)
    {
        cout << "Element Not Found" << endl;
    }
    else
    {
        cout << "Element Found at Index: " << foundAt << endl;
    }

    return 0;
}