#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592
#define ll long long int
#define N 100000

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
	ll s[N],i,j;
	s[0]=s[1]=1;
	for(i=2;i<N;i++)
	    s[i]=1;
	for(i=2;i<N;i++) {
	    if(s[i]==1) {
	        for(j=i+i;j<N;j+=i)
	            s[j]=0;
	    }
	}
	vector <ll> primes;
	i=0;
	while(i<N) {
	    if(s[i]==1)
	        primes.push_back(i);
	    (primes.size()<50000)?i++:break;
	}
	vector <double> a;
	double tem;
	for(i=0;i<primes.size();i++) {
	    tem=PI/primes[i];
	    (i==0)?a.push_back(tem):a.push_back(a[i-1]+tem);
	}
	ll T,n;
	cin>>T;
	while(T--) {
	    cin>>n;
	    cout<<a[n-1]<<"\n";
	}
	return 0;
}
