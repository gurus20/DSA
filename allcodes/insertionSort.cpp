#include <bits/stdc++.h>

using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void insertionSort(vector<int> &a, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if(a[j] < a[j-1]){
                swap(&a[j], &a[j-1]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    insertionSort(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}