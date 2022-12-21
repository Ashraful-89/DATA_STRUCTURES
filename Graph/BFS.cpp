#include <bits/stdc++.h>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

// add the edge 
void addEdge(vector<int>adj[] , int u , int v) {
    adj[u].push_back(v);
}

void BFS(int s , vector<int>adj[] , bool visit[]) {
    queue<int> q;
    q.push(s);
    visit[s]=true;
    while(!q.empty()) {
        int node = q.front();
        cout << node << " ";
        q.pop();
        for(int i = 0; i < adj[node].size() ; i++) {
            if(!visit[adj[node][i]]) {
                q.push(adj[node][i]);
                visit[adj[node][i]] = true;

            }
        }
    }
}

void DFS(int s ,vector<int>adj[],bool visit[]) {
    stack<int> stk;
    stk.push(s);
    visit[s] = true;
    while(!stk.empty()) {
        int node = stk.top();
        cout << node << " ";
        stk.pop();
        for(int i = 0; i < adj[node].size(); i++) {
            if(!visit[adj[node][i]]){
                stk.push(adj[node][i]);
                visit[adj[node][i]] = true;
            }
        }
    }


}
int main() {
    vector<int>adj[5]; // vector of array to store the graph

    bool visited[5];
    // intially all node non visited
    for(int i = 0 ; i < 5 ; i++) visited[i] = false;
    // input for edges

    addEdge(adj,0,2);
    addEdge(adj,0,1);
    addEdge(adj,1,3);
    addEdge(adj,2,0);
    addEdge(adj,2,3);
    addEdge(adj,2,4);
    
    cout << "BFS traversel : ";
    BFS(0,adj,visited);
    cout << endl;

    cout << "DFS traversal : ";
    for(int i = 0 ; i < 5 ; i++) visited[i] = false;
    DFS(0,adj,visited);
    return 0;
}