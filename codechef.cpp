#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    unordered_map <int, int> mp;
    vector <int> arr(n);
    for (int i =0; i < n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }

    for (auto x: mp){
        cout << x.first << " presents " << x.second << " times" << endl;
    }

    return 0;
}