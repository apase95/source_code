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


ll i,j,n,m,k,q;
pll sta,ed;
char a[N][N];
ll mark[N][N];


void init()
{
    cin >> n >> m;
    FOR (i,1,n)
        FOR (j,1,m)
        {
            cin >> a[i][j];
            if (a[i][j] == 'B') {sta.F = i; sta.S = j;}
            else if (a[i][j] == 'C') {ed.F = i; ed.S = j;}
        }
}

void BFS(ll i,ll j)
{
    queue<pll> q; q.push({i, j});
    a[i][j] = '*';

    while (!q.empty())
    {
        pll top = q.front(); q.pop();

        FOR(k,0,3)
        {
            ll x = top.F + dx4[k];
            ll y = top.S + dy4[k];
            
            if (a[x][y] == '.' || a[x][y] == 'C')
            {
                mark[x][y] = mark[top.F][top.S] + 1;
                q.push({x, y});
                a[x][y] = '*';
            }
        }
    }
}


void solve()
{
    BFS(sta.F, sta.S);
    cout << mark[ed.F][ed.S];
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
