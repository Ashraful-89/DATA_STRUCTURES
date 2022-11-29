#include<bits/stdc++.h>
using namespace std;

int MIN(int a , int b) {
    return a > b ? b : a;
}

int power_matrix[10][10][10];
int mat[10][10];
int Br[10][10];
int main() {

//     // Problem 1 , 2 , 3, 4 respectivly done:
//     // Problem : 1 Find the Path matrix of length 1, 2, 3, 4;

//     int node,edge;
//     cout << "Enter the number of  Node and Edge : "; cin >> node >> edge;
//     int v , u;
//     cout << "Enter the edge between two node : \n"; 
//     for(int i = 0 ; i < edge; i++) {
//         cin >> v >> u;
//         mat[v][u] = 1;
//         // mat[u][v] = 1;
//     }
//     cout << "The Adjacency Matrix is : \n";
//     for(int i = 0 ; i < node ; i++) {
//         for(int j = 0 ; j < node ; j++) {
//             cout << mat[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     // copy the path in the power matrix from adjacency matrix 

//     for(int i = 0 ; i < node ; i++) {
//         for(int j = 0 ; j < node ; j++) {
//             power_matrix[0][i][j] = mat[i][j];
//         }
//     }
//    // print the 1st path matrix which length 1 :
//     cout << "The First Path matrix and length 1 : \n";
//     for(int i = 0 ; i < node ; i++) {
//         for(int j = 0 ; j < node ; j++) {
//             cout << power_matrix[0][i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;

//     // calculated the powerMatrix from the adjacency matrix 
//     int temp = 0;
//     for(int p = 0 ; p < node - 1 ; p++) {
//         for(int k = 0 ; k < node ; k++) {
//             for(int i = 0 ; i < node ; i++) {
//                 for(int j = 0 ; j < node ; j++) {
//                     temp = temp + power_matrix[p][k][j] * mat[j][i]; 
//                 }
//                 power_matrix[p+1][k][i] = temp;
//                 temp = 0;
//             }
//         }
//     }
//     // Problem 2: calculated the Br matrix using power Matrix in given up and found conected or not

//     cout << "Print the power Matrix : \n";

//     for(int p = 0; p < node; p++) {
//         cout << "P"<< p + 1 << ":" << endl;
//         for(int i = 0 ; i < node; i++) {
//             for(int j = 0; j < node ; j++) {
//                 cout << power_matrix[p][i][j] << " ";
//             }
//             cout << endl;
//         }
//         cout << endl << endl;

//     }

//     // calculated Br  Matrix 
//     for(int i = 0; i < node; i++) {
//         for(int j = 0 ; j < node; j++) {
//             for(int p = 0 ; p < node; p++) {
//                 Br[i][j] = Br[i][j] + power_matrix[p][i][j];
//             }
//         }
//     }
//     // path matrix found from the Br matrix 
//     bool flag = true;
//     int pathMatrix[node][node];
//     cout << "\n\nThe Br matrix is : \n";
//     for(int i = 0 ; i < node; i++) {
//         for(int j = 0; j < node ; j++) {
//             cout << Br[i][j] << " ";
//             if(Br[i][j]!=0) {
//                 pathMatrix[i][j] = 1;
//             }
//             else {
//                 pathMatrix[i][j] = 0;
//                 flag = false;
//             }
//         }
//         cout << endl;
//     }

//     cout << "\nThe Path matrix in this below :\n ";
//     for(int i = 0; i < node ; i++) {
//         for(int j = 0; j < node ; j++) {
//             cout << pathMatrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     if(flag) {
//         cout << "the graph is strongly connected : ";
//     }
//     else {
//         cout << "not strongly Connected : ";
//     }


//    // Problem 3: Calculated the path matrix using Warshall's Algorithm and found the graph is connected or not

//     cout << "The Path Matrix using Warshall's Algorithm :\n";

//     for(int k = 0 ; k < node ; k++) {
//         for(int i = 0 ; i < node ; i++) {
//             for(int j = 0; j < node ; j++) {
//                 mat[i][j] = mat[i][j] || (mat[i][k] && mat[k][j]);
//             }
//         }
//     }

//     cout << "The Path Matrix of Using Warshall algorithm : \n";
//     for(int i = 0; i < node ; i++) {
//         for(int j = 0 ; j < node ;j++){
//             cout << mat[i][j] << " ";
//             if(mat[i][j] == 0) {
//                 flag = false;
//             }
//         }
//         cout << endl;
//     }
//     if(flag) {
//         cout << "the graph is strongly connected : ";
//     }
//     else {
//         cout << "not strongly Connected : ";
//     }

//    // problem 4 : calculated the shortest path matrix in wieghted graph using Warshall Algorithm 

    int node ;
    int INF = 100000;
    cout << "Enter Node :" ; cin >> node ;
    int shortest_pathMatrix[node][node];
    int matrix[node][node];

    cout << "Enter the adjacency Matrix for Weighted graph : \n";
    for(int i = 0; i < node ; i++) {
        for(int j = 0; j < node ; j++) {
            cin >> matrix[i][j];
            if(matrix[i][j] == 0) {
                shortest_pathMatrix[i][j] = INF;
            }
            else {
                shortest_pathMatrix[i][j] = matrix[i][j];
            }
        }
    }

    // calculated the shortest matrix : 

    for(int k = 0; k < node; k++) {
        for(int i = 0; i < node; i++) {
            for(int j = 0; j < node ; j++) {
                shortest_pathMatrix[i][j] = MIN(shortest_pathMatrix[i][j] , (shortest_pathMatrix[i][k] + shortest_pathMatrix[k][j]));
            }
        }
    }

    cout <<"The Shortest matrix is :\n";

    for(int i = 0; i < node ;i++) {
        for(int j = 0 ; j < node ; j++) {
            cout << shortest_pathMatrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
    
}