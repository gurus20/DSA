// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int *Rearrange(int *arr, int n);

int main()
{
    // code

    string str;
    cin >> str;
    
    cout << str.size();
    

    return 0;
} // } Driver Code Ends

int *Rearrange(int *arr, int n)
{
    int* b = new int[n];
    for (int i = 0; i < n; i++)
    {

        if (arr[i] != -1)
        {
            // cout << i  << " " << arr[i] << endl;
            if (arr[i] == i){
                b[i] = arr[i];
            }
            else
                b[arr[i]] = arr[i];
        }
        else
        b[i] = -1;    
    }
    return b;
}
