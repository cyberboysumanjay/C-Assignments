#include<stdio.h>
void main()
{
int n,i,j,k,temp,a[100];
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the elements of array\n");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for (i=0;i<n-1;i++)
{
    for (j=0;j<n-i-1;j++)
    {
        if (a[j]>a[j+1])
        {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        }
    }
}
printf("The Sorted list is as follows:\n");
  for(k=0;k<n;k++)
  {
  printf("%d\n",a[k]);
  }
}
