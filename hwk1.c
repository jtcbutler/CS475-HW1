#include <stdio.h>

 int main(int argc, char *argv[]) {
   const int n = 10;
   int x;
   for (x = 0; x < n; x++) {
     printf("Hello world %d of %d!\n", x, n);
   }
   return 0;
 }