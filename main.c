/*
PROJECT: INTERACTIVE CALCULATOR
AUTHOR: JAMES MUSILI
DATE: 10-29-2021
COMPILER: GNU GCC
LANGUAGE: C99
LICENSE: MIT

*/

#include <stdio.h>
int main(){
    int result,add,mult,sub,divide;
     result = 0;
     printf("%d\n",result);
    printf("add ");
    scanf("%d",&add);
     result = result-2;
     printf("%d\n",result);

    printf("mult ");
    scanf("%d",&mult);
     result = (result*(-11));
     printf("%d\n",result);

     printf("sub ");
    scanf("%d",&sub);
    result = result-1;
    printf("%d\n",result);

    printf("divide ");
    scanf("%d",&divide);
    result = result/3;
    printf("%d\n",result);

    return 0;
}
