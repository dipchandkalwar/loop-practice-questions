//print the sum of n natural numbers
#include<stdio.h>
int main(){
	int n;
	int sum=0;
	printf("enter then number");
	scanf("%d",&n);
	for( int i=1;i<=n;i++){
		sum=sum+i;//sum+=i
		
	}
	printf("the total sum is %d",sum);
	for(int i=n; i>=1; i--){
		printf("the value is %d \n",i);
	}
	return 0;
}

// print the table  input by the user
	#include<stdio.h>
int main(){
	int n;

	printf("enter then number");
	scanf("%d",&n);
	for ( int i=1;i<=10;i++){
	   
	    printf("the value is %d \n",n*i);
	}
	return 0;
}*/
//enter the number until the user enter the odd number
#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter the number\n");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%2!=0){
            break;
        }
        
    }while (1); //every time the condition is true
    printf("stop");
    return 0;
}*/

/*keep taking a number until the user give the multiple of 7

#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter the number:");
        printf("\n");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%7==0){
            break;
        }
        
    }while (1);
    printf("stop");
    return 0;
}
*/
//print all the number from 1 to 10 except 6
#include<stdio.h>
int main(){
	for(int i=1;i<=10;i++){
		if(i==6){
			continue;//it means skip so 6 is skip in this program
		
		}
		printf("%d\n",i);
	}
		return 0;
	}
	
	
		
	//print the odd numbers from 5 to 50	
		
		#include<stdio.h>
int main(){
	for( int i=5;i<=50;i++){
	    if(i%2==0){
	        continue;
	    }
	    printf("%d\n",i);
	}
	return 0;
}



// to find the factorail of n numbers
#include<stdio.h>
int main(){
int fact=1;
int n;
printf("enter the value of which ypu need a factotrial");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    fact=fact*i;
}
printf("the factorial is %d ",fact);
return 0;
}
