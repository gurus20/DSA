#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> a, int n, int key){
    for (int i = 0; i < n; i++){
        if (a[i] == key)
            return i;
    }
    return -1;
} 

int main()
{
    int n = 20;
    vector<int> a(n);
    a = {8, 23, 56, 32, 1, 33, 10, 98, 387, 34, 78, 44, 6, 9, 39, 54, 66, 45, 67, 6};
    int key;
    cin >> key;
    int idx = linearSearch(a, n, key);
    if (idx == -1) cout << "Element Not Found\n";
    else cout << "Element Found at Index : " << idx << endl;
    return 0;
}

// space complexity = O(1)
// time complexity = O(n)