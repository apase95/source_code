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


ll i,j,n,m,k,s;
vector<pll> adj[N];


void init()
{
    cin >> n >> m >> s;
    FOR (i, 1, m)
    {
        ll u, v, w; cin >> u >> v >> w;
        adj[u].pub({v , w});
        adj[v].pub({u , w});
    }
}

void Dijkstra(ll root)
{
    vector<ll> dist(n + 1, INF);
    dist[root] = 0;
    
    priority_queue <pll, vector<pll>, greater<pll>> PQ;
    PQ.push({0LL, root});

    while (!PQ.empty())
    {
        pll top = PQ.top(); PQ.pop();
        ll currDist = top.F;
        ll u = top.S;
        
        if (currDist > dist[u]) continue;
        for (pll next : adj[u])
        {
            ll v = next.F;
            ll w = next.S;
            if (dist[v] > dist[u] + w) 
                { dist[v] = dist[u] + w; PQ.push({dist[v], v}); }
        }
    }

    FOR (u, 1, n) 
        cout << root << " " << u << " " << dist[u] << "\n";
}
       
void solve()
{
    Dijkstra(s);
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
