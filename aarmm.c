#include <stdio.h>

int main(void) {

int rem,total=0,num,temp;
scanf("%d",&num);


temp=num;
while(temp!=0)
{
	rem=num%10;
	total=total+rem*rem*rem;
	num=num/10;
}
	if(temp==total)
	{
		printf("yes");
		
	}
	else
	{
		printf("no");
	}

	return 0;
}
