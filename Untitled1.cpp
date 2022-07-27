#include <stdio.h>
#include <stdlib.h>

int main() {
   int n , i, *p, s = 0;
   scanf("%d",&n);
   p = (int*) malloc(n * sizeof(int));
   printf("\nEnter elements of array : ");

   for(i = 0; i < n; i++) {
      scanf("%d", p + i);
      s += *(p + i);
   }
   printf("\nSum : %d", s);
   free(p);
   return 0;
}
