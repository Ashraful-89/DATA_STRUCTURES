#include<bits/stdc++.h>
using namespace std;

int powerMatrix[4][10][10];

int path_matrix[4][4];

int main() {
    int node ;
    cout << "Enter the Node of the graph :\n";
    cin >> node;

    int matrix[node][node];
    cout<<"Enter the adjacency matrix\n";
    for(int i = 0; i < node ; i++) {
        for(int j = 0; j < node ; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "The adjacency matrix is :\n";

    for(int i = 0; i < node ; i++) {
        for(int j = 0 ; j < node ; j++) {
            cout << matrix[i][j] <<" ";
        }
        cout << endl;
    }

    // problem 1.1 print  the adjacency node 

    for(int i = 0 ; i < node ; i++) {
        cout << endl <<"The Adjacency node " << i << " are: " ;
        for(int j = 0 ; j < node ; j++) {
            if(matrix[i][j] != 0) {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    // copy the 1st matrix in the page number one

    for(int i = 0; i < node ; i++) {
        for(int j = 0 ; j < node ; j++) {
            powerMatrix[0][i][j] = matrix[i][j];
        }
    }
    


    // clculated the power matrix
    // problem 1.2 

    for(int p = 0 ; p < node - 1 ; p++) {
        for(int k = 0 ; k < node ; k++) {
            for(int i = 0 ; i < node ; i++) {
                int temp = 0;
                for(int j = 0 ; j < node ; j++) {
                    temp += powerMatrix[p][k][j] * matrix[j][i];
                }
                powerMatrix[p+1][k][i] = temp;
            }
        }
    }

// print the power matrix 

for(int p = 0 ; p < node ; p++) {
    cout << "\n\nThe power of matrix of V[" << p + 1 << "]"<< endl;
    for(int i = 0 ; i < node ; i++) {
        for(int j = 0 ; j < node ; j++){
            cout << powerMatrix[p][i][j] << " ";

        }
        cout << endl;
    }

    cout << endl << endl;
}

// Print the number of length and value 

for(int p = 0 ; p < node ; p++) {
    cout << "All the path in length is : " << p+1 << endl << endl << endl;
    for(int i = 0 ; i < node ; i++) {
        for(int j = 0 ; j < node ; j++) {
            if(powerMatrix[p][i][j] != 0) 
            cout << "The number of path matrix between  " << i << " to " << j <<" of length " << p+1 << " is : " << powerMatrix[p][i][j] << endl;
            else {
                cout << "there are no path matrix between " << i << " to " << j <<" of lenfth " << p + 1 << endl; 
                 } 
          }
          cout << endl << endl;
    }
}


// derermine the path matrix from power matrix

for(int p = 0 ; p < node ; p++) {
    for(int i = 0 ; i < node ; i++) {
        for(int j = 0 ; j <  node ; j++) {
            path_matrix[i][j] += powerMatrix[p][i][j];

        }
    }
}

cout << "\nThe path matrix is from power matrix  : \n";
for(int i = 0 ; i < node ; i++) {
    for(int j = 0 ; j < node ; j++) {
        cout << path_matrix[i][j] << " ";
    }
    cout << endl;
}

// check the strongly connect or not

bool flag = false;
for(int i = 0 ; i < node ; i++) {
    for(int j = 0 ; j < node ; j++) {
        if(path_matrix[i][j])  {
            path_matrix[i][j] = 1;
            }

        else {
            path_matrix[i][j] = 0;
            flag = true;
        }
    }
}
// print the path matrix only 1 and 0
cout << "\nThe path matrix is : " << endl;
for(int i = 0 ; i < node ; i++) {
    for(int j = 0; j < node ; j++) {
        cout << path_matrix[i][j] << " ";
    }
    cout << endl;
}

if(!flag) {
    cout << "The Graph is strongly connected  \n";
}
else {
    cout << "Not strongly connected \n ";
}
return 0;

}