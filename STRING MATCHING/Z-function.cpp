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
string s;


vector<ll> Z_function(ll n,string s)
{
    vector<ll> z(n);
    for (ll i=1,L=0,R=0;i<n;++i)
    {
        if (i<=R) z[i]=min(R-i+1,z[i-L]);

        while (i+z[i]<n && s[z[i]]==s[i+z[i]]) ++z[i];
        
        if (i+z[i]-1>R) {L=i; R=i+z[i]-1;}
    }
    return z;
}


int main()
{
    nooby_speedrun
    checkIO


    cin >> s;
    n=s.size();
    cout << s << "\n";

    vector<ll> mark=Z_function(n,s);

    FOR(i,1,n-1) cout << mark[i] << " " << s.substr(i,n-mark[i]-1) << "\n";

    return 0;
}


/*----------------------------------------------------------------------------------*
*                                                   _     _                         *
*      |------------------------|              |\__/,|   ( )                        *
*      | author: noobyhandsome  |            _.|o o  |_   ) )               <3      *
*      |------------------------|            (((-^-(((------)                       *
*                                                                                   *
*----------------------------------------------------------------------------------*/
