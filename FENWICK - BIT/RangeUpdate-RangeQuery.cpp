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


ll i,j,n,m,k;
ll q;
ll BIT1[NMAX],BIT2[NMAX];


void update(ll* BIT,ll pos,ll val)
    {bitUp(pos,n) BIT[pos]+=val;}

void update_range(ll L,ll R,ll val)
{
    update(BIT1,L,val);
    update(BIT1,R+1,-val);
    update(BIT2,L,L*val);
    update(BIT2,R+1,-(R+1)*val);
} 

ll get(ll* BIT,ll pos)
{
    ll sum=0;
    bitGet(pos) sum+=BIT[pos];
    return sum; 
}

ll query(ll L,ll R)
    {return ((R+1)*get(BIT1,R)-get(BIT2,R))-(L*get(BIT1,L-1)-get(BIT2,L-1));}


int main()
{
    nooby_speedrun
    checkIO
    
    cin >> n >> q;

    fill(BIT1,BIT1+n+1,0);
    fill(BIT2,BIT2+n+1,0);

    while(q--)
    {
        ll type,L,R; cin >> type >> L >> R;
        if (type==1) {ll val; cin >> val;update_range(L,R,val);}
        else cout << query(L,R) << "\n";
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
