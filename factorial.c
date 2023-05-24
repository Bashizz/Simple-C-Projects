#include <stdio.h>
//Factorial

main(){

    int n,cont,n_inic;
    char MUL='x';

    printf("Insira um numero: ");
    scanf("%d",&n);
    n_inic = n;
    cont = n;

    if(n>=0){
        do{
            n=n-1;
            cont = cont * n;
        }while(n!=1);

    }
    else printf("Numero tem de ser maior ou igual a 0");

    for(int i=0; i<n_inic ; i++){
        printf("%d",n_inic-i);

        if(n_inic-i!=1){
            printf(" %c ",MUL);
        }else printf(" = %d",cont);
    }

return 0;

}
