//
//  main.c
//  11-2-1
//
//  Created by 최예솔 on 2023/01/15.
//
// 하나의 영단어를 입력
// 입력 받은 영단어의 길이를 계산하여 출력

#include <stdio.h>
#define max 100

int main(int argc, const char * argv[]) {
    
    char str[max];
    printf("하나의 영단어 입력: ");
    scanf("%s", str);
    int i=0;
    while(str[i] != '\0'){
        i++;
    }
    printf("입력한 영단어의 길이: %d\n", i);
    return 0;
}
