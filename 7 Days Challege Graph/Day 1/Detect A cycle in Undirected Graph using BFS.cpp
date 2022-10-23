/// Gfg problem Link: https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
////step 1 : visited data structure for tracking visited or no visited
// step 2: checking adjacency list
// step 3: queue data structure
// step 4: parent tracting datastucture
#include <bits/stdc++.h>

bool isCyclicBFS(int src, unordered_map<int, bool> &visited, unordered_map<int, vector<int>> &adj_list)
{
    unordered_map<int, int> parent;
    parent[src] = -1;

    visited[src] = true;
    queue<int> q;
    q.push(src);
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        for (auto neighbour : adj_list[front])
        {
            if (neighbour != parent[front] && visited[neighbour])
                return true;
            else if (!visited[neighbour])
            {
                q.push(neighbour);
                visited[neighbour] = true;
                parent[neighbour] = front;
            }
        }
    }
    return false;
}

string cycleDetection(vector<vector<int>> &edges, int n, int m)
{

    // create Adjacency list
    unordered_map<int, vector<int>> adj_list;
    for (int i = 0; i < m; ++i)
    {
        int x = edges[i][0];
        int y = edges[i][1];
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }
    // To handle  disconnected components
    unordered_map<int, bool> visited;
    for (int i = 0; i < n; ++i)
    {
        if (!visited[i])
        {
            bool ans = isCyclicBFS(i, visited, adj_list);
            if (ans)
                return "Yes";
        }
    }
    return "No";
}