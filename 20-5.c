/*
 매개변수에 문자열, 숫자 들어가는 함수 만들어서
 함수 두번 실행하면 문자열(가위,바위,보)로 바뀌도록 짜기!
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void numToStr(char **str, int num){
    if(num == 1){
        *str = "바위";
    }
    else if(num == 2){
        *str = "가위";
    }
    else if(num == 3){
        *str = "보";
    }
}

int main(int argc, const char * argv[]) {
    
    
    int userNum ,comNum;
    int win = 0, draw = 0, lose = 0;

    while(1){
        printf("바위는 1, 가위는 2, 보는 3: ");
        scanf("%d", &userNum);
        srand((int)time(NULL));
        comNum = rand()%3+1;
        
        char *userStr;  // 문자열을 담는 건 주소다
        char *comStr;
        
        numToStr(&userStr, userNum);
        numToStr(&comStr, userNum);
        
        
        if(userNum == comNum){
            ++draw;
            printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다!\n", userStr, comStr);
        }
        
        if((userNum == 1 && comNum == 2) || (userNum == 2 && comNum == 3) || (userNum == 3 && comNum == 1)){
            ++win;
            printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 이겼습니다!\n", userStr, comStr);
        }
        
        if((userNum == 2 && comNum == 1) || (userNum == 3 && comNum == 2) || (userNum == 1 && comNum == 3)){
            ++lose;
            printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 졌습니다!\n", userStr, comStr);
            break;
        }
    }
    
    
    printf("\n게임의 결과 : %d승, %d무, %d패\n", win, draw, lose);
    
    
    return 0;
}
