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
vector<ll> v;

void back(ll n)
{
    if (n==1) return;
    if (n&1) {v.pub(3*n+1); back(3*n+1);}
    else {v.pub(n/2); back(n/2);}
}
 
 
int main()
{
    nooby_speedrun
    checkIO
 
    cin >> n;
    v.pub(n);
    back(n);
 
    for (ll i:v) cout << i << " ";
    return 0;
}


/*----------------------------------------------------------------------------------*
*                                                   _     _                         *
*      |------------------------|              |\__/,|   ( )                        *
*      | author: noobyhandsome  |            _.|o o  |_   ) )               <3      *
*      |------------------------|            (((-^-(((------)                       *
*                                                                                   *
*----------------------------------------------------------------------------------*/