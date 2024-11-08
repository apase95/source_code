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
const ll NMAX = 1e5 + 9;
const ll N = 5e3 + 9;

const ll dx4[4] = {-1, 0, 0, 1};
const ll dy4[4] = {0, -1, 1, 0};
const ll dx8[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const ll dy8[8] = {-1, 0, 1, -1, 1, -1, 0, 1};


/*----------------------------------------------[ YOU GAY! ]-------------------------------------------*/


ll i,j,n,m,k;
vector<ll> adj[NMAX];
vector<ll> num(NMAX, 0LL), low(NMAX, 0LL);
stack<ll> pathG; 
ll cnt = 0, SCC = 0;


void init()
{
    cin >> n >> m;
    FOR (i, 1, m)
    {
        ll u, v; cin >> u >> v;
        adj[u].pub(v);
    }
}

void tarjanDFS(ll u)
{
    low[u] = num[u] = ++cnt;
    pathG.push(u);

    for (ll v : adj[u])
    {
        if (num[v]) low[u] = min(low[u], num[v]);
        else
        {
            tarjanDFS(v);
            low[u] = min(low[u], low[v]);
        }
    }

    if (low[u] == num[u])
    {
        ++SCC;
        ll v;
        do
        {
            v = pathG.top();
            pathG.pop();
            low[v] = num[v] = INF;
        }
        while (v != u);
    }
}

void solve()
{
    FOR (i, 1, n)
        if (!num[i])
            tarjanDFS(i);

    return cout << SCC, void();
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
