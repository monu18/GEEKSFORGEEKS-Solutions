#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll t;
  cin>>t;
  while (t--) {
    ll n;
    cin>>n;
    ll a[n];
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
      cin>>a[i];
    }
    ll maxx1=-1000000007;
    for(ll i=0;i<n;i++)
    {
      sum+=a[i];
      maxx1=max(maxx1,sum);
      if (sum<=0) {
        /* code */
        sum=0;
      }
    }
    cout<<maxx1<<"\n";

  }
  return 0;
}
