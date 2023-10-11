#include <stdio.h>
#include <math.h>

char cinput[] = "\x1B[94m";
char cok[] = "\x1B[92m";
char cinfo[] = "\x1B[90m";
char cclear[] = "\033[0m";

int main() {
   
   float h;
   int n;
   printf("\n%s", cinput);
   printf("[0, 1] float | h >> ");
   printf("%s", cclear);
   scanf("%f", &h);
   printf("\n%s", cinput);
   printf("int+ | n >> ");
   printf("%s", cclear);
   scanf("%i", &n);

   printf("%s", cinfo);
   int s = 0;
   for (float i = 0; i <= 1; i++){
   }


   printf("%s", cok);
   printf("\nSum: %i\t | Total: %i", s, k);
   printf("\nSqrt: %f\t", sqrt(s));
   printf("%s", cclear);
   printf("\n\n\n");
}