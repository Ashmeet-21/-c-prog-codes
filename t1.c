#include<stdio.h>
int main()
{

   int n ;
   printf("Enter the total number ");
   scanf("%d",&n);
   int arr[n];
   printf("Enter the values");
   for(int i = 0 ; i < n ; i++)
   {
       scanf("%d",&arr[i]);
   }

   int max = arr[0];
   int min = arr[0];
   for(int i = 0 ; i < n ; i++)
   {
       if(arr[i]>max)
       {
           max = arr[i];

       }
       if(arr[i]<min)
       {
           min = arr[i];
       }

   }
   printf("The span of array is : %d\n", max - min);
    return 0 ;
}
