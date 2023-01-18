//
//  main.c
//  13-1-4
//
//  Created by 최예솔 on 2023/01/15.
//
// 배열에 저장된 값의 순서가 654321로 변경
// 배열의 앞과 뒤를 가리키는 포인터 변수 두 개를 선언
// 두 포인터 변수를 활용하여 저장된 값의 순서를 뒤바꾸기!

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int arr[6] = {1,2,3,4,5,6};
    
    int * ptr1 = arr; // 배열의 맨 앞 가리키기
    int * ptr2 = &arr[5]; // 배열의 맨 뒤 가리키기

    int i;
    int temp;
    for (i=0; i<6/2; i++){
        temp = *(ptr1+i);
        *(ptr1+i) = *(ptr2-i);
        *(ptr2-i) = temp;
    }

    int j; // j 선언 안하고 걍 i로 해도 댐
    for(j=0; j<6; j++){
        printf("%d ", arr[j]);
    }

    printf("\n");
    return 0;
}


/*
 참고. chap11-2-2 해설 (p271)
 
char voca[100];
int len=0, i;
char temp;
printf("영단어 입력: ");
scanf("%s", voca);

while(voca[len] != '\0')
    len++;

for(i=0; i<len/2; i++){
    temp=voca[i]; // 앞의 문자 임시로 저장
    voca[i] = voca[(len-i)-1]; // 뒤의 문자 앞으로. 배열이니까 -1.
    voca[(len-i)-1] = temp; // 앞의 문자를 뒤로
}

printf("뒤집힌 영단어: %s \n", voca);
 */
