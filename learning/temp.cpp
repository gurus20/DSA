#include <iostream>

using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  int arr[n+1]= {};
  int temp[n+1] = {};

  for (int i = 1; i <= n; i++)
  {
    arr[i] = i;
  }

  for (int i = 1; i <= n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  int d = 1;
  while (d<=k)
  {
    int j = 1;
    for (int i = 1; i <= n; i++)
    {
      if (i % 2 != 0)
      {
        temp[j] = arr[i];
        j++;
      }
    }

    for (int i = 1; i <= n; i++)
    {
      if (i % 2 == 0)
      {
        temp[j] = arr[i];
        j++;
      }
    }
    cout << "K = " << d << " [ ";
    for (int i = 1; i <= n; i++)
    {
      cout << temp[i] << " ";
      arr[i] = temp[i];
    }
    cout<<  "]" << endl;
    d++;
  }

  return 0;
}