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
const ll NMAX=1e6+5;
const ll N=5e3+5;
const ll INF=1e9;


/*----------------------------------------------[ YOU GAY! ]-------------------------------------------*/


ll i,j,n,m,k;


ll quick_pow(ll a,ll b)
{
    if (!b) return 1ll;

    ll res=quick_pow(a,b>>1);
    if (b&1) return (res*res*a);
    return res*res;
}

ll solve(ll n)
{
    ll digit=1,base=9;
    
    while(n>digit*base) {n-=digit*base; base*=10; ++digit;}
    ll idx=n%digit;
    ll res=quick_pow(10,digit-1)+(n-1)/digit;
    if (idx) res/=quick_pow(10,digit-idx);

    return res%10;
}


int main()
{
    nooby_speedrun
    checkIO

    ll test; cin >> test;
    while(test--)
    {
        ll val; cin >> val;
        cout << solve(val) << "\n";
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
