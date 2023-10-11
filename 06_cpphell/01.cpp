#include <stdio.h>
char cinput[] = "\x1B[94m";
char cok[] = "\x1B[92m";
char cinfo[] = "\x1B[90m";
char cclear[] = "\033[0m";

bool palind(int n, int k){
   if (n == 0)
   {
      printf("Num:%i\t | Count:%i\n", n, k);
      return true;
   }
   else if (n < 0 || n%10 == 0)
   {
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
      printf("Num:%i\t | Count:%i\n", number, k);
      return true;
   }
   
   return false;
};

int main() {
   
   int a, b;
   printf("\n%s", cinput);
   printf("2 int+ | a, b >> ");
   printf("%s", cclear);
   scanf("%i, %i", &a, &b);

   printf("%s", cinfo);
   int k = 0, s = 0;
   for (int i = a; i < b; i++){
      if(palind(i, k + 1)){
         s = s + i;
         k++;
      }
   }
   printf("%s", cok);
   printf("\nSum:%i\t | Total:%i", s, k);
   printf("%s", cclear);
   printf("\n\n\n");
}