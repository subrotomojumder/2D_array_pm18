#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    scanf("%d", &size);
    int arr[size][size];

    for(int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
           scanf("%d", &arr[i][j]);
        }
        
    }
    int primary = 0;
    int secondary = 0;
    for(int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i + j == size - 1)
            {
                secondary += arr[i][j];
            }
            if (i == j)
            {
                primary += arr[i][j];
            }
        }
    }
    printf("%d", abs(primary - secondary) );
    return 0;
}