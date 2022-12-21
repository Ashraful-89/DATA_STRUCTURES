#include<bits/stdc++.h>
using namespace std;

int main () {
    printf("Enter number of node: \n");
    int point;
    cout <<"Enter Point: ";
    cin >> point;
    int matrix[point][point];
    cout <<"Enter the matrix \n";
    for(int i = 0 ; i < point ; i++)
    {
        for(int j = 0 ; j < point; j++) {
            cin >> matrix[i][j];
        }
    }

    // copy the matrix in 1st page
    int powerMatrix [point][point][point];

    for(int i = 0 ; i < point ; i++ ){
        for(int j = 0; j < point ; j++) {
            powerMatrix[0][i][j] = matrix[i][j];
        }
    }

//calculated the powerMatrix 

    for(int p = 0 ; p < point - 1; p++) {
        for(int k = 0; k < point ; k++) {
            for(int i = 0 ; i < point ; i++) {
                int temp = 0;
                for(int j = 0; j < point ; j++) {
                    temp = temp + powerMatrix[p][k][j] * matrix[j][i];

                }
                powerMatrix[p+1][k][i]=temp;

            }
        }
    }


    //print the power matrix 

    for(int p = 1; p < point ; p++) {
        cout << "All path for length " <<p << endl;
        for(int i =0 ; i < point ; i++){
            for(int j = 0 ; j < point ; j++) {
               cout << "no of lentgh " << p << " is between " << i << " and " << j << " is : " << powerMatrix[p][i][j] << endl;

            }
        }
    }
    return 0;
}