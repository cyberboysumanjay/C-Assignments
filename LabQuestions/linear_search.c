#include<stdio.h>
#include<conio.h>
void main ()
{
  int i ,j , a[5] ,search;
  printf("Enter the elements of the array");
    for (i=0;i<5;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("Enter the number you want to find in array");
  scanf("%d",&search);
    for (j=0;j<5;j++)
    {
        if (search==a[j])
        printf ("The number %d is at %d th position",search,j+1);
    }
}
