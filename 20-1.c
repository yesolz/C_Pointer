#include <stdio.h>

// void rotate(int (*ptr)[4]){
    // arr[i][j] -> arr[j][3-i]

void rotate(int ptr1[][4], int ptr2[][4])
{
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            ptr1[j][3-i] = ptr2[i][j];
        }
    }
}


int main(int argc, const char * argv[]) {
    
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    
    printf("원래 배열 : \n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    /*
     배열 좌표를 찍어보면?
     [0][0] -> [0][3]
     [0][1] -> [1][3]
     [0][2] -> [2][3]
     [0][3] -> [3][3]
     
     [1][0] -> [0][2]
     [1][1] -> [1][2]
     [1][2] -> [2][2]
     [1][3] -> [3][2]
     
     [3][0] -> [0][0]
     [3][1] -> [1][0]
     [3][2] -> [2][0]
     [3][3] -> [3][0]
     
     규칙을 찾아보면?
     arr[i][j] -> arr[j][3-i]
     arr[3][0] -> arr[0][
     */
    
    int arr2[4][4];
    
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            arr2[j][3-i] = arr[i][j];
        }
    }

    printf("오른쪽 방향으로 90도 회전 : \n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    
    int arr3[4][4] = {0};

    rotate(arr3, arr2); // 거꾸로 쓰지 않게 유의 ^^,,!!
    
    printf("오른쪽 방향으로 90도 회전 : \n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    
    int arr4[4][4] = {0};

    rotate(arr4, arr3);
    
    printf("오른쪽 방향으로 90도 회전 : \n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d ", arr4[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}
