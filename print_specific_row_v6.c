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
    // for specific row
    // int specific_row;
    //     scanf("%d", &specific_row);
    // for (int j = 0; j < c; j++)
    // {
    //    printf("%d ", arr[specific_row][j]);
    // }
    // for specific column
    int specific_col;
        scanf("%d", &specific_col);
    for (int j = 0; j < r; j++)
    {
       printf("%d\n", arr[j][specific_col]);
    }
    return 0;
}