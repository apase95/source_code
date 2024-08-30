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
ll RMQ[LOG+1][N];


void build()
{
    FOR(i,1,n) RMQ[0][i]=a[i];

    for (ll i=1;i<=LOG;++i)
        for (ll j=1;j+(1<<i)-1<=n;++j)
            RMQ[i][j]=RMQ[i-1][j]+RMQ[i-1][j+(1<<(i-1))];
}

ll get(ll L,ll R)
{
    ll sum=0;
    ll range=R-L+1;

    for (ll i=0;(1<<i)<=range;++i)
        if (range>>i&1)
            {sum+=RMQ[i][L],L+=(1<<i);}
    return sum;
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
        cout << get(L,R) << "\n";
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
