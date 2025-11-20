#include<stdio.h>
#include<stdbool.h>
int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    int arr[N][M];

    for(int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
           scanf("%d", &arr[i][j]);
        }
        
    }
    int X;
    scanf("%d", &X);
    for(int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
           if (arr[i][j] == X)
           {
            printf("will not take number");
            return 0;
           } 
        }
    }
    printf("will take number");
    return 0;
}