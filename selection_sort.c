#include<stdio.h>
void main()
{
int a[100],i,j,k,l,n,position,temp;
printf("Enter the number of elements in array\n");
scanf("%d",&n);
printf("Enter the elements of array\n");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for (j=0;j<n-1;j++)
{
position=j;
    for(k=j+1;k<n;k++)
    {
      if (a[position]>a[k])
      position=k;
      if (position!=j)
    {
      temp=a[j];
      a[j]=a[position];
      a[position]=temp;
    }
    }
}
printf("Elements in ascending order: \n");
for (l=0;l<n;l++)
printf("%d\n",a[l]);
}
