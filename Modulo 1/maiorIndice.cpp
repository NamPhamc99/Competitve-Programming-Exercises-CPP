#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
 
using namespace std;

int main(){

	int n, indice;
    int v[10];

	scanf("%d", &n);
    scanf("%d", &indice);

	for (int i = 0; i < n; i++) scanf("%d", &v[i]);

    int maiorIndice = -1;
    int novoMaiorIndice = -1;
 
    for (int i = 0; i < n; i++){

        if(v[i] >= indice){
            novoMaiorIndice = i;
            if (novoMaiorIndice > maiorIndice)
                maiorIndice = novoMaiorIndice;
        }

    }

    if (maiorIndice == -1) {
        printf("%d", maiorIndice);
    }
	else printf("%d", maiorIndice+1);

    return 0;	
}