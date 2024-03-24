#include<stdio.h>
#define INF 999
floydwarshell(int graph[][3],int n);

int main(){
    int n=3;
  int graph[3][3]={{0,4,11},
                {6,0,2},
                {3,INF,0}};
        floydwarshell(graph,n);
}

floydwarshell(int graph[][3],int n){
    int i,j,k,A[n][n];
    for(i=0;i<n;i++){
       for(j=0;j<n;j++){
        A[i][j]=graph[i][j];
    } 
    }
     for(k=0;k<n;k++){
    for(i=0;i<n;i++){
       for(j=0;j<n;j++){
        if(A[i][k]+A[k][j]<A[i][j])
            A[i][j]=A[i][k]+A[k][j];

    } 
    }
    }
    // printing the matrices
     for(i=0;i<n;i++){
       for(j=0;j<n;j++){
        printf("%d\t",A[i][j]);
    } printf("\n");
    }
}