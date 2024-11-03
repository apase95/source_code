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

#define all(v) (v).begin(), (v).end()
#define sz(v) ((v).size())
#define vll vector<ll>
#define vvll vector<vll>>

#define nooby_speedrun ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
#define checkIO if(fopen("TEST.INP","r")){freopen("TEST.INP","r",stdin);freopen("TEST.OUT","w",stdout);}

const ll MOD=1e9+7;
const ll NMAX=2e5+5;
const ll N=1e2+5;
const ll INF=1e9;
const ll BASE=31;
const ll LOG=17;

const ll dx4[4]={-1,0,0,1};
const ll dy4[4]={0,-1,1,0};
const ll dx8[8]={-1,-1,-1,0,0,1,1,1};
const ll dy8[8]={-1,0,1,-1,1,-1,0,1};


/*----------------------------------------------[ YOU GAY! ]-------------------------------------------*/


ll i,j,n,m,k;
ll a[N][N];

struct Point
{
    ll x;
    ll y;
};

void init()
{
    cin >> n >> m;
    FOR (i, 1, n)
        FOR (j, 1, m)
            cin >> a[i][j];
}

bool checkPos(ll x, ll y)
{
    if (x >= 1 && x <= n && y >= 1 && y <= m) 
        return true;
    return false;
}

void BFS(ll posX, ll posY)
{
    queue<pair<Point, vector<Point>>> q;
    vector<vector<bool>> visited(n + 1, vector<bool> (m + 1, false));

    Point startPos = {posX, posY};
    q.push({startPos, {startPos}});
    visited[posX][posY] = true;

    while (!q.empty())
    {
        auto curr = q.front(); q.pop();
        Point pos = curr.F;
        vector<Point> path = curr.S; 

        FOR (i, 0, 7)
        {
            ll x1 = pos.x + dx8[i];
            ll y1 = pos.y + dy8[i];

            if (checkPos(x1, y1) && !visited[x1][y1])
            {
                bitset<8> checkDirection(a[pos.x][pos.y]);
                if (checkDirection[i])
                {
                    vector<Point> newPath = path;
                    newPath.pub({x1, y1});

                    if (x1 == 1 || x1 == n || y1 == 1 || y1 == m)
                    {
                        cout << sz(newPath) << "\n";
                        for (auto markPos : newPath)
                            cout << markPos.x << " " << markPos.y << "\n";
                        return ;
                    }

                    visited[x1][y1] = true;
                    q.push({{x1, y1}, newPath});
                }
            }
        }
    }

    return cout << "0", void();
}

void solve()
{
    ll posX, posY;
    cin >> posX >> posY;
    BFS(posX, posY);
}


/*-----------------------------------------------[ END! ]----------------------------------------------*/


int main()
{
    nooby_speedrun
    checkIO 

    init();
    solve();
    
    return 0;
}


/*----------------------------------------------------------------------------------*
*                                                   _     _                         *
*      |------------------------|              |\__/,|   ( )                        *
*      | author: noobyhandsome  |            _.|o o  |_   ) )               <3      *
*      |------------------------|            (((-^-(((------)                       *
*                                                                                   *
*----------------------------------------------------------------------------------*/
