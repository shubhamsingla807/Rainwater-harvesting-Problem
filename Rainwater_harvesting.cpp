#include<iostream>
#include<algorithm>
using namespace std;
int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
    int left[1000];
    int right[1000];

    left[0] = a[0];
    for(int i=1;i<n;i++){
        left[i] = max(a[i],left[i-1]);
    }

    right[n-1] = a[n-1];
    for(int i=n-2;i>=0;i--){
        right[i] = max(a[i],right[i+1]);
    }

    int answer =0;
    for(int i=0;i<n;i++){
    answer += min(left[i],right[i]) - a[i];
    }
    cout<<answer;
}
