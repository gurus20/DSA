#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main()
{
    int a,b;
    int r;

    cin >> a>> b>>r;

    int fibbo = a+b;
    int temp = b;
    int i = 0;

    while(1){
        fibbo = fibbo + temp;
        temp = fibbo;
        r--;
    }

    cout << fibbo;

    return 0;
}

