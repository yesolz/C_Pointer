//
//  main.c
//  11-1-2
//
//  Created by 최예솔 on 2023/01/14.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    char arr[] = {'G','o','o','d',' ','t','i','m','e'};
    
    int i=0;
    for (i=0; i<sizeof(arr); i++){
        printf("%c", arr[i]);
    }
    printf("\n");
    return 0;
}
