#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  int n,x,y,a;cin>>n;
  vector<int>A[10000+1];
  for(int i=0;i<n-1;i++)
  {
    cin>>x>>y;
    A[x].push_back(y);
    A[y].push_back(x);
  }
    cin>>a;
    queue<int>q;
    int mark[n+1]={0};
    int lev[n+1]={0};
    q.push(1);mark[1]=1;
    lev[1]=1;
  while(!q.empty())
  {
    int c=q.front();q.pop();
    for(int j=0;j<A[c].size();j++)
    { if(mark[A[c][j]]==0)
      {
        q.push(A[c][j]);
        mark[A[c][j]]=1;
        lev[A[c][j]]=lev[c]+1;
      }
    }
  }
  int N=0;
  for(int i=1;i<=n;i++)
  {
    if(lev[i]==a)
    {
      N++;
    }
  }
    cout<<N<<"\n";
}
