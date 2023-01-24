//  16-1-2
// 배열의 열과 행을 바꾸는 문제

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arrA[2][4] = {1, 2, 3, 4, 5, 6, 7, 8}; // 선언과 동시에 초기화
    
    printf("배열 A \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            printf("%d ",arrA[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    int arrB[4][2] = {0};
    
    printf("배열 B \n");
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            arrB[i][j] = arrA[j][i];
            printf("%d ",arrB[i][j]);
        }
        printf("\n");
    }
    return 0;
}

