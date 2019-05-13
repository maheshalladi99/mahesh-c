#include<stdio.h>
void main()
{
	int balls,i=0,sum=0,j;
	long long int a[1000];
	clrscr();
	printf("please enter no. of balls: \n");
	scanf("%d",&balls);
	printf("please give your ball by ball score :");
	for(i =0 ; i < balls; i++)
	{
	     scanf("%d",&a[i]);

	}
	printf("\n");
	for(i=0; i < balls; i++)
	{
		//sum = sum +a[i];
		if(a[i]==-1)
		 {
			sum++;
		       //	j=i;
			//break;
		 }
		 else
		 {
		       //	sum=sum+a[i];
		       //	continue;
		      // sum++;
		 }
	}
	printf("%d",sum);
	getch();
}