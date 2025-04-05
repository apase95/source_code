#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pll pair<ll, ll>
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

#define FOR(i, a, b) for (ll i = (a); i <= (b); ++i)
#define FOD(i, a, b) for (ll i = (a); i >= (b); --i)
#define bitUp(i, n) for (; i <= n; i += i & -i)
#define bitGet(i) for (; i > 0; i -= i & -i)

#define all(v) (v).begin(), (v).end()
#define sz(v) ((v).size())
#define vll vector<ll>
#define vvll vector<vll>

#define nooby_speedrun ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0);

const ll MOD = 1e9 + 7;
const ll INF = 1e9 + 1406;
const ll BASE = 31;
const ll LOG = 17;
const ll NMAX = 5e4 + 9;
const ll N = 1e3 + 9;

const ll dx4[4] = {-1, 0, 0, 1};
const ll dy4[4] = {0, -1, 1, 0};
const ll dx8[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const ll dy8[8] = {-1, 0, 1, -1, 1, -1, 0, 1};


/*-----------------------------------------------[ MAIN! ]---------------------------------------------*/


ll i, j, n, m, k;
string s, f;


void checkIO(string s)
{
    if (fopen((s + ".in").c_str(), "r")){ 
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout); }
}

void init()
{
    cin >> s;
    cin >> f;
}

string multipBigNumber(string s, string f)
{
    if (s == "0" || f == "0") return "0";

    ll n = sz(s); 
    ll m = sz(f);
    vector<ll> mark(n + m, 0);

    FOD (i, n - 1, 0) 
        FOD (j, m - 1, 0)
        {
            ll mul = (s[i] - '0') * (f[j] - '0');
            ll sum = mul + mark[i + j + 1];
            mark[i + j + 1] = sum % 10;
            mark[i + j] += sum / 10;
        }

    string res = "";
    for (ll num : mark)
        if (!(res.empty() && num == 0))
            res += to_string(num);

    return res.empty() ? "0" : res;
}

void solve()
{
    return cout << multipBigNumber(s, f), void();
} 


/*-----------------------------------------------[ END! ]----------------------------------------------*/


int main()
{
    nooby_speedrun
    checkIO("test");
    //checkIO("nameOfProblem");
    

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
