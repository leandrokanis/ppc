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


struct Construcao{
  string name="";
  string ocupada="";
  int municao=0;
  int ouro=0;
};

bool criterios(const Construcao &a, const Construcao &b){
  if(a.name == "Torre" && b.name != "Torre") return true;
  if(b.name == "Torre" && a.name != "Torre") return false;
  if(a.name == "Castelo" && b.name != "Castelo") return true;
  if(b.name == "Castelo" && a.name != "Castelo") return false;
  if(a.name == "Casa" && b.name != "Casa") return true;
  if(b.name == "Casa" && a.name != "Casa") return false;

  if(a.ocupada == "A" && b.ocupada != "A") return true;
  if(b.ocupada == "B" && a.ocupada != "B") return false;

  if (a.ocupada == "A" && b.ocupada == "A") {
    if(a.municao < b.municao) return true;
    if(a.municao > b.municao) return false;
  }

  if (a.ocupada == "B" && b.ocupada == "B") {
    if(a.ouro > b.ouro) return true;
    if(a.ouro < b.ouro) return false;
  }
  return false;
}

int main() {

  int caso = 1;
  int numa=0; cin >> numa;
  while(numa--) {
    vector<Construcao> inimigo;
    int numb=0; cin >> numb;
    while(numb--) {
      Construcao c;
      cin >> c.name >> c.ocupada >> c.municao >> c.ouro;
      inimigo.push_back(c);
    }

    sort(ALL(inimigo), criterios);

    cout << "Caso " << caso << ":" << endl;
    for(vector<Construcao>::iterator i = inimigo.begin(); i!=inimigo.end(); ++i){
      Construcao j = inimigo[i - inimigo.begin()];
      cout << j.name << " " << j.ocupada << " " << j.municao << " " << j.ouro << endl;
    }
    if(numa!=0) cout << endl;
    caso++;
  }

}
