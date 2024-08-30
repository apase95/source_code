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

// update a[pos]=val && get sum range L->R

ll i,j,n,m,k;
ll q;
ll BIT[NMAX];


void update(ll size,ll pos,ll val)
{
    bitUp(pos,size) BIT[pos]+=val;
}

ll get(ll pos)
{
    ll sum=0;
    bitGet(pos) sum+=BIT[pos];
    return sum; 
}

ll query(ll L,ll R)
{
    return get(R)-get(L-1);
}


int main()
{
    nooby_speedrun
    checkIO
    
    cin >> n >> q;
    FOR(i,1,n) {ll x;cin >> x;update(n,i,x);}

    while(q--)
    {
        ll type; cin >> type;

        if (type==1)
        {
            ll pos,val; cin >> pos >> val;
            ll temp=query(pos,pos);
            update(n,pos,val-temp);
        }
        else
        {
            ll L,R; cin >> L >> R;
            cout << query(L,R) << "\n";
        }
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
