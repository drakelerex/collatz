#include <stdio.h>

int main(void){
    int n = 0;
    printf("Enter a number to use in the Collatz Conjecture: ");
    scanf("%i", &n);
    while(n!=1){
        if(n%2 == 0){
         n=n / 2;
         printf("%i\n", n);
     } else{
          n = n*3 + 1;
          printf("%i\n", n);
      }

    }
}