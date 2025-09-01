#include <stdio.h>

int main(){
    int a = 1;
    int b = 1;
    int c = 5;
    a && b || c++;
    printf("%d", c);
}