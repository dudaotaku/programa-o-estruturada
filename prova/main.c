#include <stdio.h>
#include <stdlib.h>
struct Tabela{
char letras[26];
int numero[26];

};
struct Nome{
int soma;
int resultado;
char primeiroNome[50];
int valores[50];

};
void tabela_final(struct Tabela *tabela){
    char letras[26];
int numero[26];

 strcpy(letras, "abcdefghijklmnopkrstuvwxz");

numero[0]=1;
numero[1]=2;
numero[2]=3;
numero[3]=4;
numero[4]=5;
numero[5]=6;
numero[6]=7;
numero[7]=8;
numero[8]=9;
numero[9]=1;
numero[10]=2;
numero[11]=3;
numero[12]=4;
numero[13]=5;
numero[14]=6;
numero[15]=7;
numero[16]=8;
numero[17]=9;
numero[18]=1;
numero[19]=2;
numero[20]=3;
numero[21]=4;
numero[22]=5;
numero[23]=6;
numero[24]=7;

}
void somar( struct Tabela *tabela, struct Nome *nome){
   int i,j,k;
   int tamanho=strlen(nome->primeiroNome);

   for(i=0;i<tamanho;i++){
    for(j=1;j<26;j++){
        if(nome->primeiroNome[i] == tabela->numero [j]){
            nome->valores[i] ==  tabela->numero[j];
        }
    }
   }
         for (k=0; k<nome->valores; i++){

         }
}
int main()
{
    struct Tabela tabela;
    struct Nome nome;
    strcpy (nome.primeiroNome, "maria");
    tabela_final(&tabela);
    somar(&tabela,&nome);

    printf("soma: %d", nome.soma);
    printf("resulatdo: %d", nome.resultado);
    printf("valores: %d", nome.valores);

    return 0;
}
