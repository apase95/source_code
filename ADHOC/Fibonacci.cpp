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


ll i,j,n,m,q;
ll fibo[NMAX];


void build_fibonacci(ll n) // with n<=1e6
{
    fibo[0]=fibo[1]=1;
    FOR(i,2,n) fibo[i]=(fibo[i-1]+fibo[i-2])%MOD;
}

pll fibonacci(ll n) // with n<=1e18, matrix multiplication
{
    if (!n) return {0,1};

    pll p=fibonacci(n>>1);
    ll c=((p.F%MOD)*((2*p.S-p.F+MOD)%MOD))%MOD;
    ll d=((p.F*p.F)%MOD+(p.S*p.S))%MOD;

    if (n&1) return {d,(c+d)%MOD};
    return {c,d};
}


int main()
{
    nooby_speedrun
    checkIO

    build_fibonacci(1e6);

    cin >> q;
    while(q--)
    {
        cin >> n;
        if (n<=1e6) cout << fibo[n] << " " << fibonacci(n).S << "\n";
        else cout << fibonacci(n).S << "\n";
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
