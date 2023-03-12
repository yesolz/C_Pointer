//  22-1
//  구조체의 정의

#include <stdio.h>

struct employee{
    char name[20];
    char idNum[20];
    int pay;
};

int main(int argc, const char * argv[]) {
    
    struct employee man;

    printf("종업원 이름 입력: "); scanf("%s", man.name);
    printf("주민등록번호 입력: "); scanf("%s", man.idNum);
    printf("급여정보 입력: "); scanf("%d", &(man.pay));

    printf("이름: %s \n", man.name);
    printf("번호: %s \n", man.idNum);
    printf("나이: %d \n", man.pay);
    
    return 0;
}

