
#include <stdio.h>

void ShowAllString(int argc, char * argv[]){
    int i;
    for(i=0; i<argc; i++)
        printf("%s \n", argv[i]);
}

int main(int argc, const char * argv[]) {
    
    char * str[3]={
        "C Programming",
        "C++ Programming",
        "JAVA Programming"
    };
    ShowAllString(3, str);
    
    return 0;
}
