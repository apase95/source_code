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

const ll dx4[4]={-1,0,0,1};
const ll dy4[4]={0,-1,1,0};
const ll dx8[8]={-1,-1,-1,0,0,1,1,1};
const ll dy8[8]={-1,0,1,-1,1,-1,0,1};


/*----------------------------------------------[ YOU GAY! ]-------------------------------------------*/


ll i,j,n,m,k;
ll sta,ed;
vector<ll> adj[N], parent(N,0);
vector<ll> pathG;
bool visited[N];


void init()
{
    cin >> n >> m >> sta >> ed;
    FOR (i,1,m) 
    {
        ll u,v; cin >> u >> v;
        adj[u].pub(v);
        adj[v].pub(u);
    }
}

void DFS(ll U)
{
    visited[U] = true;
    for (ll V : adj[U])
        if (!visited[V])
        {
            parent[V] = U;
            DFS(V);
        }
}

void path(ll sta,ll ed)
{
    DFS(sta);
    if (!visited[ed]) cout << "NOT FOUND!";
    else
    {
        while (sta != ed)
        {
            pathG.pub(ed);
            ed = parent[ed];
        }
        pathG.pub(sta);
        reverse(pathG.begin(), pathG.end());
        for (ll i : pathG) cout  << i << " ";
    }
}

void solve()
{
    path(sta,ed);
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
