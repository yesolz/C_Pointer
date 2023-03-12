#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arrlen = 5;
    int idx = 0;
    int i;
    int *arr = (int *)malloc(sizeof(int)*arrlen);
    
    while(1)
    {
        printf("정수입력: ");
        scanf("%d", &arr[idx]);
        if(arr[idx]==-1)
            break;
        
        if(arrlen==idx+1)
        {
            arrlen+=3;
            arr=(int *)realloc(arr, sizeof(int)*arrlen);
        }
        idx++;
    }
    for(i=0; i<idx; i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}
