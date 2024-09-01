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

        // difference of large number, calc a-b with a,b > 1e18

ll i,j,n,m,k;


bool smaller(string s,string f)
{
    if (s.size()<f.size()) return true;
    if (s.size()>f.size()) return false;

    FOR(i,0,s.size())
    {
        if (s[i]<f[i]) return true;
        else if (s[i]>f[i]) return false;
    }
    return false;
}

string difference_large_number(string s,string f)
{
    if (smaller(s,f)) swap(s,f);

    ll n=s.size(), m=f.size();
    string res="";
    ll dis=n-m, carry=0;

    FOD(i,m-1,0)
    {
        ll digit=(s[i+dis]-'0')-(f[i]-'0')-carry;
        
        if (digit<0) {digit+=10; carry=1;}
        else carry=0;

        res.pub(digit+'0');
    }

    FOD(i,n-m-1,0)
    {
        if (s[i]=='0' && carry) {res.pub('9'); continue;}

        ll digit=((s[i]-'0')-carry);
        if (i>0 || digit>0) res.pub(digit+'0');
        carry=0;
    }

    while(res[res.size()-1]=='0' && res.size()>1) res.pob();
    reverse(res.begin(),res.end()); 
    return res;
}


int main()
{
    nooby_speedrun
    checkIO

    string s,f;
    cin >> s >> f;
    return cout << difference_large_number(s,f) << "\n",0;
}


/*----------------------------------------------------------------------------------*
*                                                   _     _                         *
*      |------------------------|              |\__/,|   ( )                        *
*      | author: noobyhandsome  |            _.|o o  |_   ) )               <3      *
*      |------------------------|            (((-^-(((------)                       *
*                                                                                   *
*----------------------------------------------------------------------------------*/
