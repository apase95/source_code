#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long
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


/*----------------------------------------------[ YOU GAY! ]-------------------------------------------*/


ll i,j,n,m,k;
ll a[NMAX];


ll BinarySearch(ll max_val,ll k)
{
    ll L=1,R=max_val*k+1;
    ll res=0;

    while(L<=R)
    {
        ll M=(R+L)/2;
        ll cur=0;

        FOR(i,1,n) cur+=(M/a[i]);
        if (cur>=k) {res=M; R=M-1;}
        else L=M+1;
    }

    return res;
}


int main()
{
    nooby_speedrun
    checkIO

    cin >> n >> k;

    ll max_val=0;
    FOR(i,1,n) {cin >> a[i]; max_val=max(max_val,a[i]);}
    
    return cout << BinarySearch(max_val,k),0;
}


/*----------------------------------------------------------------------------------*
*                                                   _     _                         *
*      |------------------------|              |\__/,|   ( )                        *
*      | author: noobyhandsome  |            _.|o o  |_   ) )               <3      *
*      |------------------------|            (((-^-(((------)                       *
*                                                                                   *
*----------------------------------------------------------------------------------*/
