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

#define all(v) (v).begin(), (v).end()
#define sz(v) ((v).size())
#define vll vector<ll>
#define vvll vector<vll>>

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


struct edge
{
    ll U;
    ll V;
    ll W;
};


ll i,j,n,m,k;
vector<pll> adj[N];
vector<ll> parent(N);
vector<ll> used(N, false);


void init()
{
    cin >> n >> m;
    FOR (i,1,m)
    {
        ll u,v,w; cin >> u >> v >> w;
        adj[u].pub({v, w});
        adj[v].pub({u, w});
    }
}

void Prim(ll first_node)
{
    ll sum_weight = 0;

    priority_queue <pll, vector<pll>, greater<pll>> PQ;
    vector<edge> MST; 
    PQ.push({0ll, first_node});

    while (!PQ.empty())
    {
        ll U = PQ.top().S, weight = PQ.top().F; 
        PQ.pop();

        if (used[U]) continue;
        sum_weight += weight;
        used[U] = true;

        for (pll next : adj[U])
        {
            ll V = next.F, W = next.S;
            if (!used[V]) PQ.push({W, V});
        }
    }

    cout << sum_weight << "\n";
}


/*-----------------------------------------------[ END! ]----------------------------------------------*/


int main()
{
    nooby_speedrun
    checkIO 

    init();
    Prim(1ll);
    
    return 0;
}


/*----------------------------------------------------------------------------------*
*                                                   _     _                         *
*      |------------------------|              |\__/,|   ( )                        *
*      | author: noobyhandsome  |            _.|o o  |_   ) )               <3      *
*      |------------------------|            (((-^-(((------)                       *
*                                                                                   *
*----------------------------------------------------------------------------------*/
