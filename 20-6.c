// 중복되면 안되는 것 추가하기.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    printf("Start Game!\n");
    
    int userArr[3];
    int comArr[3];

    for(int i=0; i<3; i++){
        srand((int)time(NULL));
        comArr[i] = rand()%10;
    }

    int strike = 0, ball = 0;
    int count = 1;
    
    do {
        printf("3개의 숫자 선택: ");
        
        for(int i=0; i<3; i++){
            scanf("%d", &userArr[i]);   // scanf("%d " ~ ) 로 하면 안되는 이유? ->
        }
                        
        for(int i=0; i<3; i++){
            if(userArr[i] == comArr[i]){ // strike
                strike++;
            }
            else if(userArr[i] == comArr[i+1] || userArr[i] == comArr[i+2] || userArr[i] == comArr[i-1] || userArr[i] == comArr[i-2]){ // ball
                ball++;
            }
        }
        
        
        printf("%d번째 도전 결과: %dstrike, %dball!!\n", count, strike, ball);
        count++;
        
    } while (strike != 3);
        
    printf("Game Over!");

        
    return 0;
}
