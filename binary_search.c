#include <stdio.h>
int main()
{
   int c, f, l, m, n, search, a[100];

   printf("Enter number of elements\n");
   scanf("%d",&n);
//Here elements will be entered
   printf("Enter %d integers\n", n);

   for (c = 0; c < n; c++)
      scanf("%d",&a[c]);

   printf("Enter value to search\n");
   scanf("%d", &search);

   f = 0;
   l = n - 1;
   m = (f+l)/2;

   while (f <= l)
   {
      if (a[m] < search)
      f= m+1;
    else if (a[m] == search)
          {
           printf("%d found at %d th postion.\n", search, m+1);
           break;
           }
    else
    l = m - 1;
    m = (f+l)/2;
  }
      if (f > l)
      printf("No Such number present  in the list.\n");
return 0;
}
