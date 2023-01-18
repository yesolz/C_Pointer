//
//  main.c
//  13-1-2
//
//  Created by 최예솔 on 2023/01/15.
//
// 포인터 변수 ptr에 저장된 값 변경 x !!
// ptr을 대상으로 덧셈연산하여
// 그 결과로 반환되는 주소 값을 통해 배열 요소에 접근. 하여 값 2씩 증가


#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arr[5] = {1,2,3,4,5};
    int * ptr = arr;
    
    int i;
    for(i=0; i<5; i++){
        
        *(ptr+i) += 2;
        printf("주소 : %p\n", ptr); // ptr에 저장된 값(주소) 는 그대로!
        printf("%d\n", arr[i]);
        

    }
    printf("\n");
    
    return 0;
    
}
