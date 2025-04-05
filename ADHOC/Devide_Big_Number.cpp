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

bool isSmaller(string s, string f)
{
    if (sz(s) != sz(f)) return sz(s) < sz(f);
    return s < f;
}

string subtractBigNumber(string s, string f)
{
    n = sz(s); m = sz(f);
    string res = "";
    ll carry = 0;
    ll diff = n - m;

    FOD (i, m - 1, 0)
    {
        ll sub = (s[i + diff] - '0') - (f[i] - '0') - carry;
        if (sub < 0) { sub += 10; carry = 1; }
        else carry = 0;
        res += (sub + '0');
    }

    FOD (i, diff - 1, 0)
    {
        ll sub = (s[i] - '0') - carry;
        if (sub < 0) { sub += 10; carry = 1; }
        else carry = 0;
        res += (sub + '0');
    }

    while (sz(res) > 1 && res.back() == '0') res.pob();
    reverse(all(res));
    return res;
}

string devideBigNumber(string s, string f)
{
    n = sz(s); m = sz(f);
    if (isSmaller(s, f)) return "0";
    if (f == "1") return s;

    string res = "";
    string rem = "";

    FOR (i, 0, n - 1)
    {
        rem += s[i];
        while (sz(rem) > 1 && rem[0] == '0') rem.erase(0, 1);

        ll cnt = 0;
        while (!isSmaller(rem, f))
            { rem = subtractBigNumber(rem, f); ++cnt; }

        res += (cnt + '0');
    }

    ll pos = res.find_first_not_of('0');
    if (pos != std::string::npos) 
        return res.substr(pos);
    return "0";
}

void solve()
{
    return cout << devideBigNumber(s, f), void();
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
