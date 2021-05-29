#include<stdio.h>
int main()
{
    int i ,n ;
    printf("Enter the number");
    scanf("%d",&i);
    printf("Enter the number for which  u need table");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d\n",i*n);
        i++;
    }



    return 0 ;
}
