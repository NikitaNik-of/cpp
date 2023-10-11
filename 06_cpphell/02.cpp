#include <stdio.h>
char cinput[] = "\x1B[94m";
char cok[] = "\x1B[92m";
char cinfo[] = "\x1B[90m";
char cclear[] = "\033[0m";

bool palind(int n){
   if (n == 0)
   {
      //printf("Num:%i\t", n);
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
      //printf("Num:%i\t", number);
      return true;
   }
   
   return false;
};

bool numodd(int n){
    if (n == 0) return true;
    else if (n < 0) n = -n;
    while (n > 0){
        int t = n % 10;
        if (t % 2 == 0) return false;
        n = n / 10;
    }
    return true;
}

int main() {
   
   int a;
   printf("\n%s", cinput);
   printf("int | n >> ");
   printf("%s", cclear);
   scanf("%i", &a);

   printf("%s", cinfo);
   int kp = 0, kn = 0;
   while (kp < a){
        int num;
        printf("\n%s", cinput);
        printf("int 1 >> ");
        printf("%s", cclear);
        scanf("%i", &num);
        if(palind(num)) kp++;
        else kp = 0;
        if (numodd(num)) kn++;
   }
   printf("%s", cok);
   printf("Total polindr:%i\n", kp);
   printf("Total odd:%i", kn);
   printf("%s", cclear);
   printf("\n\n\n");
}