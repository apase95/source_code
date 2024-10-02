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

bool cmp(edge a,edge b) { return a.W < b.W; }


ll i,j,n,m,k;
vector<ll> parent(N);
vector<ll> ranking(N);
vector<edge> G; 


void init()
{
    cin >> n >> m;
    FOR (i,1,m)
    {
        ll u,v,w; cin >> u >> v >> w;
        G.pub({u, v, w});
    }
}

void Make_set()
{   
    FOR (i,1,n) 
        { parent[i] = i; ranking[i] = 1; }
}

ll Find(ll V)
{
    if (V == parent[V]) return V;
    return parent[V] = Find(parent[V]);
}

bool Union(ll a,ll b)
{
    a = Find(a); b = Find(b);
    if (a == b) return false;

    if (ranking[a] < ranking[b]) swap(a, b);
    parent[b] = a;
    ranking[a] += ranking[b];
    return true;
}

void Kruskal()
{
    vector<edge> MST;

    sort(G.begin(), G.end(), cmp);

    ll sum_weight = 0;
    FOR (i,1,m)
    {
        if (sz(MST) == (n - 1)) break;

        edge e = G[i - 1];
        if (Union(e.U, e.V)) 
        {
            MST.pub(e);
            sum_weight += e.W;
        }
    }

    if (sz(MST) != (n - 1)) cout << "Impossible";
    else
    {
        cout << "MST: " << sum_weight << "\n";
        for (edge e : MST) 
            cout << e.U << " " << e.V << " " << e.W << "\n";    
    }
}


/*-----------------------------------------------[ END! ]----------------------------------------------*/


int main()
{
    nooby_speedrun
    checkIO 

    init();
    Make_set();
    Kruskal();
    
    return 0;
}


/*----------------------------------------------------------------------------------*
*                                                   _     _                         *
*      |------------------------|              |\__/,|   ( )                        *
*      | author: noobyhandsome  |            _.|o o  |_   ) )               <3      *
*      |------------------------|            (((-^-(((------)                       *
*                                                                                   *
*----------------------------------------------------------------------------------*/
