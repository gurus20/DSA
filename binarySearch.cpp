#include <bits/stdc++.h>
using namespace std;

int binarySearch_iterative(vector<int> a, int n, int key){
    int l = 0, h = n - 1;

    while (l <= h)
    {
        int m = (l + h)/2;
        if (a[m] == key)
            return m;
        
        if (key > a[m]) {
            l = m + 1; 
        }
        else {
            h = m - 1;
        }
    }
    return -1;
}

int binarySearch_recursive(vector<int> a, int l, int h, int key){
    if (l > h && a[l] != key)
        return -1;
    
    int m = (l + h) / 2;
    if (a[m] == key) return m;
    if (key > a[m])
        return binarySearch_recursive(a, m + 1, h, key);
    return binarySearch_recursive(a, l, m - 1, key);
}

int main()
{
    int n = 20;
    vector<int> a(n);
    a = {1, 6, 6, 8, 9, 10, 23, 32, 33, 34, 39, 44, 45, 54, 56, 66, 67, 78, 98, 387};
    int key;
    cin >> key;

    int idx = binarySearch_iterative(a, n, key);
    cout << "Iterative Approach\n";
    if (idx == -1) cout << "Element Not Found\n";
    else cout << "Element Found at Index : " << idx << endl;

    idx = binarySearch_recursive(a, 0, n - 1, key);
    cout << "\nRecursice Approach\n";
    if (idx == -1) cout << "Element Not Found\n";
    else cout << "Element Found at Index : " << idx << endl;

    return 0;
}

// space complexity = O(1)
// time complexity = O(logN)