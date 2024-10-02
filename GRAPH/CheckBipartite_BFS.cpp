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


ll i,j,n,m,k;
vector<ll> adj[N];
vector<ll> color(N, -1ll);


void init()
{
    cin >> n >> m;
    FOR (i,1,m)
    {
        ll u,v; cin >> u >> v;
        adj[u].pub(v);
        adj[v].pub(u);
    }
}

// -1: None Color
//  0: White color
//  1: Black color

bool BFS(ll U)
{
    queue<ll> Q; 
    Q.push(U); color[U] = 0ll;

    while (!Q.empty())
    {
        ll V = Q.front(); Q.pop();
        for (ll next : adj[V])
        {
            if (color[next] == -1ll) { color[next] = 1ll - color[V]; Q.push(next); }
            else if (color[next] == color[V]) return false;
        }
    }

    return true;
}

void solve()
{   
    bool flag = true;
    FOR (i,1,n)
        if (color[i] == -1ll)
            if (!BFS(i)) 
                { flag = false; break; }

    if (flag) { cout << "YES\n"; FOR (i,1,n) (color[i] == 0ll) ? cout << i << ": WHITE\n" : cout << i << ": BLACK\n"; }
    else cout << "NO\n";
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
