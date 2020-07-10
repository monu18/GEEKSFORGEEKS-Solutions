#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
 {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    ll a[n];
	    ll sum=0;
	    ll f1=0,f2=0;
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    bool flag=0;
      sum=a[0];
	    for(ll i=1;i<=n;i++)
	    {
	        while(sum>k && f1<i-1)
          {
            sum-=a[f1];
            f1++;
          }

	        if(sum==k)
	        {
	            f2=i;
	            flag=1;
	            break;
	        }
          if(i<n) sum+=a[i];
	    }
	    if(!flag) cout<<-1<<"\n";
	    else cout<<f1+1<<" "<<f2<<"\n";
	}
	return 0;
}
