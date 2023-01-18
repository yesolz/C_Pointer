//
//  main.c
//  12-1-1
//
//  Created by 최예솔 on 2023/01/15.
// 변수와 포인터 변수의 관계를 그림을 그려서 설명 & 출력 결과 예상

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num = 10;
    int * ptr1 = &num;
    int * ptr2 = ptr1;
    
    (*ptr1)++;
    (*ptr2)++;
    
    printf("%d \n", num);
    return 0;

}
