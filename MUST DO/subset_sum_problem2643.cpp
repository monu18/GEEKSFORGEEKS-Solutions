#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool findPartition(ll a[], ll n, ll w)
{
  if (w==0) {
    /* code */
    return true;
  }
  if (n==0) {
    /* code */
    return false;
  }
  if (a[n-1]<=w) {
    /* do something */
    return findPartition(a,n-1,w-a[n-1])||findPartition(a,n-1,w);
  }
  else
  {
    return findPartition(a,n-1,w);
  }
}
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    ll a[n];
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
      cin>>a[i];
      sum+=a[i];
    }
    if (sum%2==0) {
      /* code */
      ll w=sum/2;
      if (findPartition(a,n,w)) {
        /* code */
        cout<<"YES"<<"\n";
      }
      else
      {
        cout<<"NO"<<"\n";
      }
    }
    else
    {
      std::cout << "NO" << '\n';
    }

  }
  return 0;
}
