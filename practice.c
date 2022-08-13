// print the table for a number n in reverse order.
#include<stdio.h>
int main(){
    int n;
printf("enter the number you want");
scanf("%d",&n);
for( int i=10;i>=1;i--){
    printf("%d\n",n*i);
}
return 0;
}

//calculate the sum of all numbers between 5 and 50 including 5 and 50
#include<stdio.h>
int main(){
  int sum=0;
  for( int i=5;i<=50;i++){
      sum=sum+i;
  }
  printf("the total sum of 5 to 50 is %d",sum);
  return 0;
}
