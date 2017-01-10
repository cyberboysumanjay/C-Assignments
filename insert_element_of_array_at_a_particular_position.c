#include<stdio.h>
void main ()
{
    int a[10],i,j,k,n,pos,number;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the values of elements of array\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position where you want to insert number\n");
    scanf("%d",&pos);

    printf("Enter the number you want to insert\n");
    scanf("%d",&number);
    for (j=1;j<=pos;j++)
    {
        a[n]=a[n-j];
        a[pos-1]=number;
    }
    for (k=0;k<n;k++)
    {
        printf("%d",a[k]);
    }
}


