#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
 
using namespace std;

// N VELAS K divisoes
// U = N
// N = U/K


int main(){

    int n;

    // Lê o tamanho do vetor
    scanf("%d", &n);

    // Aloca espaço pro vetor
    int vec[100];
    int vitorias[100];

    for (int i = 0; i < 100; i++) vitorias[i] = 0;

    // Lê os elementos do vetor
    for (int i = 0; i < n; i++) scanf("%d", &vec[i]);
   	int brea_k = 0;

    for (int i = 0; i < n; i++){
    	for (int j = i + 1; j < n; j++){
    		if (vec[i] > vec[j]) {
    			vitorias[i] = vitorias[i] + 1;
    			if (j + 1 == n) {
    				brea_k = 1;
    				break;
    			}
    		}

    		else {
    			vitorias[j] = vitorias[j] + 1;
    			i = j;
    		}
    	}
    	if (brea_k == 1) break;
    }
    
    for (int i = 0; i < n; i++) printf("%d ", vitorias[i]);

    return 0;
        
}