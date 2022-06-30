#include <stdio.h>

int arrfill(int N, int M){
    int A[N],i,j, x, y;
    
    for(i=1;i<=N;i++){
        A[i] = 0;
    }

    while(M!=0){
        scanf("%d %d", &x, &y);

        for(j=1;j<=N;j++){
            if(j%y!=0){
                if(x > A[j] && A[j]!=0){
                A[j] = x;
                }
                if(A[j]==0){
                    A[j]=x;
                }
            }
        }
        M--;
    }
    int sum = 0;
    for(i=1;i<=N;i++){
        sum = sum + A[i];
    }
        printf("%d \n", sum);
    return 0;
}

int main(){
    int T;
    scanf("%d", &T);

    while(T!=0){
    int N,M;
    scanf("%d %d", &N, &M);
    arrfill(N,M);
    T--;
    }
    return 0;
}
