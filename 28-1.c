#include<stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
   char Name[20];
   char Title[30];
   int Pages;
} Book;


int main()
{
    Book arr[3];
    printf("도서 정보 입력\n");
    int i;
    for(i=0; i<3;i++){
        printf("저자: ");
        fgets(arr[i].Name, sizeof(arr[i].Name), stdin);
        printf("제목: ");
        fgets(arr[i].Title, sizeof(arr[i].Title), stdin);
        printf("페이지 수: ");
        scanf("%d", &arr[i].Pages);
        getchar();
        printf("\n");
    }

    printf("도서 정보 출력\n");
    for(i=0; i<3; i++){
        printf("book %d \n", i+1);
        printf("저자: %s \n", arr[i].Name);
        printf("제목: %s \n", arr[i].Title);
        printf("페이지 수: %d \n", arr[i].Pages);
    }
    printf("\n");
    return 0;
}
