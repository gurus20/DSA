#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(vector<int> &a, int l, int h)
{
    cout << "partition called" << endl;
    int p = h;

    int i = l, j = h - 1;
    while (i < j)
    {
        if (a[p] < a[i])
        {
            if (a[p] >= a[j])
            {
                swap(a[i], a[j]);
                i++;
                j--;
            }
        }
        else
        {
            i++;
        }

        if (a[p] >= a[j])
        {
            if (a[p] < a[i])
            {
                swap(a[i], a[j]);
                i++;
                j--;
            }
        }
        else
        {
            j--;
        }
    }
    cout << "G" << endl;
    int k = h;

    for (k; a[k] >= ; k--){

    }

    return k;
}

void quickSort(vector<int> &a, int l, int h)
{
    if (l >= h)
        return;

    int p = partition(a, l, h);
    // quickSort(a, l, p - 1);
    // quickSort(a, p + 1, h);
}

int main()
{
    vector<int> a = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    quickSort(a, 0, a.size() - 1);
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";

    return 0;
}