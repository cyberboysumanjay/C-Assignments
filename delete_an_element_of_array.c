#include<stdio.h>
void main()
{
int i,j, a[5]={2,4,6,7,9},pos,n=5;
printf("Enter the position of element you want to rm-rf");
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
