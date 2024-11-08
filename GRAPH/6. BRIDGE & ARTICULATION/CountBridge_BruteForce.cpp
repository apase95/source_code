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
vector<ll> adj[N];
vector<pll> edgeList;
bool visited[N];


void init()
{
    cin >> n >> m;
    FOR (i, 1, m)
    {
        ll u,v; cin >> u >> v;
        adj[u].pub(v);
        adj[v].pub(u);
        edgeList.pub({u, v});
    }
}

void DFS(ll u)
{
    visited[u] = true;
    for (ll v : adj[u])
        if (!visited[v])
            DFS(v);
}

void DFSRemove(ll u, ll s, ll t)
{
    visited[u] = true;
    for (ll v : adj[u])
    {
        if ((u == s && v == t) || (u == t && v == s)) continue;
        if (!visited[v]) 
            DFSRemove(v, s, t);
    }    
}

ll countNumberOfCC()
{
    ll numberOfCC = 0;
    memset(visited, false, sizeof(visited));

    FOR (u, 1, n)
        if (!visited[u])
            { ++numberOfCC; DFS(u); }
    
    return numberOfCC;
}

void countBridge()
{
    ll numberOfCC = countNumberOfCC();
    ll res = 0;

    for (pll edge : edgeList)
    {
        ll u = edge.F, v = edge.S;
        memset(visited, false, sizeof(visited));
        
        ll countCurrCC = 0;
        FOR (i, 1, n)
            if (!visited[i])
                { ++countCurrCC; DFSRemove(i, u, v); }

        if (countCurrCC > numberOfCC) 
            { ++res; cout << u << " " << v << "\n"; } 
    }

    return cout << res, void();
}

void solve()
{
    countBridge();
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
