
// In graph theory and computer science, an adjacency matrix
//  is a square matrix used to represent a finite graph.
// The elements of the matrix
//  indicate whether pairs of vertices are adjacent or not in the graph.

#include <bits/stdc++.h>
using namespace std;
int adj_mat[100][100];
int main()
{
    freopen("input.txt", "r", stdin);

    vector<vector<int>> adj_list;
    int node, edge;
    cin >> node >> edge;
    for (int i = 0; i < edge; ++i)
    {
        int n1, n2;
        cin >> n1 >> n2;
        adj_mat[n1][n2] = 1;
        adj_mat[n2][n1] = 1;
    }

    for (int i = 0; i < node; ++i)
    {
        for (int j = 0; j < edge; ++j)
        {
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }

    int x, y;
    cin >> x >> y;

    if (adj_mat[x][y])
        cout << x << " is a neighbour of " << y << endl;
    else
        cout << x << " is a neighbour of " << y << endl;
}