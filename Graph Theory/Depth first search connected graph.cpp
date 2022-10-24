include<vector>

using namespace std;

void dfs(int src, unordered_map<int,int>&visited,unordered_map<int,vector<int>>&adj_list)
{
    if(visited[src]==1)
        return;
    visited[src]=1;
    cout<<src<<" ";
    for(auto node : adj_list[src]) {

        if(!visited[node])
            dfs(node,visited,adj_list);
    }


}
int main()
{
    int node,edge;Package:
    cin>>node>>edge;
    unordered_map<int,vector<int>>adj_list;
    for(int i=0; i<edge; ++i) {
        int x,y;
        cin>>x>>y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }
    unordered_map<int,int>visited;
    dfs(0,visited,adj_list);

}