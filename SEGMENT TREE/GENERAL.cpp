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
ll a[NMAX];
ll Tree[NMAX],lazy[NMAX];


void build(ll idx,ll L,ll R)
{
    if (L==R) return Tree[idx]=a[L],void();

    ll M=(L+R)>>1;
    build(idx<<1,L,M);
    build(idx<<1|1,M+1,R);
    Tree[idx]=Tree[idx<<1]+Tree[idx<<1|1];
}

void push(ll idx,ll L,ll R)
{
    ll M=(L+R)>>1;
    ll &val=lazy[idx];

    if (val)
    {
        Tree[idx<<1]+=val*(M-L+1);
        Tree[idx<<1|1]+=val*(R-M);
        lazy[idx<<1]+=val;
        lazy[idx<<1|1]+=val;
        val=0;
    } 
}

void update(ll idx,ll L,ll R,ll U,ll V,ll val)
{
    if (L>R || U>R || L>V) return;

    if (U<=L && R<=V)
    {
        Tree[idx]+=val*(R-L+1);
        lazy[idx]+=val;
        return;
    }
    push(idx,L,R);

    ll M=(L+R)>>1;
    update(idx<<1,L,M,U,V,val);
    update(idx<<1|1,M+1,R,U,V,val);
    Tree[idx]=Tree[idx<<1]+Tree[idx<<1|1];
}

ll get(ll idx,ll L,ll R,ll U,ll V)
{
    if (L>R || U>R || L>V) return 0;
    if (U<=L && R<=V) return Tree[idx];

    push(idx,L,R);
    ll M=(L+R)>>1;
    return get(idx<<1,L,M,U,V)+get(idx<<1|1,M+1,R,U,V);
}


int main()
{
    nooby_speedrun
    checkIO
    
    cin >> n >> q;
    FOR(i,1,n) cin >> a[i];
    build(1,1,n);

    while(q--)
    {
        ll type; cin >> type;
        if (type==1)
        {
            ll L,R,val; cin >> L >> R >> val;
            update(1,1,n,L,R,val);
        }
        else
        {
            ll L,R; cin >> L >> R;
            cout << get(1,1,n,L,R) << "\n";
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
