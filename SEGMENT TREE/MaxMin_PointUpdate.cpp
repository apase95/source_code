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
pll Tree[NMAX];


void update(ll idx,ll L,ll R,ll POS,ll val)
{
    if (!(L<=POS && POS<=R)) return;
    if (L==R) {Tree[idx].F=Tree[idx].S=val;return;}

    ll M=(L+R)>>1;
    update(idx<<1,L,M,POS,val);
    update(idx<<1|1,M+1,R,POS,val);
    
    Tree[idx].F=max(Tree[idx<<1].F,Tree[idx<<1|1].F);
    Tree[idx].S=min(Tree[idx<<1].S,Tree[idx<<1|1].S);
}

pll get(ll idx,ll L,ll R,ll U,ll V)
{
    if (L>R || U>R || L>V) return {-INF,INF};
    if (U<=L && R<=V) return {Tree[idx].F,Tree[idx].S};

    ll M=(L+R)>>1;
    return {max(get(idx<<1,L,M,U,V).F,get(idx<<1|1,M+1,R,U,V).F),
        min(get(idx<<1,L,M,U,V).S,get(idx<<1|1,M+1,R,U,V).S)};
}


int main()
{
    nooby_speedrun
    checkIO
    
    cin >> n >> q;
    FOR(i,1,n) {ll val;cin >> val,update(1,1,n,i,val);}
    

    while(q--)
    {
        ll type; cin >> type;
        if (type==1)
        {
            ll pos,val; cin >> pos >> val;
            update(1,1,n,pos,val);
        }
        else
        {
            ll L,R; cin >> L >> R;
            pll temp=get(1,1,n,L,R);
            cout << temp.F << " " << temp.S << "\n";
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
