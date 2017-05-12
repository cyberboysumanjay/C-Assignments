#include<stdio.h>
void main()
{
int i,j, a[5],pos,n=5,c;
printf("Enter 5 elements of array\n");
{
  for (c=0;c<5;c++)
  scanf("%d",&a[c]);
}
printf("Enter the position of element you want to rm-rf \n");
scanf ("%d",&pos);
  for (i=pos-1;i<n-1;i++)
  {
     a[i]=a[i+1];
  }
  for (j=0;j<4;j++)
  {
  printf("%d",a[j]);
  }
}
