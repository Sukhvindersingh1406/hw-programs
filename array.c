#include<stdio.h>
void main()
{
    int n ;
    printf( " enter the size of array");
    scanf(" %d", &n);
     int a[n],i,sum=0, sum1=0;
     printf(" enter the array element");
     for( i=0;i<n;i++)
     {
         scanf ( " %d",&a[n] );
         if (a[i]%2==0)
         sum=sum + a[i];
         else 
         sum= sum1 +a[i];
     }
     printf(" sum of the even array element  are : %d", sum);
     printf(" sum of the odd array element are : %d", sum1);
     
    
}