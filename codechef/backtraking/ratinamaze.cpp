#include <bits/stdc++.h>

using namespace std;

void maze(int mat[4][4], int sol[4][4], int i, int j, int n)
{
  if (i == n || j == n)
  {
    return;
  }
  else
  {
    if (mat[i][j] == 0)
    {
      return;
    }
    else
    {
      sol[i][j] = 1;
      
      if ((mat[i+1][j] == 0) && (mat[i][j+1] == 0)){
        sol[i][j] = 0;
        return;
      }
      maze(mat, sol, i + 1, j, n);
      maze(mat, sol, i, j + 1, n);

    }
  }
}

int main()
{
  int a[4][4] = {{1, 0, 0, 0},
                 {1, 1, 1, 0},
                 {1, 0, 1, 0},
                 {1, 1, 1, 1}};
  int n = 4;
  int sol[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

  maze(a, sol, 0, 0, n);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << sol[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}