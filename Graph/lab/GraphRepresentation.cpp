#include<bits/stdc++.h>
using namespace std;

vector<int> adjacency_list[10];

void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

// void DFSUtil(int u , vector<int> adj[],vector<bool> &visited) {
//     {
//         visited[u] = true;
//         cout << u << " ";
//         for (int i=0; i<adj[u].size(); i++)
//             if (visited[adj[u][i]] == false)
//                 DFSUtil(adj[u][i], adj, visited);
//     }
// }

// void DFS(vector<int> adj[],int V) {
//     vector<bool> visited(V,false);

//     for(int u = 0; u <V;u++) {
//         if(visited[u] == false) {
//             DFSUtil(u,adj,visited);
//         }
//     }
// }


void Print(vector<int> adj[] , int V) {

    // 1D vector

    // for(int d = 0 ; d < V ; d++) {
    //     cout << "\nThe Adjacency List of " << d << " are---> " ;
    //     for(auto i : adj[d]) {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    //2D Vector

    for(int d = 0 ; d < V; d++) {
        cout << "\n the adjacency list of " << d << "are --> ";
        for(int j = 0 ; j < adj[d].size(); j++) {
            cout << adj[d][j] << " ";
        }
    }
}
int main() {
    int node = 5 ;
    // cout << "Enter the Node : ";
    // cin >> node;
    
    addEdge(adjacency_list,0,1);
    addEdge(adjacency_list,0,4);
    addEdge(adjacency_list,1,2);
    addEdge(adjacency_list,1,3);
    addEdge(adjacency_list,1,4);
    addEdge(adjacency_list,2,3);
    addEdge(adjacency_list,3,4);

    // DFS(adjacency_list,node);
    Print(adjacency_list, node);
    return 0;
}