#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for(int i=(a); i<(b); i++)
#define RFOR(i, a, b) for(int i=(b)-1; i>=(a); i--)
#define REP(i, n) for(int i = 0; i<(n); i++)
#define RREP(i, n) for(int i=(n)-1; i>=0; i--)
#define ALL(x) (x).begin(),(x).end()

template<class T>bool chmax(T &a, const T &b){ if(a<b){ a=b; return true; } return false; }
template<class T>bool chmin(T &a, const T &b){ if(b<a){ a=b; return true; } return false; }
template<class T>void vin(vector<T> &vec){ for(auto& element: vec){ cin >> element; } }
template<class T>void vvin(vector<vector<T>> &vec){ for(auto& row : vec){ for(auto& element : row){ cin >> element; } } }
template<class T>void vout(vector<T> &vec){ cout << vec.at(0); for(int i=1; i<vec.size(); i++){ cout << vec.at(i); } cout << endl; }
template<class T>void vvout(vector<vector<T>> &vec){ for(auto& row : vec){ cout << row.at(0); for(int i=1; i<row.size(); i++){ cout << row.at(i); } cout << endl; } }
template<class T>void vout_(vector<T> &vec){ cout << vec.at(0); for(int i=1; i<vec.size(); i++){ cout << " " << vec.at(i); } cout << endl; }
template<class T>void vvout_(vector<vector<T>> &vec){ for(auto& row : vec){ cout << row.at(0); for(int i=1; i<row.size(); i++){ cout << " " << row.at(i); } cout << endl; } }

using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vl = vector<long>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvll = vector<vll>;
using vs = vector<string>;

using Graph = vector<vector<int>>;

// 無向グラフ（木）において，任意の頂点から各頂点への最短距離O(n)で算出

// 頂点 s から DFS
// sから各頂点への最短距離を格納した配列distを返却（dist.at(s)==0）
vi dfs(const Graph &G, int s){
    int n = G.size();
    //sから各頂点への距離
    vi dist(n, -1);
    dist.at(s) = 0;

    //初期ノードs
    queue<int> que;
    que.push(s);

    while(!que.empty()){
        int v = que.front();
        que.pop();

        for(int g : G.at(v)){
            if(dist.at(g) != -1) continue;

            dist.at(g)=dist.at(v)+1;
            que.push(g);
        }
    }

    return dist;
}


void Main()
{   
    //　頂点数
    int n;
    cin >> n;

    Graph G(n);
    
    REP(i, n-1){
        int a, b;
        cin >> a >> b;
        G.at(a-1).push_back(b-1);
        G.at(b-1).push_back(a-1);
    }

    vi dist0 = dfs(G, 0);

    //最大値の要素番号取得
    int maxIndex0 = distance(dist0.begin(), max_element(dist0.begin(), dist0.end()));

    vi dist1 = dfs(G, maxIndex0);

    int maxIndex1 = distance(dist1.begin(), max_element(dist1.begin(), dist1.end()));

    cout << dist1.at(maxIndex1)+1 << endl;
}

int main()
{
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);
	std::cout << std::fixed << std::setprecision(15);
	Main();
}