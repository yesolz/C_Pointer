//
//  main.c
//  21-1
//
// getchar 함수와 putchar 함수의 활용
// : 알파벳 대문자 <-> 소문자

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int type;
    printf("알파벳 한 글자를 입력하세요: ");
    type = getchar();
    
    if (type >=65 && type <=90)   // 대문자 -> 소문자
    {
        type += 32;
        putchar(type);
    }
    else if (type >=97 && type <=122)   // 소문자 -> 대문자
    {
        type -= 32;
        putchar(type);
    }
    else{
        printf("Error!");

    }
    
    printf("\n");
    return 0;
}
