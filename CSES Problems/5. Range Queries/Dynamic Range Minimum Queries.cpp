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
ll Tree[4*NMAX];


void update(ll idx,ll L,ll R,ll pos,ll val)
{
    if (!(L<=pos && pos<=R)) return;
    if (L==R) {Tree[idx]=val; return;}

    ll M=(L+R)>>1;
    update(idx<<1,L,M,pos,val);
    update(idx<<1|1,M+1,R,pos,val);
    Tree[idx]=min(Tree[idx<<1],Tree[idx<<1|1]);
}

ll get(ll idx,ll L,ll R,ll U,ll V)
{
    if (L>R || U>R || L>V) return INF;
    if (U<=L && R<=V) return Tree[idx];

    ll M=(L+R)>>1;
    return min(get(idx<<1,L,M,U,V),get(idx<<1|1,M+1,R,U,V));
}


int main()
{
    nooby_speedrun
    checkIO

    cin >> n >> q;
    FOR(i,1,n) {ll val; cin >> val; update(1,1,n,i,val);}

    while(q--)
    {
        ll type,L,R; cin >> type >> L >> R;
        if (type==1) update(1,1,n,L,R);
        else cout << get(1,1,n,L,R) << "\n";
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
