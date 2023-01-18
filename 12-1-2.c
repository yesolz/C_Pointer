//
//  main.c
//  12-1-2
//
//  Created by 최예솔 on 2023/01/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num1 = 10, num2 = 20;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    
    (*ptr1) += 10; // num1은 20
    (*ptr2) -= 10; // num2는 10
    
    ptr1 = &num2;
    ptr2 = &num1;
    
    printf("ptr1이 가리키는 변수: %d\n", *ptr1);
    printf("ptr2이 가리키는 변수: %d\n", *ptr2);
    
    return 0;
}

/*
 답지코드
 int * temp;
 temp=ptr1;
 ptr1=ptr2;
 ptr2=temp;
 */
