//  16-1-3
// 성적관리프로그램
// 배열 5*5
// 국어, 영어, 수학, 국사
// 철희, 철수, 영희, 영수
// 사용자로부터 네 사람의 네 과목 점수 입력 받음
// 미리 선언해 놓은 배열에 다음의 형태로 그 값을 저장
// 개인별 총점과 과목별 총점을 계산해서 저장해서 5행, 5열에 출력


#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[5][5] = {0};
    printf("철희의 점수를 입력하시오. (국어 영어 수학 국사) : ");
    scanf("%d %d %d %d", &arr[0][0], &arr[0][1], &arr[0][2], &arr[0][3]);
    printf("철수의 점수를 입력하시오. (국어 영어 수학 국사) : ");
    scanf("%d %d %d %d", &arr[1][0], &arr[1][1], &arr[1][2], &arr[1][3]);
    printf("영희의 점수를 입력하시오. (국어 영어 수학 국사) : ");
    scanf("%d %d %d %d", &arr[2][0], &arr[2][1], &arr[2][2], &arr[2][3]);
    printf("영수의 점수를 입력하시오. (국어 영어 수학 국사) : ");
    scanf("%d %d %d %d", &arr[3][0], &arr[3][1], &arr[3][2], &arr[3][3]);
    
    
    for(int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            arr[i][4] += arr[i][j]; // 학생별 총점 저장
            arr[4][i] += arr[j][i]; // 과목별 총점 저장
        }
        arr[4][4] += arr[4][i];
    }
    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d ", arr[i][j]); // 배열 전체 출력
        }
        printf("\n");
    }

    return 0;
}
