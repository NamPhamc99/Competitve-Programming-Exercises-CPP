#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <deque>
 
using namespace std;

int main(){

    int n = 0;
    scanf("%d", &n);

    if (n == 0) return 0;

    deque<int> pilha;

    for (;;){

        // criando deque
        for (int i = 1; i <= n; i++) pilha.push_back(i);

        // enquanto houver cartas para descartar
        while (pilha.size() > 1) {
            // se o tamanho da pilha for maior que 2 ainda podemos realizar a açao
            // imprime o descarte
            if (pilha.size() != 2) printf("%d ", pilha.front());
            // caso contrario, última carta imprime e pula linha
            else printf("%d\n", pilha.front());
            // remove o primeiro elemento
            pilha.pop_front();
            // insere o novo topo no final
            pilha.push_back(pilha.front());
            // remove o topo
            pilha.pop_front();
        }

        // so restou um elemento
        printf("%d", pilha.front());
        break;
    }

    return 0;	
}