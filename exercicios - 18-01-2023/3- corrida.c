/*Corrida: Escrever um programa para boleira verificar se o estoque dos ingredientes disponíveis na despensa é suficiente para
atender o pedido de um determinado bolo. Para tanto, deve ser informado
- A quantidade pedida deste bolo;
- Quantos ingredientes são utilizados para a produção deste bolo;
- A quantidade necessária dos ingredientes para a produção de um bolo;
- A quantidade destes ingredientes disponível na despensa.
Considere que a quantidade pedida é em unidades (inteiro) e quantidade de ingredientes é em Kg (float)
Fazer um laço para verificar se tem a quantidade suficiente de cada ingrediente para a produção do pedido.
• Se tiver, retornar a mensagem “Ingrediente n: Quantidade atende e vai sobrar Xn” onde n indica a ordem em que os dados do
ingrediente foram informados e Xn é a quantidade que vai restar do ingrediente n na despensa após a produção do pedido.
• Se não tiver, retornar a mensagem “Ingrediente n: Precisa comprar Xn, onde n indica a ordem em que os dados do ingrediente
foram informados e Xn é a quantidade que falta deste ingrediente para a produção do pedido. */

#include<stdio.h>

int main(){
  int qtdBolos, qtdIngredientes, qtdNecessaria;
  float qtdQuilos, qtdEstoque;

  printf("Quantos bolos a boleira fara?");
  scanf("%d",&qtdBolos);
  printf("Quantos ingredientes serao utilizados para a realizacao do bolo?");
  scanf("%d",&qtdIngredientes);
  

}