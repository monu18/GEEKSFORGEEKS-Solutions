#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[1005][1005];
ll knapsack(ll wt[],ll val[],ll w,ll n)
{
    if(n==0 || w==0)
    {
        return 0;
    }
    if(dp[n][w]!=-1)
    {
        return dp[n][w];
    }
    if(w>=wt[n-1])
    {
        return dp[n][w]=max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
    }
    else
    {
        return dp[n][w]=knapsack(wt,val,w,n-1);
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
        ll w;
        cin>>w;
        ll wt[n],val[n];
        memset(dp,-1,sizeof(dp));
        for(ll i=0;i<n;i++)
        {
            cin>>val[i];
        }for(ll i=0;i<n;i++)
        {
            cin>>wt[i];
        }
        cout<<knapsack(wt,val,w,n)<<"\n";
    }

	return 0;
}
