// basic programm of function 

#include <stdio.h>

void England(){
    printf("You are from England\n");
    return;
}
void Australia(){
    printf("you are from Australia\n");
    England();   // calling England
    return;
}
void India(){
    printf("you are from India\n");
    Australia();  //caalling Australia
    return;
}
int main() {
        // function call
    India();
    
    return 0;
}
