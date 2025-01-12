// Trial code in function 
   
   #include <stdio.h>
   void england(){
   printf("you are in england\n");
   return ;
   }
   
   void Australia (){
   printf("you are in Australia\n");
   england();
   return;
   }
   
   void India(){
   printf("you are in India\n");
   Australia();
   return;
   }
   
   int main(){
   India();
   return 0;
   }
