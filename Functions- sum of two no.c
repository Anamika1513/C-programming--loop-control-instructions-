 //sum of two numbers 
    
    #include<stdio.h>
    
   int add (int x,int y){
   return x+y ;
   }
   
   int main(){
   int a,b;
   printf("Enter the value of a:");
   scanf("%d",&a);
   printf("Enter the value of b:");
   scanf("%d",&b);
   
   int sum=add(a,b);
   printf("%d",sum);
   return 0;
   }
