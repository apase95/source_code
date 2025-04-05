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

#define FOR(i,a,b) for(ll i=(a); i<=(b); ++i)
#define FOD(i,a,b) for(ll i=(a); i>=(b); --i)
#define bitUp(i,n) for(; i <= n; i += i & -i)
#define bitGet(i) for(; i > 0 ; i -= i & -i)

#define all(v) (v).begin(), (v).end()
#define sz(v) ((v).size())
#define vll vector<ll>
#define vvll vector<vll>

#define nooby_speedrun ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
#define checkIO if(fopen("TEST.INP","r")){freopen("TEST.INP","r",stdin);freopen("TEST.OUT","w",stdout);}

const ll MOD = 1e9 + 7;
const ll INF = 1e9 + 1406;
const ll BASE = 31;
const ll LOG = 17;
const ll NMAX = 2e5 + 9;
const ll N = 5e3 + 9;

const ll dx4[4] = {-1, 0, 0, 1};
const ll dy4[4] = {0, -1, 1, 0};
const ll dx8[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const ll dy8[8] = {-1, 0, 1, -1, 1, -1, 0, 1};


/*----------------------------------------------[ YOU GAY! ]-------------------------------------------*/


ll i,j,n,m,k;


void init()
{
    cin >> n >> k;
}

string sumLargeNumber(string s,string f)
{
    while(s.size() < f.size()) s="0"+s;
    while(f.size() < s.size()) f="0"+f;

    ll n = s.size();
    string res(n, '0');

    ll carry=0;
    FOD(i, n - 1, 0)
    {
        ll digit = (s[i] - '0') + (f[i] - '0') + carry;
        carry = digit / 10;
        res[i] = (digit % 10) + '0';
    }
    if (carry) res = "1" + res;

    return res;
}

void solve()
{
    string dp[105][105];

    FOR (i, 0, n)
        FOR (j, 0, min(i, k))
        {
            if (j == 0 || j == i) dp[i][j] = "1";
            else dp[i][j] = sumLargeNumber(dp[i - 1][j - 1], dp[i - 1][j]); 
        }

    return cout << dp[n][k], void();
}


/*-----------------------------------------------[ END! ]----------------------------------------------*/


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
