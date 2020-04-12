#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n-1];
    int count=0;
    for(int i=0;i<n-1;i++)
    {
      cin>>a[i];
      count+=a[i];
    }
    cout<<(n*(n+1))/2 -count<<"\n";
  }
}
