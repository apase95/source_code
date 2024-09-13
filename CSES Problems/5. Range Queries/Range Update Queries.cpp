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
ll a[NMAX],BIT[NMAX];


void update_node(ll size,ll pos,ll val)
    {bitUp(pos,size) BIT[pos]+=val;}

void update_range(ll L,ll R,ll val)
    {update_node(n,L,val); update_node(n,R+1,-val);}

ll get(ll pos)
    {ll sum=0; bitGet(pos) sum+=BIT[pos]; return sum;}


int main()
{
    nooby_speedrun
    checkIO

    cin >> n >> q;
    FOR(i,1,n) {ll val; cin >> val; update_range(i,i,val);}

    while(q--)
    {
        ll type; cin >> type;
        if (type==1)
        {
            ll L,R,val; cin >> L >> R >> val;
            update_range(L,R,val);
        }
        else {ll pos; cin >> pos; cout << get(pos) << "\n";}
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
