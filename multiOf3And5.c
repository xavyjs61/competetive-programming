
//program to calculate the sum of multiples of 3's and 5's less than 1000


#include<stdio.h>


int main(void){
int limit,i,sum=0;
printf("Please enter the limit:\t");
scanf("%d",&limit);
printf("\n");
for(i=1;i<=limit;i++)
{
if ((!(i%3)||!(i%5)))
{
	printf("%d\t",i);
	sum+=i;
}


}
printf("\nSum=%d",sum);
}

