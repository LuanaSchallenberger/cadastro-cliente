#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main(){

setlocale(LC_ALL,"Portuguese");
  
int op=0,i,j,tam=1,aux=0;

struct clientes{
  char nome[50];
  int idade;
  char sexo;
  
}cliente[tam];
 
for(i=0;i<tam;i++){
  cliente[i].idade=0;}
  
for(i=0;i<tam;i++)
  cliente[i].sexo='0';
for(i=0;i<tam;i++)
strcpy(cliente[i].nome,"00");

do{
printf("digite 1 se quiser cadastrar o cliente\ndigite 2 se quiser ver os clientes cadastrados\ndigite 3 se quiser sair do programa\n");
while(op!=3&&op!=2&&op!=1)
  scanf("%d",&op);


setbuf(stdin,NULL);
 switch(op){
   case 2:{
  for(i=0;i<tam;i++){
  printf("nomes:%s\n",cliente[i].nome);
  printf("idades:%d\n",cliente[i].idade);
  printf("gener:%c\n",cliente[i].sexo);}
   
     
  break;}
  case 1:{
    printf("digite o nome do cliente\n");
      scanf("%50[^\n]",cliente[aux].nome);
    printf("digite a idade:\n");
    scanf("%d",&cliente[aux].idade);
    printf("digite o sexo:\n");
    scanf(" %c",&cliente[aux].sexo);

aux++;
    if(aux>1)
      tam++;
  
   break;}
   
 }
if(op!=3){
op=0;}
 
}while(op!=3); 
  
}

