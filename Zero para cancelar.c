//Algoritmo Realizado em C, enunciado da questao a seguir:

/*Seu chefe est� ao telefone, nervoso. Ele quer que voc� compute a soma de uma sequ�ncia de n�meros que ele
*vai falar para voc�
*ao telefone, para saber o total das vendas em sua mais recente viagem de neg�cios.
*Infelizmente, de vez em quando seu chefe fala n�meros errados para voc� ao telefone.
*Felizmente, seu chefe rapidamente percebe que falou um n�mero errado e diz "zero", que como combinado previamente quer
*dizer ignore o �ltimo n�mero corrente.
*Infelizmente, seu chefe pode cometer erros repetidos, e diz "zero" para cada erro.
*Por exemplo, seu chefe pode falar ao telefone "Um, tr�s, cinco, quatro, zero, zero, sete, zero, zero, seis",
*o que significa uma soma total igual a 7.
*Entrada:
*A primeira linha da entrada cont�m um inteiro N, a quantidade de n�meros inteiros (incluindo os "zeros") que o
*seu chefe falou ao telefone. Cada uma das N linhas seguintes cont�m um n�mero inteiro Xi.
*Saida:
*Seu programa deve produzir uma �nica linha na sa�da, contendo um �nico inteiro, a soma correta dos n�meros,
*levando em conta que o valor 0 significa erro, conforme descrito.
*
*Link para questao e casos de teste: https://olimpiada.ic.unicamp.br/pratique/ps/2021/f1/zero/
*/



#include<stdio.h>

int main(){
 int i,quant_num,j,soma=0;
 scanf("%d",&quant_num);
 //Lemos aqui a quantidade de numeros que o usuario ira digitar e guardamos na variavel quant_num.
 int v[quant_num];
 //Entao criamos um vetor de tamanho quant_num.
 for(i=0;i<quant_num;i++){
//Colocamos um laco de repeticao para dar o numero de loops correspondente ao numero inteiro guardado em quant_num.
    scanf("%d",&v[i]);
    //Le-se o que o usuario digitou e entao guarda-se na posicao i do vetor v[quant_num].
    if(v[i]==0){
    /*Verificamos se o numero digitado pelo usuario � 0, se for zero rodamos o vetor ao contrario procurando
    *o primeiro numero diferente de 0 colocando o valor 0 caso haja essa situa��o, caso n�o, j� haver� zeros
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
    /*Como o problema nos pede uma soma de todos os valores n�o cancelados, foi-se feito um novo laco de repeticao
    *para que somasse os valores no contidos no vetor v[quant_num] apos os cancelamentos, e por isso podemos colocar
    *zero nas posi��es que o chefe nos mandou cancelar, pois representa o elemento neutro da soma
    */
    soma+=v[i];
    printf("%d ",v[i]);
    //Nao e nos pedido no enunciado, mas printamos o elemento do vetor ja formatado para visualizarmos seus atuais valores
 }
 printf("\n\nSoma: %d",soma);
 //Entao printamos a Soma
 return 0;
}
//Obrigado pela atencao
