

#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> adj[10];



void addEdge ( int source , int destination , bool flag){
    adj[source].push_back(destination);
    if(!flag) {
        adj[destination].push_back(source);
    }
}


void Print(int node){
    for(int d = 0 ; d < node ; d++) {
        cout << "\nThe Adjacency list of " << d << " are ---> ";
        for(int j = 0 ; j < adj[d].size(); j++) {
            cout << adj[d][j] << " ";
        }
        cout << endl;
    }

}
int main() {
    int node;
    cout << "Enter the node of the graph : ";
    cin >> node;

    int edge;
    cout <<"\nEnter the Edge of the graph : "; cin >> edge;

    bool flag;
    cout <<"\nEnter the Value of flag 1 for Directed graph otherwise 0 : ";
    cin >> flag;

    int src , dest;
    for(int i = 0; i < edge ; i++) {
        cout << "\nEnter the source and destination of the graph : "; cin >>src >> dest;
        addEdge(src , dest , flag); 
    }

    cout << "\nThe Adjacency list of the graph :\n";
    Print(node);
    return 0;
}