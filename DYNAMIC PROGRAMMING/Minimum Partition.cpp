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
    // input: 1 11 5 6
    // output: 1 (12 & 11)

ll i,j,n,m,k;
ll a[N];


ll MP(ll half,ll sum)
{
    vector<vector<ll>> dp(n+5,vector<ll>(half+5,0));
    FOR(i,1,n) FOR(j,1,half)
    {
        if (j>=a[i]) dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i]]+a[i]);
        else dp[i][j]=dp[i-1][j];
    }

    return sum-2*dp[n][half];
}


int main()
{
    nooby_speedrun
    checkIO 

    cin >> n;
    ll sum=0; FOR(i,1,n) {cin >> a[i]; sum+=a[i];} 
    ll half=sum/2;
    return cout << MP(half,sum),0;
}


/*----------------------------------------------------------------------------------*
*                                                   _     _                         *
*      |------------------------|              |\__/,|   ( )                        *
*      | author: noobyhandsome  |            _.|o o  |_   ) )               <3      *
*      |------------------------|            (((-^-(((------)                       *
*                                                                                   *
*----------------------------------------------------------------------------------*/
