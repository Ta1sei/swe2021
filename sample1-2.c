#include <stdio.h>

int main(void){
    int i = 10;
    float j = 10.5;
    char k = 'a';
    i = i / 3; //変数iの中身をiを100倍したもので上書き
    j = j / 5;
    k += 1;
    printf("i = %d \n", i);
    printf("j = %f \n", j);
    printf("k = %c \n", k);
}