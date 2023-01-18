//
//  main.c
//  11-2-3
//
//  Created by 최예솔 on 2023/01/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char str[100];
    printf("영단어 입력: ");
    scanf("%s", str);
    
    char max;
    int i;
    max = str[0];
    for(i=0; str[i]!='\0'; i++){
        if(max<str[i]){
            max = str[i];
        }
    }
    printf("아스키 코드 값이 가장 큰 문자: %c\n", max);
    
    return 0;
}
