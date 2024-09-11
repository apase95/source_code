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
vector<ll> mark(1e6,0),v;


int main()
{
    nooby_speedrun
    checkIO

    cin >> n;
    ll sum=(n*(n+1))/2;

    if (sum&1) cout << "NO";
    else
    {
        sum/=2;
        FOD(i,n,1)
        {
            if (sum>i) {sum-=i; v.pub(i); mark[i]=1;}
            else {v.pub(sum); mark[sum]=1; break;}
        } 

        sort(v.begin(),v.end());
        cout << "YES\n";
        cout << v.size() << "\n";
        for(ll i:v) cout << i << " ";
        cout << "\n" << n-v.size() << "\n";
        FOR(i,1,n) if (!mark[i]) cout << i << " ";
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
