#include<stdio.h>

int main()
{
  int c ;
  char v ;

  do
  {
  printf("Enter the choice 1 for factorial and 2 for divisor");
  scanf("%d",&c);
  if(c==1)
  {
    int n;
	printf("Enter the number to find its Factorial : ");
	scanf("%d",&n);

	int i,factorial=1;
	for(i=1;i<=n;i++)
        {
		factorial*=i;
	    }
	printf("%d\n",factorial );
	printf("Is the Factorial ");
   }
   else if(c==2)
   {
   int i,n;
	printf("\nEnter the number to find its Divisors: ");
	scanf("%d",&n);
   	for(i=1;i<=n;i++)
    {
       		if(n%i==0)
        {
		   printf("\n");
		   printf("%i",i);
		   printf("\n");
   		}
   	}
   	printf("\nAre it's divisors\n");
   }

   else
    {
   	printf("\n");
   	printf("Enter a valid option");
   }

printf("\nDo you want to continue(y/n)");
scanf("%s",&v);

}while(v=='y'||v=='Y');

return 0;
}
