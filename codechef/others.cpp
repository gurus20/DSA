#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
  for (int i = -10; i< 10; i++){
  if (i == 0){
    cout << endl;
  }
  cout << (((2 + i)^(4 + i))^(7 + i)) << endl;
  }
  return 0;
}