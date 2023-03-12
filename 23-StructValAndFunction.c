#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

void ShowPosition(Point pos)
{
    printf("[%d %d] \n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition(void)
{
    Point cen;
    printf("Input current pos: ");
    scanf("%d %d", &cen.xpos, &cen.ypos);
    return cen;
}

int main(void)
{
    Point curPos = GetCurrentPosition();    // 변수 cen의 멤버에 저장된 값은 변수 curPos의 멤버에 나란히 저장(복사)
    ShowPosition(curPos);   // 변수 curPos에 저장된 값은 9행의 매개변수 pos에 나란히 저장(복사)
    return 0;
}
