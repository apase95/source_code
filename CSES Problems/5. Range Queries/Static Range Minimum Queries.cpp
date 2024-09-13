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
const ll LOG=17;


/*----------------------------------------------[ YOU GAY! ]-------------------------------------------*/


ll i,j,n,m,q;
ll a[NMAX];
ll RMQ[LOG+1][NMAX];


void build()
{
    FOR(i,1,n) RMQ[0][i]=a[i];

    FOR(i,1,LOG)
        FOR(j,1,n-(1<<i)+1)
            RMQ[i][j]=min(RMQ[i-1][j],RMQ[i-1][j+(1<<(i-1))]);
}

ll get(ll L,ll R)
{
    ll pos=__lg(R-L+1);
    return min(RMQ[pos][L],RMQ[pos][R-(1<<pos)+1]);
}


int main()
{
    nooby_speedrun
    checkIO

    cin >> n >> q;
    FOR(i,1,n) cin >> a[i];
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
