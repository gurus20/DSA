#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;

    while (a > 1)
    {
        a -= b;
        ans++;
    }
    cout << ans << endl;
}