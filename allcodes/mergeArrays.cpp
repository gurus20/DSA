#include <bits/stdc++.h>

using namespace std;

void mergeArray(vector<int> a1, vector<int> a2, vector<int> &ma)
{
    int i = 0, j = 0, k = 0;
    int s1 = a1.size(), s2 = a2.size();

    while (i < s1 && j < s2)
    {
        if (a1[i] < a2[j])
        {
            ma[k++] = a1[i++];
        }
        else
        {
            ma[k++] = a2[j++];
        }
    }

    while (i < s1)
    {
        ma[k++] = a1[i++];
    }

    while (j < s2)
    {
        ma[k++] = a2[j++];
    }
}

void mergeArray_usingMap(vector<int> a1, vector<int> a2, vector<int> &ma)
{
    map<int, bool> mp;

    for (int i = 0; i < a1.size(); i++)
    {
        mp[a1[i]] = true;
    }
    for (int i = 0; i < a2.size(); i++)
    {
        mp[a2[i]] = true;
    }

    int k = 0;
    for (auto i : mp)
    {
        ma[k++] = i.first;
    }
}

void mergeArray_usingPriorityQue(vector<int> a1, vector<int> a2, vector<int> &ma)
{
    priority_queue<int, vector<int>, greater<int>> pq;

    for (const int i : a1)
        pq.push(i);
    for (const int i : a2)
        pq.push(i);
    int idx = 0;
    while (!pq.empty())
    {
        ma[idx++] = pq.top();
        pq.pop();
    }
}

int main()
{
    vector<int> a1 = {1, 3, 8, 15, 16};
    vector<int> a2 = {2, 4, 5, 7, 8, 19};

    vector<int> ma(a1.size() + a2.size());
    int n = a1.size() + a2.size();

    auto start = chrono::high_resolution_clock::now();
    mergeArray(a1, a2, ma);
    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);

    cout << "Time taken by function mergeArray: " << duration.count() << "ms" << endl;

    start = chrono::high_resolution_clock::now();
    mergeArray_usingMap(a1, a2, ma);
    stop = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(stop - start);

    cout << "Time taken by function mergeArray_usingMap: " << duration.count() << "ms" << endl;

    start = chrono::high_resolution_clock::now();
    mergeArray_usingPriorityQue(a1, a2, ma);
    stop = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(stop - start);

    cout << "Time taken by function mergeArray_usingPriorityQue: " << duration.count() << "ms" << endl;

    for (int i = 0; i < n; i++)
        cout << ma[i] << " ";
    return 0;
}