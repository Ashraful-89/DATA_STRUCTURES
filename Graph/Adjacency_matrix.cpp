// #include<stdio.h>
// #define V 4
// void init(int array[][V]){
//     int i,j;
//     for(i = 0 ; i < V; i++){
//         for(j = 0; j < V ; j++){
//             array[i][j] = 0;
//         }
//     }
// }
// void addEdges ( int array[][V], int i , int j){
//     array[i][j] = 1;
//     array[j][i] = 1;
// }
// void PrintAdjMatrix(int array[][V]){
//     int i , j;
//     for(i = 0 ; i <  V;i++){
//         printf("%d: ",i);
//         for( j = 0 ; j < V ; j++){
//             printf("%d ",array[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int adjMatrix[V][V];
//     init(adjMatrix);
//     addEdges(adjMatrix , 0 , 1);
//     addEdges(adjMatrix , 0 , 2);
//     addEdges(adjMatrix , 1 , 2);
//     addEdges(adjMatrix , 1 , 3);
//     addEdges(adjMatrix , 2 , 3);
//     PrintAdjMatrix(adjMatrix);
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int Adjacency_Matrix[10][10];

int main() {
    int vertices;
    cout << "Enter the vertics : "; cin >> vertices;
    int Edge;
    cout << "Enter the Edge number : "; cin >> Edge;
    int status;
    cout << "Enter the Status  1 : for  directed graph or 2 : undirected graph :  "; cin >> status;

    cout << "Enter the Edge : \n";

    for(int i = 0 ; i < Edge; i++) {
        int v , u;
        cin >> v >> u;
        if(status == 2) {
            Adjacency_Matrix[v][u] = 1;
            Adjacency_Matrix[u][v] = 1;
        }
        else {
            Adjacency_Matrix[v][u] = 1;
        }
        
    }

    cout << "The Adjacency matrix is : \n";
    for(int i = 0 ; i < vertices; i++){
        for(int j = 0 ; j < vertices ; j++) {
            cout << Adjacency_Matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0; 
}