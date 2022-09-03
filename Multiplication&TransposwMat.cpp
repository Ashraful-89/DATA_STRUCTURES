#include<bits/stdc++.h>
using namespace std;
int main(void) {
    int mat1[3][3] , mat2[3][3] , multiMat[3][3] , i , j , k , r1,c1,r2,c2;
    cout << "Enter First Matrix Row :\n"; cin >> r1;
    cout << "Enter First Matrix Collumn :\n"; cin >> c1;

    cout << "Enter Second Matrix Row :\n"; cin >> r2;
    cout << "Enter Second Matrix Collumn :\n"; cin >> c2;

    while(c1 != r2){
        cout << "Error ! Again Enter Row and Column :\n";

        cout << "Enter First Matrix Row :\n"; cin >> r1;
        cout << "Enter First Matrix Collumn :\n"; cin >> c1;

        cout << "Enter Second Matrix Row :\n"; cin >> r2;
        cout << "Enter Second Matrix Collumn :\n"; cin >> c2;
    }

    cout << "Enter First Matrix :\n";
    for(i = 0 ; i < r1 ; i++) {
        for(j = 0 ; j < c1 ; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter Second Matrix :\n";
    for(i = 0 ; i < r2 ; i++) {
        for(j = 0 ; j < c2 ; j++) {
            cin >> mat2[i][j];
        }
    }

    //Multipication
    int sum = 0;
    for(i = 0 ; i < r1 ; i ++) {
        for(j = 0 ; j< c2 ; j++)
        {
            for(k = 0 ; k < c1 ; k++) {
                sum += mat1[i][k]*mat2[k][j];

            }
            multiMat[i][j] = sum;
            sum = 0;
        }
    }



 cout << "\nFirst Matrix is :\n ";
    for(i = 0 ; i < r1 ; i++) {
        for(j = 0 ; j < c1 ; j++){
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nSecond Matrix is :\n ";
    for(i = 0 ; i < r2 ; i++) {
        for(j = 0 ; j < c2 ; j++){
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n\nMultiplication Matrix is :\n ";
    for(i = 0 ; i < r1 ; i++) {
        for(j = 0 ; j < c2 ; j++){
            cout << multiMat[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose Matrix of Multiplication matrix
    int transpose[3][3];
    for(i = 0 ; i < r1 ; i++) {
        for(j = 0 ; j < c2 ; j++) {
            transpose[j][i] = multiMat[i][j];

        }
    }

    cout << "Transpose Matrix ;\n";
    for(i = 0 ; i < r1 ; i++) {
        for(j = 0 ; j < c2 ; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}