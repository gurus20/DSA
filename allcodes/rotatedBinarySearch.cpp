// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int search(int a[], int l, int h, int key)
    {
        while (l <= h)
        {
            int mid = (h + l) / 2;

            if (a[mid] == key)
                return mid;
            
            if (a[l] < a[mid])
            { // left Part
                if (key < a[mid] && a[l] >= key)
                {
                    h = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            else
            { // Right Part
                if (key > a[mid] && a[h] <= key)
                {
                    h = mid + 1;
                }
                else
                {
                    l = mid - 1;
                }
            }
        }
        return -1;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
    return 0;
} // } Driver Code Ends
