#include <bits/stdc++.h>
#define lli long long int
#include <algorithm>

using namespace std;

int check(){
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, a, b;
        cin >> x >> y >> a >> y;

        if (x == a && y == b){
            cout << "YES\n";
        }
        else{
            
        }

    }
    return 0;
}

// int main(){
//     int tc;
//     cin >> tc;

//     while(tc--){
//         int t, n, sum;
//         cin >> t >> n >> sum;

//         lli itr = 0;
//         int cases = t, base = 1;

//         while(sum != 0){
//             int d = sum / (n * base);
//             int m = min(d, cases);

//             itr = m * (lli)(pow(n, 2));

//             base *= 10;
//             cases -= d;   
//             sum %= (n * base);
//             n = 
//         }
        
//         cout << itr << endl;

//     }

//     return 0;
// }