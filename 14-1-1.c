// 문제 14-1, 문제1
// 변수 num에 저장된 값의 제곱을 계산하는 함수를 정의
// 이를 호출하는 main 함수 작성
// SquareByvalue 함수는 인자로 전달된 값의 제곱을 반환
// SquareByReference 함수는 정수가 저장되어 있는 변수의 주소 값을 인자로 받아서, 해당 변수에 저장된 값의 제곱을 그 변수에 다시 저장

#include <stdio.h>

int SquareByValue (int num){
    return num = num*num;
}
void SquareByReference (int * num){
    *num *= *num;
}

int main(int argc, const char * argv[]) {
    
    int num;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    printf("SquareByValue: %d\n", SquareByValue(num));
    
    SquareByReference(&num);
    printf("SquareByReference: %d\n", num);
    
    return 0;
}

/*
 답지코드
 void SquareByReference(int * ptr){
    int num = *ptr;
    *ptr = num*num;
 */
