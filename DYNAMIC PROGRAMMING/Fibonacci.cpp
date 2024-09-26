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

    // Find number fibonacci Nth 
    // input: 10
    // output: 55

ll i,j,n,m,k;


ll FIBONACCI(ll n)
{
    vector<ll> dp(n+5);
    dp[0]=0; dp[1]=1; dp[2]=1;

    FOR(i,3,n) 
        dp[i]=(dp[i-1]+dp[i-2])%MOD;

    return dp[n];
}


int main()
{
    nooby_speedrun
    checkIO 

    cin >> n;
    return cout << FIBONACCI(n),0;
}


/*----------------------------------------------------------------------------------*
*                                                   _     _                         *
*      |------------------------|              |\__/,|   ( )                        *
*      | author: noobyhandsome  |            _.|o o  |_   ) )               <3      *
*      |------------------------|            (((-^-(((------)                       *
*                                                                                   *
*----------------------------------------------------------------------------------*/
