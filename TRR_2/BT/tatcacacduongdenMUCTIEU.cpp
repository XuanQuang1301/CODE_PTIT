#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ANS;
vector<int> path;
void DFS(vector<vector<int>> &graph, int u, int n){
    path.push_back(u);
    if(u == n - 1){
        ANS.push_back(path);
    }
    else{
        for(auto i : graph[u]){
            DFS(graph, i, n);
        }
    }
    path.pop_back();
}
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        ANS.clear();
        path.clear();
        int n = graph.size();
        DFS(graph, 0, n);
        return ANS;
    }
    int main(){
        
    }