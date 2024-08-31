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


ll i,j,n,m,k;
string s,f;
ll Hash[NMAX],POW[NMAX];


void build_base_Hash(ll n,string s)
{
    POW[0]=1;
    FOR(i,1,n) POW[i]=(POW[i-1]*BASE)%MOD;
    FOR(i,1,n) Hash[i]=(Hash[i-1]*BASE+s[i]-'a'+1)%MOD;
}

ll get(ll L,ll R)
    {return (Hash[R]-Hash[L-1]*POW[R-L+1]+MOD*MOD)%MOD;}

ll build_new_Hash(ll m,string f)
{
    ll hashF=0;
    FOR(i,1,m) hashF=(hashF*BASE+f[i]-'a'+1)%MOD; 
    return hashF;
}


int main()
{
    nooby_speedrun
    checkIO


    cin >> s;
    cin >> f;

    n=s.size();
    m=f.size();
    s=" "+s;
    f=" "+f;

    build_base_Hash(n,s);
    ll hashF=build_new_Hash(m,f);

    FOR(i,1,n-m+1) 
        if (hashF==get(i,i+m-1))
            cout << i-1 << " ";

    return 0;
}


/*----------------------------------------------------------------------------------*
*                                                   _     _                         *
*      |------------------------|              |\__/,|   ( )                        *
*      | author: noobyhandsome  |            _.|o o  |_   ) )               <3      *
*      |------------------------|            (((-^-(((------)                       *
*                                                                                   *
*----------------------------------------------------------------------------------*/
