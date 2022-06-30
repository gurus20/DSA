#include <bits/stdc++.h>

using namespace std;

void sort(vector<int> arr, int n){
  for(int i=0; i<n; i++){
    for(int j=0; j <n; j++){
      if(arr[i]<arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
cout << endl;
}

int main(){
  vector<int> arr;
  int n;
  cin >> n;
for(int i=0;i<n;i++)
{
  int a;
  cin>>a;
  arr.push_back(a);
} 
  sort(arr,n);
  return 0;
}