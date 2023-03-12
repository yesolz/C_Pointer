//
//  main.c
//  21-2
//
//  Created by 최예솔 on 2023/02/08.
//

#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[]){
    int len=(int)strlen(str);
    str[len-1] = 0;
}

int main(int argc, const char * argv[]) {
    
    char str1[20];
    char str2[20];
    char str3[40];
    
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    
    RemoveBSN(str1);
    RemoveBSN(str2);
    
    strcpy(str3, str1);
    strcat(str3, str2);
    
    fputs(str3, stdout);
    
    
    return 0;
}
