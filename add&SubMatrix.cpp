#include<bits/stdc++.h>
int mat1[3][3] , mat2[3][3] ,mat3[3][3], mat4[3][3],i,j,row,col;
using namespace std ;
int main() {
    cout << "Hi , Ami Ashraful :\n";
    cout << "Enter Row : "; cin >> row;
    cout << "Enter Column : " ; cin >> col;

    cout <<"\nFor First Matrix:\n";
    for( i = 0 ; i < row ; i++) {
        for(j = 0 ; j < col ; j++){
            cin >> mat1[i][j];
        }
    }
    cout << "For Second Matrix :\n";
    for( i = 0 ; i < row ; i++) {
        for(j = 0 ; j < col ; j++){
            cin >> mat2[i][j];
        }
    }

    // addition of 2 matrix 
    for(i = 0 ; i < row ; i++) {
        for(j = 0 ; j < col ; j++) {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Substraction of 2 matrix 
    for(i = 0 ; i < row ; i++) {
        for(j = 0 ; j < col ; j++) {
            mat4[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

    cout << "\nFirst Matrix is :\n ";
    for(i = 0 ; i < row ; i++) {
        for(j = 0 ; j < col ; j++){
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nSecond Matrix is :\n ";
    for(i = 0 ; i < row ; i++) {
        for(j = 0 ; j < col ; j++){
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n\nAddition Matrix is :\n ";
    for(i = 0 ; i < row ; i++) {
        for(j = 0 ; j < col ; j++){
            cout << mat3[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n\\nSubstraction Matrix is :\n ";
    for(i = 0 ; i < row ; i++) {
        for(j = 0 ; j < col ; j++){
            cout << mat4[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}