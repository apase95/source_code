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
#define UP upper_bound

#define FOR(i,a,b) for(ll i=(a);i<=(b);++i)
#define FOD(i,a,b) for(ll i=(a);i>=(b);--i)
#define bitUp(i,n) for(;i<=n;i+=i&-i)
#define bitGet(i) for(;i>0;i-=i&-i)

#define nooby_speedrun ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
#define checkIO if(fopen("TEST.INP","r")){freopen("TEST.INP","r",stdin);freopen("TEST.OUT","w",stdout);}

const ll MOD=1e9+7;
const ll NMAX=1e6+5;
const ll N=2e5+5;
const ll INF=1e9;
const ll LOG=17;


/*----------------------------------------------[ YOU GAY! ]-------------------------------------------*/


ll i,j,n,m,q;
ll a[N];
pll RMQ[LOG+1][N];


void build()
{
    FOR(i,1,n) RMQ[0][i].F=RMQ[0][i].S=a[i];

    for (ll i=1;i<=LOG;++i)
        for (ll j=1;j+(1<<i)-1<=n;++j)
        {
            RMQ[i][j].F=max(RMQ[i-1][j].F,RMQ[i-1][j+(1<<(i-1))].F);
            RMQ[i][j].S=min(RMQ[i-1][j].S,RMQ[i-1][j+(1<<(i-1))].S);
        }
}

pll get(ll L,ll R)
{
    ll pos=__lg(R-L+1);
    return {max(RMQ[pos][L].F,RMQ[pos][R-(1<<pos)+1].F),
    min(RMQ[pos][L].S,RMQ[pos][R-(1<<pos)+1].S)};
}


int main()
{
    nooby_speedrun
    checkIO

    cin >> n >> q;
    for (ll i=1;i<=n;++i) cin >> a[i];

    build();

    while(q--)
    {
        ll L,R; cin >> L >> R;
        pll temp=get(L,R);
        cout << temp.F << " " << temp.S << "\n";
    }

    return 0;
}


/*----------------------------------------------------------------------------------*
*                                                   _     _                         *
*      |------------------------|              |\__/,|   ( )                        *
*      | author: noobyhandsome  |            _.|o o  |_   ) )               <3      *
*      |------------------------|            (((-^-(((------)                       *
*                                                                                   *
*----------------------------------------------------------------------------------*/
