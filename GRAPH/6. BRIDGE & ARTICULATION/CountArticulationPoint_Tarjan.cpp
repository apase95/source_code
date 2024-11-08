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
vector<ll> AP; //Articulation Point
vector<ll> num(N, 0LL), low(N, 0LL); 
ll cnt = 0;


void init()
{
    cin >> n >> m;
    FOR (i, 1, m)
    {
        ll u, v; cin >> u >> v;
        adj[u].pub(v);
        adj[v].pub(u);
    }
}

void tarjanDFS(ll u, ll parent)
{
    low[u] = num[u] = ++cnt;
    ll child = (parent != 0);

    for (ll v : adj[u]) if (v != parent)
    {
        if (num[v]) low[u] = min(low[u], num[v]);
        else
        {
            tarjanDFS(v, u);
            low[u] = min(low[u], low[v]);
            if (low[v] >= num[u]) ++child;
        }
    }
    if (child >= 2) AP.pub(u);
}

void solve()
{
    FOR (i, 1, n)
        if (!num[i])
            tarjanDFS(i, 0LL);

    cout << sz(AP) << "\n";
    for (ll node : AP)
        cout << node << " ";
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
