/*
 함수 호출이 완료도되면
 포인터 변수 maxPtr에는 가장 큰 값이 저장된 배열요소의 주소 값이
 포인터 변수 minPtr에는 가장 작은 값이 저장된 배열요소의 주소 값이 저장
 */


void MaxAndMin(int **arr, int **maxPtr, int **minPtr){

}

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int * maxPtr;
    int * minPtr;
    int arr[5];

    
    printf("배열 값 입력: ");
    
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<5; i++){
        printf("%p\n", &arr[i]);
    }
    
    
    int max = arr[0], min = arr[0];
    maxPtr = &arr[0];
    minPtr = &arr[0];
    for(int i=0; i<5; i++){
        if(max < arr[i]){
            max = arr[i];
            maxPtr = &arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
            minPtr = &arr[i];
        }
    }

    printf("\nmaxPtr: %p", maxPtr);
    printf("\nminPtr: %p\n", minPtr);


    
    return 0;
}
