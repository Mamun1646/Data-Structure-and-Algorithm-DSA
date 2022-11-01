#include<bits/stdc++.h>

vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
	// Write your code here
	
    //Step 1 Adjacency list
    //step 2 visited 
    //step 3 parent
    // step 4 bfs so must be queue
    unordered_map<int,vector<int>>adj;
    for(int i=0;i<edges.size();++i){
        int x=edges[i].first;
        int y=edges[i].second;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
   vector<int>visited(n+1);
    unordered_map<int,int>parent;
    queue<int>q;
    q.push(s);
    visited[s]=1;
    parent[s]=-1;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        for(auto neighbour : adj[front]){
            if(!visited[neighbour]){
                visited[neighbour]=1;
                parent[neighbour]=front;
                q.push(neighbour);
            }
        }
    }   

         vector<int>ans;
        int currentNode =t;
        ans.push_back(currentNode);
        while(currentNode!=s){
            currentNode =parent[currentNode];
            ans.push_back(currentNode);
        }
    reverse(ans.begin(),ans.end());
return ans;}