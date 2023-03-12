// 문자열을 입력 받아서 그 안에 존재하는 숫자의 총 합 계산해서 출력
// 모르겠ㅇㅇ어어ㅓ어엉ㅇ 엉


#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    char str[50];
    printf("숫자를 포함한 문자열 입력: ");
    fgets(str, sizeof(str), stdin);
        
    int num[50] = {0};
        
    int len = strlen(str);

    printf("len: %d\n", len);
    
    int j=0;
    for(int i=0; i<len; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            num[j++] = str[i];
        }
    }
    
    printf("j: %d\n", j);
    
    for(int k=0; k<j; k++){
        printf("num[%d]: %d \n", k, num[k]);
    }
    
    return 0;
}
