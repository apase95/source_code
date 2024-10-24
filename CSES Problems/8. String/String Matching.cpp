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
const ll BASE=31;
const ll LOG=17;


/*----------------------------------------------[ YOU GAY! ]-------------------------------------------*/


ll i,j,n,m,k;
string s,f;


vector<ll> KMP(string &S)
{
    ll n=S.size();
    vector<ll> pi(n);

    FOR(i,1,n-1)
    {
        ll j=pi[i-1];
        while(j>0 && s[i]!=s[j]) j=pi[j-1];
        if (s[i]==s[j]) ++j;
        pi[i]=j;
    }
    return pi;
}



int main()
{
    nooby_speedrun
    checkIO

    cin >> s >> f;
    
    string S=f+'#'+s;
    vector<ll> mark=KMP(S);

    ll res=0;
    FOR(i,0,mark.size()-1) if (mark[i]==f.size()) ++res;

    return cout << res,0;
}


/*----------------------------------------------------------------------------------*
*                                                   _     _                         *
*      |------------------------|              |\__/,|   ( )                        *
*      | author: noobyhandsome  |            _.|o o  |_   ) )               <3      *
*      |------------------------|            (((-^-(((------)                       *
*                                                                                   *
*----------------------------------------------------------------------------------*/
