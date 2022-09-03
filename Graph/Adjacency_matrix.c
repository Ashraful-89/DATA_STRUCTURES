#include<stdio.h>
#define V 4
void init(int array[][V]){
    int i,j;
    for(i = 0 ; i < V; i++){
        for(j = 0; j < V ; j++){
            array[i][j] = 0;
        }
    }
}
void addEdges ( int array[][V], int i , int j){
    array[i][j] = 1;
    array[j][i] = 1;
}
void PrintAdjMatrix(int array[][V]){
    int i , j;
    for(i = 0 ; i <  V;i++){
        printf("%d: ",i);
        for( j = 0 ; j < V ; j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int adjMatrix[V][V];
    init(adjMatrix);
    addEdges(adjMatrix , 0 , 1);
    addEdges(adjMatrix , 0 , 2);
    addEdges(adjMatrix , 1 , 2);
    addEdges(adjMatrix , 1 , 3);
    addEdges(adjMatrix , 2 , 3);
    PrintAdjMatrix(adjMatrix);
    return 0;
}