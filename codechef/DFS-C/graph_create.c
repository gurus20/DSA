#include <stdio.h>
#include <stdlib.h>
#define INF 10000

void shortest_path(int graph[5][5]){
    int start = graph[0][0];
    
    int new[5][5];
    int i,j;
    
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==0 & j==0){
                new[i][j]=0;
            }
            else{
                new[i][j]=INF;
            }
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(graph[i][j]<new[i][j]){
                new[i][j]=graph[i][j];
            }
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
              printf("%d ",new[i][j]);
            }
            printf("\n");
    }
}


int main(){
 int graph[5][5]={{0,3,0,1,0},
                  {3,0,1,7,5},
                  {0,1,0,0,7},
                  {1,7,0,0,2},
                  {0,5,7,2,0}};

                  shortest_path(graph);
                  return 0;   
}