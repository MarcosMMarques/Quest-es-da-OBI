//Algoritmo Realizado em C, enunciado da questao a seguir:

/*Seu chefe está ao telefone, nervoso. Ele quer que você compute a soma de uma sequência de números que ele
*vai falar para você
*ao telefone, para saber o total das vendas em sua mais recente viagem de negócios.
*Infelizmente, de vez em quando seu chefe fala números errados para você ao telefone.
*Felizmente, seu chefe rapidamente percebe que falou um número errado e diz "zero", que como combinado previamente quer
*dizer ignore o último número corrente.
*Infelizmente, seu chefe pode cometer erros repetidos, e diz "zero" para cada erro.
*Por exemplo, seu chefe pode falar ao telefone "Um, três, cinco, quatro, zero, zero, sete, zero, zero, seis",
*o que significa uma soma total igual a 7.
*Entrada:
*A primeira linha da entrada contém um inteiro N, a quantidade de números inteiros (incluindo os "zeros") que o
*seu chefe falou ao telefone. Cada uma das N linhas seguintes contém um número inteiro Xi.
*Saida:
*Seu programa deve produzir uma única linha na saída, contendo um único inteiro, a soma correta dos números,
*levando em conta que o valor 0 significa erro, conforme descrito.
*
*Link para questao e casos de teste: https://olimpiada.ic.unicamp.br/pratique/ps/2021/f1/zero/
*/



#include<stdio.h>

int main(){
 int i,quant_num,j,soma=0;
 scanf("%d",&quant_num);
 int v[quant_num];
 for(i=0;i<quant_num;i++){
    scanf("%d",&v[i]);
    if(v[i]==0){
    /*Verificamos se o numero digitado pelo usuario é 0, se for zero rodamos o vetor ao contrario procurando
    *o primeiro numero diferente de 0 colocando o valor 0 caso haja essa situação, caso não, já haverá zeros
    *em todas as casas anteriores nao sendo necessario o zero.
    */
        for(j=i;j>-1;j--){
            if(v[j]!=0){
                v[j]=0;
                break;
            }
        }
    }
 }
 for(i=0;i<quant_num;i++){
    /*Como o problema nos pede uma soma de todos os valores não cancelados, foi-se feito um novo laco de repeticao
    *para que somasse os valores no contidos no vetor v[quant_num] apos os cancelamentos, e por isso podemos colocar
    *zero nas posições que o chefe nos mandou cancelar, pois representa o elemento neutro da soma
    */
    soma+=v[i];
    printf("%d ",v[i]);
    //Nao e nos pedido no enunciado, mas printamos o elemento do vetor ja formatado para visualizarmos seus atuais valores
 }
 printf("\n\nSoma: %d",soma);
 return 0;
}
