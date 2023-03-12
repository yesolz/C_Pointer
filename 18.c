//
//  main.c
//  chap18
//
//  Created by 최예솔 on 2023/02/07.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[3][2] = { {1,2}, {3,4}, {5,6}};
    printf("%d %d \n", arr[1][0], arr[0][1]);
    printf("%d %d \n", **arr, *(*(arr+0)+0));
    return 0;
}
