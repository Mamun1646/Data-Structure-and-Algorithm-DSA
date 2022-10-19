#include <bits/stdc++.h>
using namespace std;
#define Max 100000
vector<int> graph[Max];

void dfs(int start, vector<int> graph[], vector<int> &visited)
{
    if (visited[start])
        return;
    visited[start] = 1;
    cout << start << " ";
    for (auto u : graph[start])
    {
        if (!visited[u])
            dfs(u, graph, visited);
    }
}
int main()
{
    int node, edge;
    cin >> node >> edge;
    for (int i = 0; i < edge; ++i)
    {
        int value1;
        cin >> value1;
        int value2;
        cin >> value2;
        graph[value1].push_back(value2);
        graph[value2].push_back(value1);
    }
    vector<int> visited(node);

    dfs(0, graph, visited);
}