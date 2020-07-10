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
  //  ll max_element=0;
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
      cin>>a[i];
      //max_element=max(max_element,a[i]);
    }
    sort(a,a+n);
    for(ll i=n-1;i>=0;i--)
    {
      ll j=0,k=i-1;
      while (j<k) {
        if (a[i]==a[j]+a[k]) {
          /* code */
          ans++;
          j++;
          k++;
        }
        else if (a[i]>a[j]+a[k]) {
          /* code */
          j++;
        }
        else
        {
          k--;
        }
      }
    }
    if (ans) {
      cout<<ans<<"\n";
    }
    else cout<<"-1\n";
 }
  return 0;
}
