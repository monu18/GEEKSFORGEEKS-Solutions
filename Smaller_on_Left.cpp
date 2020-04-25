#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 int main(int argc, char const *argv[]) {

  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    ll a[n];
    set<ll>s;
    s.clear();
    for(ll i=0;i<n;i++)
    {
      cin>>a[i];
      s.insert(a[i]);
      auto it=s.lower_bound(a[i]);
      if (it==s.begin()) {
        /* code */
        cout<<"-1"<<" ";
      }
      else{
        it--;
        cout<<*it<<" ";
      }
    }
    cout<<"\n";

  }
  return 0;
}
