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

        // sum to large number, calc a+b with a,b > 1e18

ll i,j,n,m,k;


string sum_large_number(string s,string f)
{
    while(s.size()<f.size()) s="0"+s;
    while(f.size()<s.size()) f="0"+f;

    ll n=s.size();
    string res(n,'0');

    ll carry=0;
    FOD(i,n-1,0)
    {
        ll digit=(s[i]-'0')+(f[i]-'0')+carry;
        carry=digit/10;
        res[i]=(digit%10)+'0';
    }
    if (carry) res="1"+res;

    return res;
}


int main()
{
    nooby_speedrun
    checkIO

    string s,f;
    cin >> s >> f;
    cout << sum_large_number(s,f) << "\n";

    return 0;
}


/*----------------------------------------------------------------------------------*
*                                                   _     _                         *
*      |------------------------|              |\__/,|   ( )                        *
*      | author: noobyhandsome  |            _.|o o  |_   ) )               <3      *
*      |------------------------|            (((-^-(((------)                       *
*                                                                                   *
*----------------------------------------------------------------------------------*/