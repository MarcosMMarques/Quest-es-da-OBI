#include<stdio.h>

//Função para contar o número de caracteres
int strlen(char x[100]){
    int total=0;
        while(x[total]!='\0'){
            total++;
        }
    return total;
}
//Função para imprimir a quantidade de cartas faltantes ou se está completo
void imprimir(int copas,int espadas,int ouros,int paus){
  if(copas<13){
  printf("%d",13-copas);
  }else if(copas==13){
  printf("0");
  }
   if(espadas<13){
  printf("\n%d",13-espadas);
  }else if(espadas==13){
  printf("\n0");
  }
   if(ouros<13){
  printf("\n%d",13-ouros);
  }else if(ouros==13){
  printf("\n0");
  }
   if(paus<13){
  printf("\n%d",13-paus);
  }else if(paus==13){
  printf("\n0");
  }
}

int main(){
  char string[100]; //string para entrada de caracteres
  int total,copas=0,ouros=0,espadas=0,paus=0; //contagem de cartas
  int vc[13],vc1[13],ve[13],ve1[13]; //vetor para armazenar e comparar cartas igualitárias
  int j=0;
  scanf("%s",string);
  total=strlen(string);
  //Conta o total de cada carta
  if(total>=3 && total<=156){
  for(int i=-1;i<total;i+=3){
        if(string[i]=='C' || string[i]=='c'){
        copas++;
    }
    if(string[i]=='E' || string[i]=='e'){
        espadas++;
    }
    if(string[i]=='U' || string[i]=='u'){
        ouros++;
    }
    if(string[i]=='P' || string[i]=='p'){
        paus++;
    }
  }
  //Separação das casas das unidades
  for(int i=-1;i<total;i+=3){
        if(string[i]=='C' || string[i]=='c'){
        vc[j]=(int)string[i-1];
        j++;
      }
    }
    //Separação das casas das dezenas
  j=0;
  for(int i=-1;i<total;i+=3){
        if(string[i]=='C' || string[i]=='c'){
            vc1[j]=(int)string[i-2];
            j++;
        }
  }
  for(int i=0;i<j;i++){
    for(int x=i+1;x<14;x++){
    if(vc1[i]==48){
      if(vc[i]==vc[x] && vc[i]==48){
        printf("Erro\n\n\n\n");
      }
    }else if(vc1[i]==49){
      if(vc[i]==vc[x] && vc[i]==49){
         printf("Erro\n\n\n\n");
         }
      }
    }
  }
imprimir(copas,espadas,ouros,paus);
  }else{
    printf("\nCadeia de caracteres grande demais");
  }
return 0;
}
