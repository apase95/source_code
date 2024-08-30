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
const ll N=5e3+5;
const ll INF=1e9;


/*----------------------------------------------[ YOU GAY! ]-------------------------------------------*/

// get Max, Min in range with BIT 

ll i,j,n,m,k;
ll q;
ll a[NMAX];
vector<ll> maxBIT(NMAX,-1e5+5),minBIT(NMAX,1e5+5);


void update(ll pos,ll val)
{
    bitUp(pos,n)
    {
        maxBIT[pos]=max(maxBIT[pos],val);
        minBIT[pos]=min(minBIT[pos],val);
    }
}

pll get(ll L,ll R)
{
    ll pos;
    pll res={INT_MIN,INT_MAX};

    while(L<=R)
    {
        pos=R-(R&-R);

        if (pos>=L) {res={max(res.F,maxBIT[R]),min(res.S,minBIT[R])}; R-=(R&-R);}
        else {res={max(res.F,a[R]),min(res.S,a[R])}; --R;}
    }
    return res;
}


int main()
{
    nooby_speedrun
    checkIO
    
    cin >> n >> q;
    FOR(i,1,n) {cin >> a[i];update(i,a[i]);}

    while(q--)
    {
        ll L,R; cin >> L >> R;
        cout << get(L,R).F << " " << get(L,R).S << "\n";
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
