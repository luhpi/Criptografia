#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    char frase[100], inv[100], cpy[100];
    int cnt, spc, cnt2, k;
    printf("Insira a frase a ser codificada: ");
    gets(frase);
    for (cnt=0; cnt<100; cnt++){
      while(frase[cnt]!=" "){
        inv[cnt]=frase[cnt];}
      if(frase[cnt]==" "){
        k=strlen(inv);
        for (cnt2=0; cnt2<(strlen(inv) - 1); cnt2++){
         inv[k] = inv[cnt2];
         k--;
         strcpy(inv, " ");}
         for (cnt2=cnt-1; cnt2>(cnt-(strlen(inv)- 1)); cnt2--){
         frase[cnt2]=inv[cnt2];}
      }
    }
}
