#include <bits/stdc++.h>
using namespace std;
#define Max 100000
vector<int> graph[Max];
void bfs(int start, vector<int> graph[], vector<int> &visited)
{
    queue<int> q;
    q.push(start);

    while (!q.empty())
    {
        int first = q.front();
        if (!visited[first])
            cout << first << " ";
        visited[first] = 1;
        q.pop();
        for (auto u : graph[first])
        {
            if (visited[u] == 0)
                q.push(u);
        }
    }
}
int main()
{
    int node, edge;
    cin >> node >> edge;
    for (int i = 0; i < edge; ++i)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    vector<int> visited(node);
    bfs(0, graph, visited);
}