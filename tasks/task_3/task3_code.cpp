#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    ll x;
    set<ll>s;
    for(int i=0;i<n;i++){
        cin>>x;
        s.insert(x);
    }
    
    map<ll,ll>mp1,mp2;
    
    for(auto it1=s.begin();it1!=s.end();it1++){
        for(auto it2=s.begin();it2!=s.end();it2++){
            ll x=pow(*it1,2)+pow(*it2,2);
            mp1[x]+=1;
        }
    }
    for(auto it1=s.begin();it1!=s.end();it1++){
        for(auto it2=it1;it2!=s.end();it2++){
            ll y=pow(*it2,2)-pow(*it1,2);
            mp2[y]+=1;
        }
    }
    ll ans=0;
    for(auto it=mp1.begin();it!=mp1.end();it++){
        ans+=(it->second*(mp2[it->first]));
    }
    cout<<ans;
    return 0;
}

