
// What is adjacency list algorithm ? 
// Adjacency list is a collection of unordered lists used to represent a
//  finite graph.Each list describes the set of neighbors of a vertex in a graph.
// It takes less memory to store graphs.

#include <bits/stdc++.h>
 using namespace std;
int adj_mat[100][100];
#define MAX 100000 //maximum node
vector<int>adj_list[MAX];
int main()
{
   freopen("input.txt", "r", stdin);

    //vector<vector<int>> adj_list;
    int node, edge;
    cin >> node >> edge;
     
    for (int i = 0; i < edge; ++i)
    {
        int n1, n2;
        cin >> n1 >> n2;
        adj_list[n1].push_back(n2);
        adj_list[n2].push_back(n1);

    }

    for (int i = 1; i <=node; ++i)
    {     cout<< i << " : ";
        for(auto u : adj_list[i])
           cout<<u<<" ";
           cout<<endl;
    }



}
