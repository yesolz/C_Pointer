// 주사위의 결과 : 1~6

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    srand((int)time(NULL)); // 현재시간을 이용해서 씨드 설정

    printf("주사위 1의 결과 %d\n", rand()%6+1);
    printf("주사위 2의 결과 %d\n", rand()%6+1);
    return 0;
}
