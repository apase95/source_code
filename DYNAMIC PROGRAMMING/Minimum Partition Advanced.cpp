#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pll pair<ll,ll>
#define F first
#define S second
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define eb emplace_back
#define ins insert
#define ers erase
#define gcd __gcd
#define LB lower_bound
#define UB upper_bound

#define FOR(i,a,b) for(ll i=(a);i<=(b);++i)
#define FOD(i,a,b) for(ll i=(a);i>=(b);--i)
#define bitUp(i,n) for(;i<=n;i+=i&-i)
#define bitGet(i) for(;i>0;i-=i&-i)

#define nooby_speedrun ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
#define checkIO if(fopen("TEST.INP","r")){freopen("TEST.INP","r",stdin);freopen("TEST.OUT","w",stdout);}

const ll MOD=1e9+7;
const ll NMAX=2e5+5;
const ll N=5e3+5;
const ll INF=1e9;
const ll BASE=31;
const ll LOG=17;


/*----------------------------------------------[ YOU GAY! ]-------------------------------------------*/

    // Divide it into 2Sets such that the absolute difference between their SUM is MINIMUM.
    // Advanced version

ll i,j,n,m,k;
ll a[N];


ll MPA(ll half,ll sum)
{
    vector<ll> dp(n+5,0);
    ll ans=0;

    FOR(i,1,n)
    {
        if (a[i]<=half) dp[i]=a[i];

        FOR(j,0,i-1)
            if ((dp[j]+a[i])<=half)
                dp[i]=max(dp[i],dp[j]+a[i]);

        ans=max(ans,dp[i]);
    }

    return sum-2*ans;
}


int main()
{
    nooby_speedrun
    checkIO 

    cin >> n;
    ll sum=0; FOR(i,1,n) {cin >> a[i]; sum+=a[i];} 
    ll half=sum/2;
    return cout << MPA(half,sum),0;
}


/*----------------------------------------------------------------------------------*
*                                                   _     _                         *
*      |------------------------|              |\__/,|   ( )                        *
*      | author: noobyhandsome  |            _.|o o  |_   ) )               <3      *
*      |------------------------|            (((-^-(((------)                       *
*                                                                                   *
*----------------------------------------------------------------------------------*/
