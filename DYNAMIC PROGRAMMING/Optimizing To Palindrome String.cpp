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

#define all(v) (v).begin(), (v).end()
#define sz(v) ((v).size())
#define vll vector<ll>
#define vvll vector<vll>>

#define nooby_speedrun ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
#define checkIO if(fopen("TEST.INP","r")){freopen("TEST.INP","r",stdin);freopen("TEST.OUT","w",stdout);}

const ll MOD=1e9+7;
const ll NMAX=2e5+5;
const ll N=1e3+5;
const ll INF=1e9;
const ll BASE=31;
const ll LOG=17;

const ll dx4[4]={-1,0,0,1};
const ll dy4[4]={0,-1,1,0};
const ll dx8[8]={-1,-1,-1,0,0,1,1,1};
const ll dy8[8]={-1,0,1,-1,1,-1,0,1};


/*----------------------------------------------[ ! ]-------------------------------------------*/


ll i,j,n,m,k;
string s;


void init()
{
    cin >> n; cin.ignore();
    cin >> s;
}

void solve()
{
    vector<vector<ll>> dp(N, vector<ll>(N, 0));
    
    FOR (i,0,n-1) dp[i][i] = 1;

    FOR (len,2,n)
        FOR (i,0,n-len)
        {
            j = i + len - 1;
            if (s[i] == s[j]) dp[i][j] = dp[i + 1][j - 1] + 2;
            else dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
        }
    return cout << n - dp[0][n - 1], void();
}


int main()
{
    nooby_speedrun
    checkIO 

    init();
    solve();

    return 0;
}


/*----------------------------------------------------------------------------------*
*                                                   _     _                         *
*      |------------------------|              |\__/,|   ( )                        *
*      | author: noobyhandsome  |            _.|o o  |_   ) )               <3      *
*      |------------------------|            (((-^-(((------)                       *
*                                                                                   *
*----------------------------------------------------------------------------------*/