#include<unordered_map>
#include<vector>
#include<queue>
#include<bits/stdc++.h>

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    unordered_map<int,vector<int>>adj_list;
    for(int i=0;i<e; ++i){
        int x=edges[i][0];
        int y=edges[i][1];
        adj_list[x].push_back(y);
    }
    
    queue<int>q;
    vector<int>indegree(v);
    for(auto first : adj_list)
        for(auto second: first.second)
            indegree[second]++;
    for(int i=0;i<v;++i){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    vector<int>ans;
    while(!q.empty()){
         int front =q.front();
        
        ans.push_back(front);
       // visited[front]=true;
        q.pop();
        for(auto neighbour : adj_list[front]){
           // if(!visited[neighbour])
            
               indegree[neighbour]--;
                if(indegree[neighbour]==0)
                    q.push(neighbour);
            
        }
    }
    return ans;
}