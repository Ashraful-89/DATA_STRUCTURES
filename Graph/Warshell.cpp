#include<bits/stdc++.h>
using namespace std;

int main () {
    int vertices;
    cout << "Enter the Vertices : "; cin >> vertices;
    int path_matrix[vertices][vertices];
    int shortest_matrix[vertices][vertices];
    int adj[vertices][vertices];

    cout << "\nEnter the adjacency matrix for weighted graph:\n\n";
    for(int i = 0; i < vertices;i++) {
        for(int j = 0 ; j < vertices; j++) {
            cin >> adj[i][j];
        }
    }

    // calculated the path matrix and shortest matrix 

    for(int k = 0; k < vertices; k++) {
        for(int i = 0 ; i < vertices; i++) {
            if(adj[k][i]) {
                path_matrix[k][i] = 1;
                shortest_matrix[k][i] = path_matrix[k][i];
            }
            else {
                path_matrix[k][i] = 0;
                shortest_matrix[k][i] = 10000;
            }

        }
    }



    // calculated the path matrix and shortest matrix

    for(int k = 0 ; k < vertices; k++) {
        for(int i = 0 ; i < vertices; i++) {
            for(int j = 0 ; j < vertices ; j++) {
                path_matrix[i][j] = path_matrix[i][j] || (path_matrix[i][k] && path_matrix[k][j]);
                shortest_matrix[i][j] = shortest_matrix[i][j] < (shortest_matrix[i][k] + shortest_matrix[k][j]) ? shortest_matrix[i][j] :(shortest_matrix[i][k] + shortest_matrix[k][j]); 
            }
        }
    }


     // print the path matrix and shortest natrix in first calculated value 

    cout << "The Path Matrix : \n";
    for(int i = 0 ; i < vertices; i++) {
        for(int j = 0 ; j < vertices; j++) {
            printf("%5d",path_matrix[i][j]);
        }
        cout << endl;
    }

    cout << "\n\nThe shortest  Matrix : \n";
    for(int i = 0 ; i < vertices; i++) {
        for(int j = 0 ; j < vertices; j++) {
           printf("%5d",shortest_matrix[i][j]);
        }
        cout << endl;
    }
    return 0;
}