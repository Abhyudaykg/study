#include<stdio.h>

int main() {

   char small[26] = "abcdefghijklmnopqrstuvwxyz";
   char big[26] = "ABCDEFGHIJLKMNOPQRSTUVWXYZ";
   char numeric[10] = "0123456789";

   int i;

   for(i=0; i<26; ++i)
   {
     printf("%d  ", small[i]);
   }

   printf("\n\n");

   for(i=0; i<26; ++i)
   {
     printf("%d  ", big[i]);
   }

   printf("\n\n");

   for(i=0; i<10; ++i)
   {
     printf("%d  ", numeric[i]);
   }

   printf("\n\n");

  return 0;
}
