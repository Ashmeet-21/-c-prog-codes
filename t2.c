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
    int d;
    scanf("%d",&d);
    int idx = -1 ;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i]== d)
        {
            idx = i ;
        }

    }
   printf("The idx of array is : %d\n", idx);
    return 0 ;
}
