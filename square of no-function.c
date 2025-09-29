// square of any no.

#include <stdio.h>

void square(){
    int n;
       printf("Enter the value of n:");
       scanf("%d",&n);
       int square = n*n;
       printf("square of no. is %d\n ",square);
}
int main() {
       square();
    
    return 0;
}
