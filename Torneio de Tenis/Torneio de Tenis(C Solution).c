//Algoritmo Realizado em C, enunciado da questao a seguir:

/*A prefeitura contratou um novo professor para ensinar as crian�as do bairro a jogar t�nis na quadra de t�nis do parque municipal.
*O professor convidou todas as crian�as do bairro interessadas em aprender a jogar t�nis. Ao final do primeiro m�s de aulas e treinamentos
*foi organizado um torneio em que cada participante disputou exatamente seis jogos. O professor vai usar o desempenho no torneio para
*separar as crian�as em tr�s grupos, de forma a ter grupos de treino em que os participantes tenham habilidades mais ou menos iguais, usando o seguinte crit�rio:
*    participantes que venceram 5 ou 6 jogos ser�o colocados no Grupo 1;
*    participantes que venceram 3 ou 4 jogos ser�o colocados no Grupo 2;
*    participantes que venceram 1 ou 2 jogos ser�o colocados no Grupo 3;
*    participantes que n�o venceram nenhum jogo n�o ser�o convidados a continuar com os treinamentos.
*Dada uma lista com o resultado dos jogos de um participante, escreva um programa para determinar em qual grupo ele ser� colocado.
*
*Entrada:
*A entrada consiste de seis linhas, cada linha indicando o resultado de um jogo do participante. Cada linha cont�m um �nico caractere: V
*se o participante venceu o jogo, ou P se o jogador perdeu o jogo. N�o h� empates nos jogos.
*
*Saida:
*Seu programa deve produzir uma �nica linha na sa�da, contendo um �nico inteiro, identificando o grupo em que o participante ser� colocado.
*Se o participante n�o for colocado em nenhum dos tr�s grupos seu programa deve imprimir o valor -1.
*
*
*Link para questao e casos de teste: https://olimpiada.ic.unicamp.br/pratique/ps/2021/f1/torneio/
*/

#include<stdio.h>

int main(){
  //Declaracao da variavel de indice a ser utilizada no for e a variavel para fazer a contagem de vitorias
  int i,contagem_vitorias=0;
  char jogos; /*A variavel jogos ira armazenar o caracter de entrada do usuario,
  *para ser comparado com o caracter V mais a frente
  */
  for(i=0;i<6;i++){
    scanf("%c",&jogos);
    if(jogos=='V' || jogos=='v'){
      contagem_vitorias++;//A cada v digitado pelo usuario, sera adicionado +1 na variavel contagem_vitorias
    }
    fflush(stdin);//Para limpar o campo de entrada do usuario, nao contando como um caracter
  }
  if(contagem_vitorias>4){
    printf("3");
  }else if(contagem_vitorias>2){
    printf("2");
  }else if(contagem_vitorias>0){
    printf("1");
  }else{
    printf("-1");
  }
  return 0; //O programa retorna zero na funcao main comunicando que a execucao foi concluida
}
