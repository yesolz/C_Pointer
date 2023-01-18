//
//  main.c
//  13-1-3
//
//  Created by 최예솔 on 2023/01/15.
//
// 배열의 마지막 요소를 가리키는 포인터 변수 ptr 선언
// 포인터 변수 ptr에 저장된 값을 감소시키는 형태의 연산을 기반으로 배열요소 접근
// 배열에 저장된 모든 정수를 더하여 그 결과를 출력

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arr[5] = {1,2,3,4,5};
    int * ptr = &arr[4];
    
    int i, sum = 0;
    
    for(i=0; i<5; i++){
        sum += *ptr;
        ptr--;
    }
    
    printf("%d \n", sum);
    
    return 0;
}

/*
 sum += *ptr;
 ptr--;
 이 두 줄은
 
 sum += *(ptr--);
 이 한 줄로 줄일 수 있다!
 */
