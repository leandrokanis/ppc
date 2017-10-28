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
#define P(x)        ">>> " << #x << ": " << x << endl
#define debug(x)        cout << P(x)
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

int main() {
  vi agenda_aluno, agenda_professor;
  int h=0,m=0;

  int numa=0;
  scanf("%d", &numa);
  while (numa--){
    scanf("%d:%d", &h, &m);
    agenda_aluno.push_back((h*60) +m);
  }

  int numb=0;
  scanf("%d", &numb);
  while (numb--){
    scanf("%d:%d", &h, &m);
    agenda_professor.push_back((h*60) +m);
  }

  int min=9999;
  for(vi::iterator i = agenda_aluno.begin(); i!=agenda_aluno.end(); ++i){
    for(vi::iterator j = agenda_professor.begin(); j!=agenda_professor.end(); ++j){
      if(abs(*i-*j) < min ){
        min = abs(*i-*j);
      }
    }
  }

  cout << min << " minutos." << endl;
}
