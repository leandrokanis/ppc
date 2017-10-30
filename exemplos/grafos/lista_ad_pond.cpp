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

vii grafo[6];

int main() {

  grafo[1].push_back(ii(2, 3));
  grafo[1].push_back(ii(6, 32));

  grafo[2].push_back(ii(1, 3));
  grafo[2].push_back(ii(3, 61));

  grafo[3].push_back(ii(2, 61));
  grafo[3].push_back(ii(5, 15));
  grafo[3].push_back(ii(6, 5));

  grafo[4].push_back(ii(5, 23));
  grafo[4].push_back(ii(6, 4));

  grafo[5].push_back(ii(4, 23));
  grafo[5].push_back(ii(3, 15));

  grafo[6].push_back(ii(1, 32));
  grafo[6].push_back(ii(3, 5));
  grafo[6].push_back(ii(4, 4));

  for(int j = 0; j<sizeof(grafo)/sizeof(*grafo); j++){
    for(vii::iterator i = grafo[j].begin(); i!=grafo[j].end(); ++i){
      cout << j << "-" << grafo[j][i - grafo[j].begin()].first;
      cout << ": " << grafo[j][i - grafo[j].begin()].second << endl;
    }
  }

  // cout << grafo[6][0].first << endl;
}
