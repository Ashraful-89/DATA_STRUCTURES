#include<bits/stdc++.h>
using namespace std;
int Br[3][3];

int main() {
    cout << "Enter the Vertices : ";
    int node; cin >> node;
    cout << "Enter the matrix :\n ";
    int matrix[node][node];

    for(int i = 0; i < node; i++) {
        for(int j = 0; j < node; j++) {
            cin >> matrix[i][j];
        }
    }

    // calculated the powermatrix


    int power_matrix[node][node][node];

    for(int i= 0; i < node; i++) {
        for(int j = 0; j < node; j++){
             power_matrix[0][i][j] = matrix[i][j];
        }
 
    }

for(int p = 0 ; p < node - 1; p++) {
     for(int i = 0 ; i < node; i++) {
            for(int j = 0; j < node; j++) {
                int temp = 0;
                for(int k = 0; k < node; k++) {
                    temp = power_matrix[p][i][k] * matrix[k][j];
                    }
                    power_matrix[p+1][i][j]=temp;
            }
            
        }
    }

   // clculated PATH_MAX;

   
   for(int p = 0; p < node - 1; p++) {
    for(int i = 0; i < node ; i++) {
        for(int j = 0; j < node; j++) {
            Br[i][j] += power_matrix[p][i][j];
        }
    }
   }
   bool flag = true;
   cout << "The power Matrix is : \n";
   for( int i = 0; i < node; i++){
    for(int j = 0; j < node; j++) {
        cout << Br[i][j] << " ";
        if(!Br[i][j]) flag = false;
    }
    cout << endl;
   }
   if(flag)
   {
    cout << "Strongly connected :\n";
   }
   else {
    cout << "Not Strongly connected :" << endl;
   }
   
    return 0;
}