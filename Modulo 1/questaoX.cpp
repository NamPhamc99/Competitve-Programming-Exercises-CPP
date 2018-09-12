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
    int vec[200];

    // Lê o tamanho do vetor
    scanf("%d", &n);

    for (int i = 0; i < n; i++) scanf("%d", &vec[i]);

    int vezes = 0;
    bool todosPares = true;

    while(todosPares == true){
        for (int i = 0; i < n; i++){
            if (vec[i] % 2 == 0){
                vec[i] = vec[i]/2;
            }
            else {
                todosPares = false;
                break;
            }
        }
        if (todosPares == true)
            vezes = vezes + 1;
    }

   
    
    printf("%d", vezes);

    return 0;
        
}