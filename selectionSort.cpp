#include <bits/stdc++.h>

using namespace std;

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

void selectionSort(vector<int> &a, int n)
{
    int minidx;
    for (int i = 0; i < n-1; i++)
    {
        minidx = i;
        for (int j = i+1; j < n; j++)
            if (a[j] < a[minidx])
                minidx = j;

        swap(&a[i], &a[minidx]);
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    selectionSort(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}