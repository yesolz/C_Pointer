//
//  main.c
//  chap13
//
//  Created by 최예솔 on 2023/01/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arr[5] = {1,2,3,4,5};
    int * ptr = arr;
    
    int i;
    for(i=0; i<5; i++){
        *ptr += 2;
        printf("주소 : %p\n", ptr); // ptr에 저장된 값이 증가
        printf("%d\n", arr[i]);
        ptr++;
    }
    
    printf("\n");
    
    return 0;
}
