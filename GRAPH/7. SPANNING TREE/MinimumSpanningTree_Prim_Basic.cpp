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
vector<bool> used(N, false);


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

void Prim(ll node)
{
    vector<edge> MST;
    ll sum_weight = 0;
    used[node] = true;

    while (sz(MST) < (n - 1))
    {
        ll min_weight = INF;
        ll X,Y;

        FOR (U,1,n)
            if (used[U])
                for (pll it : adj[U])
                {
                    ll V = it.F, W = it.S;
                    if (!used[V] && W < min_weight)
                    { 
                        min_weight = W; 
                        X = V; Y = U; 
                    }
                }

        MST.pub({X, Y, min_weight});
        sum_weight += min_weight;
        used[X] = true;
    }

    cout << sum_weight << "\n";
    for (edge node : MST)
        cout << node.U << " " << node.V << " " << node.W << "\n";
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