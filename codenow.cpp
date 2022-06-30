#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        for (int i=0; i<20; i++){
            cout << (a^i)*(b^i) << endl;
        }
        
        cout << endl;
    }
    return 0;
}