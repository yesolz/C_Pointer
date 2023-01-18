//
//  main.c
//  11-2-2
//
//  Created by 최예솔 on 2023/01/15.
// 배열에 저장된 영단어를 역순으로 뒤집음 (널 문자 위치 변경 X)
// 뒤집은 결과 출력

#include <stdio.h>
#define max 100

int main(int argc, const char * argv[]) {
    
    char str[max];
    
    printf("영단어 입력: ");
    scanf("%s", str);
    
    char copy[max]={'0'};

    int i=0;
    while(str[i] != '\0'){
        copy[i] = str[i];
        i++;
    }

    int j=0;
    for(j=0; str[j] != '\0'; j++){
        str[j] = copy[i-1];
        i--;
    }
    
    printf("역순: %s\n", str);
    
    return 0;
}

/*
 답지 코드
 
 while(voca[len] 1= '\0') len++; // 영단어 길이 계산
 
 for(i=0; i<len/2; i++){
    temp = voca[i];
    voca[i] = voca[(len/i)-1];
    voca[(len-i)-1]=tem[;
 }
 
 */
