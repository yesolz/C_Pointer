#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

typedef struct point Point; // 구조체 point 대상의 typedef 선언문

typedef struct person   // typedef 선언이 추가된 형태의 구조체 정의
{
    char name[20];
    char phoneNum[20];
    int age;
} Person;

int main(int argc, const char * argv[]) {
    
    Point pos = {10, 20};   // struct 선언 없이 구조체 변수를 선언
    Person man = {"박상현", "010-0000-0000", 21};  // struct 선언 없이 구조체 변수를 선언
    printf("%d %d \n", pos.xpos, pos.ypos);
    printf("%s %s %d \n", man.name, man.phoneNum, man.age);
    return 0;
}
