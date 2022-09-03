#include<stdio.h>
int adjMatrix[20][20];
int powMatrix[4][20][20];

void createPowMatrix(int n){
    int tempMatrix[n][n];
    for(int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            powMatrix[0][i][j] = adjMatrix[i][j];
        }
    }

    for(int i = 1 ; i < n ; i++){
        for( int j = 0 ; j < n ; j++){
            for( int k = 0 ; k < n ; k++){
                int sum = 0 ;
                for( int l = 0 ; l < n ; l++) {
                    sum += powMatrix[i - 1][j][l] * powMatrix[0][l][k];
                }
                powMatrix[i][j][k] = sum;
            }
        }
    }

}
void printMatrix( int n ){
    for(int i = 0 ; i < n ; i++){
        printf("\nThe Matrix is V%d matrix[%d][%d][%d] :\n", i+1, i , n , n);
        for( int j = 0 ; j < n ; j ++){
            for(int k = 0 ; k < n ; k++){
                printf("%d " , powMatrix[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
    printf("\n\n");
}



void detailedPrint(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                if(powMatrix[i][j][k] > 0) {
                    printf("There are powMatrix[%d][%d][%d] path of length =  %d  and %d from %d\n ", i, j, k, i+1 , j , k);
                }
            }
        }
        printf("\n");
    }
}
int main(void){
    int node;
    printf("Enter number of node or point or vertices :");
    scanf("%d", &node);
    // int matrix[node][node];
    printf("Enter your the Adjacency matrix : \n");
    for(int i = 0 ; i < node ; i++){
        for( int j = 0 ; j < node ; j++){
            scanf("%d", &adjMatrix[i][j]);
        }
    }

    printf("\n\na.Adjacency list : \n");
    for( int i = 0 ; i < node ; i++){
        printf("%d --> ",i);
        for( int j = 0 ; j < node ; j++){
            if(adjMatrix[i][j]){
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    createPowMatrix(node);
    printMatrix(node);
    detailedPrint(node);
    return 0;
}





/*
    //3D array 
    int i , j ,k;
    int row , col , numberOfMatrix;
    printf("Enter your number of Matrix is :\n");
    scanf("%d",&numberOfMatrix);
    printf("Enter the Row in the matrix :");
    scanf("%d" , &row);
    printf("Enter the column in this array :");
    scanf("%d", &col);
    int matrix[3][row][col];
    printf("Enter your element in this array :\n");
    for( i = 0 ; i < numberOfMatrix ; i++){
        for( j = 0 ; j < row ; j ++){
            for( k = 0 ; k < col ; k++){
                scanf("%d" , &matrix[i][j][k]);
            }

        }
    }
    //printf the 3D array
    
    for( i = 0 ; i < numberOfMatrix ; i++){
        printf("\nThe Tww Matrix is matrix[%d][%d][%d] :\n", i , row , col);
        for( j = 0 ; j < row ; j ++){
            for( k = 0 ; k < col ; k++){
                printf("%d " , matrix[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
    */

