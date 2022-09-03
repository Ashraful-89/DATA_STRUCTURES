// Floyd-Warshall Algorithm in C

#include <stdio.h>

// defining the number of vertices
#define nV 4

#define INF 999

void printMatrix(int matrix[][nV]);
void path_matrix(int matrix[][nV]);

// Implementing floyd warshall algorithm
void floydWarshall(int graph[][nV]) {
  int shortest_matrix[nV][nV], i, j, k;

  for (i = 0; i < nV; i++){
    for (j = 0; j < nV; j++){
      if(graph[i][j])
        shortest_matrix[i][j] = graph[i][j];
      else
        shortest_matrix[i][j] = INF;
    }
}
        
  // Adding vertices individually
  for (k = 0; k < nV; k++) {
    for (i = 0; i < nV; i++) {
      for (j = 0; j < nV; j++) {
          if(k != i || k != j)
          shortest_matrix[i][j] = shortest_matrix[i][j] < (shortest_matrix[i][k] + shortest_matrix[k][j])? shortest_matrix[i][j] : (shortest_matrix[i][k] + shortest_matrix[k][j]);
      }
    }
  }
  printMatrix(shortest_matrix);
  path_matrix(shortest_matrix);
}

void printMatrix(int matrix[][nV]) {
  for (int i = 0; i < nV; i++) {
    for (int j = 0; j < nV; j++) {
    //   if (matrix[i][j] == INF)
    //     printf("%4s", "INF");
    //   else
        printf("%4d", matrix[i][j]);
    }
    printf("\n");
  }
}
void path_matrix(int graph[][nV]){
printf("\n\nThe Path Matrix is :\n");
  for(int i = 0 ; i < nV ; i++){
    for(int j = 0; j < nV ; j++){
        if(graph[i][j])
        {
            printf("%4d ",1);
        }
        else{
            printf("%4d " , 0);
        }
    }
     printf("\n");
  }
}

int main() {
  int graph[nV][nV] = {{7, 5, 0, 0},
             {7, 0, 0, 2},
             {0, 3, 0, 0},
             {4, 0, 1, 0}};

    printf("The Simple MAtrix is :\n");
    for(int i = 0 ; i < nV ; i++){
        for(int j = 0 ; j < nV ;j++){
            printf("%4d",graph[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
  floydWarshall(graph);
  return 0;
}