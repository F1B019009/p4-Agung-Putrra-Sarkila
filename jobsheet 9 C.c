#include <stdio.h>
int main()
{
int i;
char nama[9]={'A','G','U','N','G'};
char nama2[8]= "AGUNG";
printf("Array per Karakter = ");
for(i=0;i<=4;i++)
{
printf("%c",nama[i]);
}
printf("\n"); printf("Array string =%s\n\n",nama2);
return 0;
}
