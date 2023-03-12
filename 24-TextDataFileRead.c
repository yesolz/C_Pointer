#include <stdio.h>

int main(void)
{
    char str[30];
    int ch;
    FILE * fp = fopen("simple.txt", "rt");
    if(fp==NULL){
        puts("파일오픈 실패!");
        return -1;
    }
    
}
