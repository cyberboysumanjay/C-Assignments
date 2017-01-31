#include<stdio.h>
void quicksort (int [],int,int);
int partition (int [],int,int);
int main ()
{
int a[100],n,i;
printf("Enter the number of elements in array:\n");
scanf("%d",&n);
printf("Enter the elements of the array:\n");
  for (i=0;i<n;i++)
  {
    scanf("%d",&a[n]);
  }

quicksort(a,0,n-1);
printf("Array after quick sorting is :\n");
for (i=0;i<n;i++)
printf("%d\n",a[i]);

return 0;
}
void quicksort (int a[], int left, int right)
{
int j;
  if (left<right)
  {
  j=partition(a,left,right);
  quicksort(a,left,j-1);
  quicksort(a,j+1,right);
  }
}
int partition (int a[],int left,int right)
{
int x,i,j,temp;
x=a[left];
i=left;
j=right+1;

  do
  {
      do
      i++;
  while (a[i]<x&&i<=right);
    do
     j--;


  while (x<a[j]);
  if (i<j)
  {
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
  }
  }
  while(i<j);
  a[left]=a[j];
  a[j]=x;
  return (j);
  }
