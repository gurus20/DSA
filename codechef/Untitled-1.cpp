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

        string s;
        cin >> s;

        int count = 0;

        int j = n - 1;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[j])
            {
                for (int k = i + 1; k < n / 2; k++)
                {
                    if (s[k] == s[i])
                    {
                        count++;
                        s[i] = '0';
                        s[k] = s[i];
                    }
                    else
                    {
                        if(count > 1){
                            count++;
                        }
                        else{
                        count = 1;
                        }
                    }
                }
            }
            j--;
        }

        cout << count << endl;
    }
    return 0;
}