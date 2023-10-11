#include <stdio.h>
#include <math.h>

char cinput[] = "\x1B[94m";
char cok[] = "\x1B[92m";
char cinfo[] = "\x1B[90m";
char cclear[] = "\033[0m";

bool palind(int n){
   if (n == 0){
      return true;
   }
   else if (n < 0 || n%10 == 0){
      return false;
   }
   int number = n;
   int rebmun = 0;
   while (n > 0)
   {
      rebmun = rebmun * 10 + n%10;
      n = n/10;
   }
   if (number == rebmun){
      return true;
   }
   
   return false;
};

int main() {
   
   int n;
   printf("\n%s", cinput);
   printf("1 int | n >> ");
   printf("%s", cclear);
   scanf("%i", &n);

   printf("%s", cinfo);\
   int s = 0, k = 0;
   for (int i = 0; k < n; i++){
      if(palind(i)){
         s = s + i;
         k++;
      }
   }
   printf("%s", cok);
   printf("\nSum: %i\t | Total: %i", s, k);
   printf("\nSqrt: %f\t", sqrt(s));
   printf("%s", cclear);
   printf("\n\n\n");
}