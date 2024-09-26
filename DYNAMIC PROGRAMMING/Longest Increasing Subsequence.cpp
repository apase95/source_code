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

    // Find the length of the Longest Increasing Subsequence
    // input: 3 10 2 1 20
    // output: 3

ll i,j,n,m,k;
ll a[NMAX];


ll LIS()
{
    vector<ll> dp(n+5);

    ll ans=1;
    FOR(i,1,n) 
    {   
        dp[i]=1;
        FOR(j,1,i-1) 
            if (a[i]>=a[j]) 
                dp[i]=max(dp[i],dp[j]+1);
        ans=max(ans,dp[i]);
    }
    
    return ans;
}


int main()
{
    nooby_speedrun
    checkIO 

    cin >> n;
    FOR(i,1,n) cin >> a[i];
    return cout << LIS(),0;
}


/*----------------------------------------------------------------------------------*
*                                                   _     _                         *
*      |------------------------|              |\__/,|   ( )                        *
*      | author: noobyhandsome  |            _.|o o  |_   ) )               <3      *
*      |------------------------|            (((-^-(((------)                       *
*                                                                                   *
*----------------------------------------------------------------------------------*/
