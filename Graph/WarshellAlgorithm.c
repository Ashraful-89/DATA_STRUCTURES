#include<stdio.h>
int matrix[20][20];
int path_matrix[20][20];
int shortest_martix[20][20];

int main() {
    int n ;
    printf("Enter the number of nodes or point or vertics:\n");
    scanf("%d",&n);
    printf("Enter the adjacency matrix:\n");
    int i , j ,k;
    for( i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\n\n");
    for(i = 0; i < n ; i++)
        for( j = 0 ; j < n ; j++){
            if(matrix[i][j]){
                path_matrix[i][j] = 1;
                shortest_martix[i][j] = path_matrix[i][j];
            }

            else{
                path_matrix[i][j] = 0;
                shortest_martix[i][j] = 10000;
            }
        }


    //Calculated path and shortest path matrix

    for(k = 0 ; k < n ; k++){
        for(i = 0 ; i < n; i++){
            for( j = 0; j < n ; j++){
                path_matrix[i][j] = path_matrix[i][j] || (path_matrix[i][k] && path_matrix[k][j]);
                shortest_martix[i][j] = shortest_martix[i][j] < (shortest_martix[i][k] + shortest_martix[k][j])? shortest_martix[i][j] : (shortest_martix[i][k] + shortest_martix[k][j]);

            }
        }
    }
    printf("The Path matrix is below :\n");

    for( i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            printf("%d " ,path_matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\nThe Shortest Path MAtrix is :\n");
    for( i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
           printf("%d ", shortest_martix[i][j]);
        }
        printf("\n");

    }
    return 0;

}