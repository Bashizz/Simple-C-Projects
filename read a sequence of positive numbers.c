/*read a sequence of positive numbers from the keyboard and print the sum of them.
The program should exit when the number read is 0.
be processed because it serves to mark the end of the data entry.*/

#include <stdio.h>
int main() {

    int sequence , cont=0;

    do{
        printf("Enter the number: ");
        scanf("%d", &sequence);

            if(sequence <0){
                printf("Only positive numbers!\n");
            }
            else
            cont += sequence ;
    }
    while(sequence  != 0);

    printf("Final Sequence: %d",cont);

    return 0;
}
