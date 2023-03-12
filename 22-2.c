//
//  main.c
//  22-2
//  구조체 배열의 선언
/*
 22-1에서 정의한 employee 구조체를 기반으로 길이가 3인 배열 선언.
 세 명의 정보를 프로그램 사용자로부터 입력 받아서 배열에 저장한 다음,
 배열에 저장한 데이터를 순서대로 출력하는 예제
 */

#include <stdio.h>

struct employee{
    char name[20];
    char idNum[20];
    int pay;
};

int main(int argc, const char * argv[]) {
    
    struct employee arr[3]={
        {"최예솔", "010-0000-1111", 24},   // 첫 번째 요소의 초기화
        {"홍서현", "010-2222-3333", 23},   // 두 번째 요소의 초기화
        {"김유미", "010-4444-5555", 22}    // 세 번째 요소의 초기화
    };
    
    int i;
    for(i=0; i<3; i++){
        printf("%s %s %d \n", arr[i].name, arr[i].idNum, arr[i].pay);
    }
    
    return 0;
}

