#include<bits/stdc++.h>

typedef long long int ll;
int arr[1000005];
ll pow_mod(ll a, ll b, ll M)
{   ll ans = 1LL;
    while (b > 0) {
        if ( b%2 == 1) {
            ans=(ans * a)% M;
        }
        a = (a * a)%M;
        b = b / 2;
    }
    return ans;
}
void sieve(int n)
{
    int i, p;
    for(i = 0;i <= n; i++)
          arr[i] = i;
    for(p = 2;p <= n; p++)
    {
        if(arr[p] == p)
        {
            for(i = p;i< = n;i += p)
            {
                arr[i] = p;
            }
        }
    }

}
int main()
{
    #ifdef ONLINE_JUDGE
    // Assume input.txt and output.txt suitably exists
    freopen("output.txt", "w", stdout);
    #endif

    std::ios_base::sync_with_stdio(false);
    ll i,w,h,u1,u2,d1,d2,dm,dmn,pre[100001]={0};
    for(i=1;i<100001;i++)
    {
        pre[i] += (pre[i - 1] + i);
    }
    std::cin>>w>>h;
    std::cin>>u1>>d1;
    std::cin>>u2>>d2;

    dm = std::max( d1, d2);
    w += ( pre[h] - pre[dm-1] );
    (dm == d1) ? w -= u1 : w -= u2;
    if(w < 0) w = 0;

    dmn = std::min(d1,d2);
    w += (pre[dm] - pre[dmn]);

    (dmn == d1) ? w -= u1 : w -= u2;
    if(w < 0) w = 0;

    w += (pre[dmn - 1]);
    std::cout<<w<<" ";
    return 0;
}
