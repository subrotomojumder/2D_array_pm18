#include<stdio.h>
int main(){
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    // print index
    //     for(int i = 0; i < c; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //        printf("%d %d\n", i, j);
    //     }
        
    // }

    for(int i = 0; i < c; i++)
    {
        for (int j = 0; j < c; j++)
        {
           scanf("%d", &arr[i][j]);
        }
        
    }
    for(int i = 0; i < c; i++)
    {
        for (int j = 0; j < c; j++)
        {
           printf("%d ", arr[i][j]);
        }
        
    }
    return 0;
}