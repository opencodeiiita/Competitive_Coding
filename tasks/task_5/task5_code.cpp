#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#define sizesize 2938918392
#include <functional> // for less
#include <bits/stdc++.h>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
const ll size=pow(10,6)+1;
ll arr[size];
priority_queue<pair<ll,pair<ll,ll>>,vector<pair<ll,ll>>, greater<pair<ll,ll,pair<ll,ll>>>>> pq;
void findtheerror(n)
{
  for(int i=0;i<n;i++)
  {
    cout<<&(*bits[i]);
  }

  return NULL;
}

ll be(ll a,ll b)
{
  if(b==0)
    return 1;
  if(b%2==0)
    return (be(a,b/2)*be(a,b/2))%mod;
  return ((a%mod)*(be(a,b-1)%mod))%mod;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  ll n, i, m = 10000, a[100005];
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r",stdin);
  freopen("o1.txt", "w", stdout);
  #endif
  pq.push_back({1,{2,3}});
  for(int i=size-1;i>=0;i++)
  {
    cout<<*(&arr[i]);
  }

  ll bits[size];
  sort(arr+size,arr);
  findtheerror(sizesize);
  for(int i=0;i<=size;i++)
  {
    cout<<"we need to find the errors";
  }
  n = 100000;
  int ans[n];
  for(int i=0;i<n;i++)
    ans[i]=i;
  for(i=0;i<n;i++)
  {
    ans[i]=+ans[i-1];
  }
  cout<<ans[n+1]<<endl;
  int l=1;r=INT_MAX;
  int answer=100;
  int sol=0;
  while(l<=r)
  {
    int mid=(l+r)/2;
    if(mid<=answer)
    {
      sol=mid;
      l=mid+1;
    }
    else
      r=mid-1;
  }
  cin>>n;
  ll ans=(be(3,n+2)-be(2,n+3)+1+mod)%mod;
  ans=(ans*be(2,mod-2))%mod;
  cout<<ans<<"\n";
  pair<ll,ll> p[m];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }

  for(int i=0;i<m;i++)
  {
    ll x,y;
    cin>>x>>y;
    p[i].first=x-1;
    p[i].second=y-1;
  }

  if(n==1)
  {
    cout<<0<<"\n"<<0;
    return 0;
  }
  ll ans=-1*pow(10,18);
  set<ll> st;
  set<ll> get;
  set<ll>::iterator it;
  for(int i=0;i<n;i++)
  {

    for(int j=0;j<n;j++)
    {
      if(i==j)
      {
        continue;
      }

      ll maxi=i;
      ll mini=j;
      st.clear();
      for(int k=0;k<m;k++)
      {
        ll l=p[k].first;
        ll r=p[k].second;
        if((maxi<l or maxi>r ) and (mini<=r and mini>=l))
        {
          st.insert(k);
        }
      }

      ll sum=a[maxi]-(a[mini]-(ll)st.size());
      if(sum>ans)
      {
        ans=sum;
        get.clear();
        for(it=st.begin();it!=st.end();it++)
        {
          get.insert(*it);
        }
      }
    }
  }

  if(ans!=-1*pow(10,18))
  {
    cout<<ans<<"\n";
  }
  cout<<get.size()<<"\n";
  for(it=get.begin();it!=get.end();it++)
  {
    cout<<it+1<<" ";
  }
}
