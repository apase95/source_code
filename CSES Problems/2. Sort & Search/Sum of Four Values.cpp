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


/*----------------------------------------------[ YOU GAY! ]-------------------------------------------*/


ll i,j,n,m,k;
ll sum;
pll a[NMAX];

bool cmp(pll a,pll b) {return a.F<b.F;}

bool check_default_idx(ll a,ll b,ll c,ll d)
{
    if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) return true;
    return false;
}


int main()
{
    nooby_speedrun
    checkIO

    cin >> n >> sum;
    FOR(i,1,n) {cin >> a[i].F; a[i].S=i;}
    sort(a+1,a+n+1,cmp);

    FOR(i,1,n-3)
        FOR(j,i+1,n-2)
        {
            k=j+1; ll last=n;
            while(k<last)
            {
                ll temp=a[i].F+a[j].F+a[k].F+a[last].F;
                if (temp==sum  && check_default_idx(a[i].S,a[j].S,a[k].S,a[last].S))
                    return cout << a[i].S << " " << a[j].S << " " << a[k].S << " " << a[last].S,0;
                else if (temp>sum) --last;
                else ++k;
            }
        }

    return cout << "IMPOSSIBLE",0;
}


/*----------------------------------------------------------------------------------*
*                                                   _     _                         *
*      |------------------------|              |\__/,|   ( )                        *
*      | author: noobyhandsome  |            _.|o o  |_   ) )               <3      *
*      |------------------------|            (((-^-(((------)                       *
*                                                                                   *
*----------------------------------------------------------------------------------*/
