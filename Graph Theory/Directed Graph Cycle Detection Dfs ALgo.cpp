bool dfs(int src, vector<int>&visited,vector<int>&dfsVisited,unordered_map<int,vector<int>>&adj_list){
    visited[src]=true;
    dfsVisited[src]=true;
    for(auto neighbour:adj_list[src]){
        if(!visited[neighbour]){
            if(dfs(neighbour,visited,dfsVisited,adj_list))
                return true;
        }
        else if(visited[neighbour] and dfsVisited[neighbour])
            return true;
    }
    
    
    //
    dfsVisited[src]=false;
    return false;
}


int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
    unordered_map<int,vector<int>>adj_list;
    for(int i=0;i<edges.size();++i){
        int x=edges[i].first;
        int y=edges[i].second;
        adj_list[x].push_back(y);
        
    }
    vector<int>visited(n+1);
    vector<int>dfsVisited(n+1);
    for(int i=1;i<=n;++i){
       if(!visited[i]) {
           if(dfs(i,visited,dfsVisited,adj_list))
               return true;
        }
    }
    return false;
    
}