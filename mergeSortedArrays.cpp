#include <bits/stdc++.h>
using namespace std;

void mergeSortedArray(vector<int> a1, vector<int> a2, vector<int> &a3)
{
    int s1 = a1.size(), s2 = a2.size(), n = s1 + s2;

    int i = 0, j = 0, k = 0;
    while (i < s1 && j < s2)
    {
        if (a1[i] < a2[j])
        {
            a3[k++] = a1[i++];
        }
        else
        {
            a3[k++] = a2[j++];
        }
    }
    while (i < s1){
        a3[k++] = a1[i++];
    }
    while(j < s2){
        a3[k++] = a2[j++];
    }
}

int main()
{
    vector<int> a1 = {3, 5, 8, 10, 15};
    vector<int> a2 = {2, 5, 9, 14, 16, 18, 19};
    int n = a1.size() + a2.size();
    vector<int> a3(n);

    mergeSortedArray(a1, a2, a3);

    for (int i = 0; i < n; i++)
        cout << a3[i] << " ";
}