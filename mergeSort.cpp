#include <bits/stdc++.h>
using namespace std;

void mergeArray(vector<int> &a, int l, int h, int mid)
{
    int s1 = (mid - l) + 1;
    int s2 = h - mid;

    vector<int> a1(s1);
    vector<int> a2(s1);

    for (int i = 0; i < s1; i++)
        a1[i] = a[l + i];

    for (int j = 0; j < s2; j++)
        a2[j] = a[mid + 1 + j];
        
    int i = 0, j = 0, k = l;

    while (i < s1 && j < s2)
    {
        if (a1[i] <= a2[j])
        {
            a[k++] = a1[i++];
        }
        else
        {
            a[k++] = a2[j++];
        }
    }
    while (i < s1)
    {
        a[k++] = a1[i++];
    }
    while (j < s2)
    {
        a[k++] = a2[j++];
    }
}

void mergeSort(vector<int> &a, int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, h);
        mergeArray(a, l, h, mid);
    }
}

int main()
{
    vector<int> a = {12, 5, 9, 14, 16, 5, 8, 18, 19, 3, 10, 15};

    mergeSort(a, 0, a.size() - 1);

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";

    cout << endl;
}