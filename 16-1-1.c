//  16-1-1
// 가로 길이가 9, 세로 길이가 3인 int형 2차원 배열을 선언하여
// 구구단 2,3,4단 저장 후 출력


#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arr[3][9];
    
    for(int i=0; i<3; i++){
        printf("구구단 중 %d단: ", i+2);
        for(int j=0; j<9; j++){
            arr[i][j] = 1;
            arr[i][j] = (j+1) * (i+2);
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
