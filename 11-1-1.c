//
//  main.c
//  chap11-1
//
//  Created by 최예솔 on 2023/01/14.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int arr[5] = {};
    
    int i = 0;
    printf("5개의 정수를 입력하시오: ");
    for (i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    
    int max = arr[0], min = arr[0], sum = 0;

    for (i=0; i<5; i++){
        if(max<arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
        sum += arr[i];
    }
    
    
    printf("입력된 정수 중에서 최댓값: %d\n", max);
    printf("입력된 정수 중에서 최솟값: %d\n", min);
    printf("입력된 정수의 총 합: %d\n", sum);
    
    return 0;
}
