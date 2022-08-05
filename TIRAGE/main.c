#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,fact,nb;
    printf("Select a number:\n");
    scanf("%d",&nb);
    if(nb<0)
    printf("The factorial is impossible:\n");
    else{
    fact=1;
    for(i=1;i<=nb;i++){
    fact=fact*i;
    printf("The factorial is:%d\n",fact);
    }
    }
    return 0;
}

