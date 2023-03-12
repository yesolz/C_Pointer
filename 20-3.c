// 0 이상 99 이하의 난수를 총 5개 생성하는 프로그램
// 의사 난수(pseudo-random number) : 출력되는 난수가 반복됨.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int i;
    printf("난수의 범위: 0부터 %d까지 \n", RAND_MAX);
    for(i=0; i<5; i++)
        printf("난수 출력: %d \n", rand()%100);

    return 0;
}
