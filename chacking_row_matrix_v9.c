#include<stdio.h>
int main(){
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];

    for(int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           scanf("%d", &arr[i][j]);
        }
        
    }
    // row matrix
    // if (r == 1)
    // {
    //     printf("This is row matrix");
    // }else
    // {
    //     printf("This is not row matrix");
    // }
    // column matrix
    // if (c == 1)
    // {
    //     printf("This is col matrix");
    // }else
    // {
    //     printf("This is not col matrix");
    // }
    // square matrix
    if (c == r)
    {
        printf("This is square matrix");
    }else
    {
        printf("This is not square matrix");
    }
    
    return 0;
}