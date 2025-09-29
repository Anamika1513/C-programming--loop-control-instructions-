
   //wap to print ulta no.triangle
   #include <stdio.h>
   int main(){
   
   int n;
   printf("enter the value of n:");
   scanf("%d",&n);
   int a=n+1;
   for (int i=1;i<=n;i++){
        for(int j=1;j<=a-i;j++){
           printf("%d",j);
           }
           printf("\n");
           }
           a--;
  
   return 0;
   
   }
   
   
   
