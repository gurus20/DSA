#include <bits/stdc++.h>

using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void mergeSort(vector<int> &a, int n, )
{
    
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    mergeSort(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}