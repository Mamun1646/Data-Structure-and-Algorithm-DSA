#include <unordered_map>
#include <stack>
#include <vector>

// step 1 adjacency list create
// step 2 visited data structure
//  step 3 dfs recursive call
//  step 4 additional stack data structure when dfs call finish store on data structure

void dfs(int src, stack<int> &s, vector<int> &visited, unordered_map<int, vector<int>> &adj_list)
{

    visited[src] = 1;
    for (auto neighbour : adj_list[src])
    {
        if (!visited[neighbour])
            dfs(neighbour, s, visited, adj_list);
    }

    // Important data structure it will be give us the answer
    s.push(src);
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
{
    unordered_map<int, vector<int>> adj_list;
    for (int i = 0; i < e; ++i)
    {
        int x = edges[i][0];
        int y = edges[i][1];
        adj_list[x].push_back(y);
    }
    vector<int> visited(v + 1);
    stack<int> s;

    for (int i = 0; i < v; ++i)
    {
        if (!visited[i])
            dfs(i, s, visited, adj_list);
    }
    vector<int> ans;
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }

    return ans;
}