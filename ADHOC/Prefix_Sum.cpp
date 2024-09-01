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

        // Calc sum in range L->R with non update and have q query

ll i,j,n,m,q;
ll a[NMAX];
ll prefix_sum[NMAX];


void build_prefix_sum()
{
    prefix_sum[0]=0;
    FOR(i,1,n) prefix_sum[i]=prefix_sum[i-1]+a[i];
}

ll get(ll L,ll R)
    {return prefix_sum[R]-prefix_sum[L-1];}



int main()
{
    nooby_speedrun
    checkIO

    cin >> n >> q;


    FOR(i,1,n) cin >> a[i];
    build_prefix_sum();
    
    while(q--)
    {
        ll L,R; cin >> L >> R;
        cout << get(L,R) << "\n";
    }
}


/*----------------------------------------------------------------------------------*
*                                                   _     _                         *
*      |------------------------|              |\__/,|   ( )                        *
*      | author: noobyhandsome  |            _.|o o  |_   ) )               <3      *
*      |------------------------|            (((-^-(((------)                       *
*                                                                                   *
*----------------------------------------------------------------------------------*/
