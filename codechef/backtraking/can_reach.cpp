#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t;
  cin >> t;
  while (t--)
  {
    int i, j , k;
    cin >> i >> j>> k;

    if (abs(i)%k == 0 && abs(j)%k == 0){
      cout << "YES" <<"\n";
    }
    else{
      cout << "NO" <<"\n";

    }
    
  }
  return 0;
}