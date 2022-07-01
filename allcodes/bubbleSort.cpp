#include <bits/stdc++.h>

using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(vector<int> &a, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n - i -1; j++)
        {
            if(a[j] > a[j+1]){
                swap(&a[j], &a[j+1]);
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

    bubbleSort(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}