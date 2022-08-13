//print the number 0 to n if n is given by the user by while loop
#include<stdio.h>
int main(){
int n;
printf("enter the value of n:");
scanf("%d",&n);
int i=0;
while(i<=n){
	printf("%d\n",i);
	i++;
}
return 0;
}


//print the number 0 to n if n is given by the user by for loop
#include<stdio.h>
int main(){
    int i;
int n;
printf("enter the value of n:");
scanf("%d",&n);
for (  i=0;i<=n;i++){
    printf("%d",i);
}
return 0;

}	
