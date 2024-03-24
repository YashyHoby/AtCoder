#include "template.h"

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