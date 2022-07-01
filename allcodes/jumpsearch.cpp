#include <bits/stdc++.h>

using namespace std;

int jumpSearch(vector <int> a, int s)
{
    int n = a.size(), jump = sqrt(n), foundAt = -1;

    for (int i = 0; i < n; i += jump)
    {
        if (a[i] == s)
        {
            foundAt = i;
        }

        if (a[i] > s)
        {
            for (int j = i - jump; j < i; j++)
            {
                if (a[j] == s)
                {
                    foundAt = j;
                }
            }
        }

        if (i == n - jump)
        {
            for (int j = i; j < n; j++)
            {
                if (a[j] == s)
                {
                    foundAt = j;
                }
            }
        }
    }

    return foundAt;
}

int main()
{
    vector<int> a = {0, 4, 5, 6, 7, 8, 9, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int s;
    cin >> s;

    int foundAt = jumpSearch(a, s);

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