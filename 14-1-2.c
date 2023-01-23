// 문제 14-1, 문제2
// 세 변수에 저장된 값을 서로 뒤바꾸는 함수
// 함수 호출 형태 : Swap3(&num, &num2, &num3)
// 함수 호출의 결과 : num1 → num2, num2 → num3, num3 → num1

#include <stdio.h>

void Swap3(int * ptr1, int * ptr2, int * ptr3){
    int temp1, temp2;
    temp1 = *ptr1;
    *ptr1 = *ptr3;
    temp2 = *ptr2;
    *ptr2 = temp1;
    *ptr3 = temp2;
    printf("swap 안 : %d %d %d \n", *ptr1, *ptr2, *ptr3);
}

int main(int argc, const char * argv[]) {
    
    int num1, num2, num3;
    printf("세 정수를 입력하시오: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%d %d %d\n", num1, num2, num3);
    Swap3(&num1, &num2, &num3);
    
    printf("%d %d %d\n", num1, num2, num3);

    return 0;
}

/*
답지코드
void Swap3(int * ptr1, int * ptr2, int * ptr3){
    int temp = *ptr1;
    *ptr1 = *ptr3;
    *ptr3 = *ptr2;
    *ptr2 = temp; // 꼬리에 꼬리를 물듯 .. 예쁜 코드
}
*/
