#include <bits/stdc++.h>

using namespace std;

#define PB(x)       push_back(x)
#define MP(x,y)     make_pair(x,y)
#define ALL(x)      x.begin(), x.end()
#define RALL(x)     x.rbegin(), x.rend()
#define READ(x)     freopen(x, "r", stdin)
#define WRITE(x)    freopen(x, "w", stdout)
#define SORT(x)     sort(ALL(x))
#define DREP(x)     sort(ALL(x)); x.erase(unique(ALL(x)),x.end())
#define CLEAR(c)    memset(c, 0, sizeof(c))
#define debug(x)    cout << ">>> " << #x << ": " << x << endl
#define CC(x)       clog << P(x)
#define len(x)      sizeof(x)/sizeof(*x)

struct _ { ios_base::Init i; _() { cin.sync_with_stdio(0); cin.tie(0); } } _;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef map<string, string> dic;
typedef pair<int, int> ii;
typedef pair<string, string> ss;
typedef vector<ii> vii;

#define EPS 1e-14
#define INF 0x3f3f3f3f;
#define PI atan(1)*4;

vi grafo[6];
bool visited[6];

void dfs(int v){
  visited[v] = true;

  for(auto i: grafo[v]){
    if(!visited[i]){
      cout << i << endl;
      dfs(i);
    }
  }
}

int main() {

  grafo[1].push_back(2);
  grafo[1].push_back(6);

  grafo[2].push_back(1);
  grafo[2].push_back(3);

  grafo[3].push_back(2);
  grafo[3].push_back(5);
  grafo[3].push_back(6);

  grafo[4].push_back(5);
  grafo[4].push_back(6);

  grafo[5].push_back(4);
  grafo[5].push_back(3);

  grafo[6].push_back(1);
  grafo[6].push_back(3);
  grafo[6].push_back(4);

  // for(int j = 0; j<=sizeof(grafo)/sizeof(*grafo); j++){
  //   for(vi::iterator i = grafo[j].begin(); i!=grafo[j].end(); ++i){
  //     cout << j << "-" << *i << endl;
  //   }
  // }

  memset(visited, 0, sizeof visited);
  dfs(1);


}
