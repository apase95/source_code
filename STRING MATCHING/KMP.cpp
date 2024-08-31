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
const ll BASE=31;


/*----------------------------------------------[ YOU GAY! ]-------------------------------------------*/
        
        // KMP - Prefix Function

ll i,j,n,m,k;
string s,f;


vector<ll> KMP(string s,string f)
{
    vector<ll> mark,pi(m+1,0);

    FOR(i,2,m) {j=0; while(j<=m && f[j+1]==f[i]) pi[i++]=++j;}

    ll j=0;
    FOR(i,1,n)
    {
        while(j>0 && f[j+1]!=s[i]) j=pi[j];
        
        ++j; if (j==m) mark.pub(i-m);
    }
    return mark;
}


int main()
{
    nooby_speedrun
    checkIO


    cin >> s; cin >> f;
    n=s.size(); m=f.size();
    s=" "+s; f=" "+f;

    vector<ll> mark=KMP(s,f);
    for (ll i:mark) cout << i << "\n";

    return 0;
}


/*----------------------------------------------------------------------------------*
*                                                   _     _                         *
*      |------------------------|              |\__/,|   ( )                        *
*      | author: noobyhandsome  |            _.|o o  |_   ) )               <3      *
*      |------------------------|            (((-^-(((------)                       *
*                                                                                   *
*----------------------------------------------------------------------------------*/
