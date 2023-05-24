#include <stdio.h>
//escreva 123 e tem de sair 321
main(){

int numero[3];

    for(int i=0 ; i<3 ; i++){
        printf("Insira o %d numero ",i+1);
        scanf("%d",&numero[i]);
    }
    for(int i=2 ; i>=0 ; i--){
        printf("%d",numero[i]);

    }
    return 0;
}

