#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int count = 0;
        vector<int> a(n);
        vector<int> b(32);

        for(int i = -0; i< n; i++){
            cin >> a[i];
            int j = 0;
            int temp = a[i];
            while(temp){
                if(b[j] == 0){
                    b[j] = temp%2;
                }

                temp /= 2;
                j++;
            }
        }
        for(int i = 0; i< 32; i++){
            count += b[i];
        }
        cout << count << endl;
    }
    return 0;
}
