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

    // Check if there is a subset of the given set whose sum is equal to the given sum. 
    // input: 3 34 5 2 8 4 15
    // output: YES

ll i,j,n,m,k,sum;
ll a[N];


bool Subset_Sum(ll sum)
{
    vector<ll> dp(sum+5,0);
    dp[0]=1;

    FOR(i,1,n)
        FOD(j,sum,a[i])
            if (dp[i]==0 && dp[j-a[i]]==1)
                dp[j]=1;

    if (dp[sum]) return true; return false;
}


int main()
{
    nooby_speedrun
    checkIO 

    cin >> n >> sum;
    FOR(i,1,n) cin >> a[i];
    
    if (Subset_Sum(sum)) cout <<  "YES";
    else cout << "NO";
    return 0;
}


/*----------------------------------------------------------------------------------*
*                                                   _     _                         *
*      |------------------------|              |\__/,|   ( )                        *
*      | author: noobyhandsome  |            _.|o o  |_   ) )               <3      *
*      |------------------------|            (((-^-(((------)                       *
*                                                                                   *
*----------------------------------------------------------------------------------*/
