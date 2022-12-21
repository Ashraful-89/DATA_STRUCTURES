#include<bits/stdc++.h>
using namespace std;

int main() {
    int row ;
    cout << "Enter Row :"; cin >> row;
    int column ; 
    cout << "Enter the column : " ; cin >> column;
    cout << "Enter First  matrix " << endl;
    int mat1[row][column];
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column ;j++) {
            cin>>mat1[i][j];
        }
    }

    cout << " Enter Second  matrix " << endl;
    int mat2[row][column];
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column ;j++) {
            cin>>mat2[i][j];
        }
    }

    // calculated the add and sub

    int matSum[row][column] , matSub[row][column];

    for(int i = 0 ; i < row; i++) {
        for(int j = 0; j < column; j++) {
            matSum[i][j] = mat1[i][j] + mat2[i][j];
            matSub[i][j] = mat1[i][j] + mat2[i][j];
        } 
    }

    cout << "\nAddition of two matrix :\n";
    for(int i = 0; i < row ; i++) {
        for(int j = 0; j < column ; j++) {
            cout << matSum[i][j] << " ";
        }
        cout << endl;
    }

     cout << "\nSubstraction of two matrix :\n";
    for(int i = 0; i < row ; i++) {
        for(int j = 0; j < column ; j++) {
            cout << matSub[i][j] << " ";
        }
        cout << endl;
    }


    // Multiplication

    int matMulti[column][row];
    int temp = 0;
    for(int k = 0 ; k < row ; k++) {
        for(int i = 0; i < row ; i++) {
            for(int j = 0; j < column ; j++) {
                temp += mat1[k][j] * mat2[j][i];
            }
            matMulti[k][i] = temp;
            temp = 0;
        }
    }

    cout << "\nMultiplication of two matrix :\n";
    for(int i = 0; i < row ; i++) {
        for(int j = 0; j < column ; j++) {
            cout << matMulti[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}