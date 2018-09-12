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

    int n, a, b;

    // Lê o tamanho do vetor
    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &b);

    int out = 0;
    int num = 0;
    int sum = 0;

    for (int i = 0; i <= n; i++){

        num = i;
        sum = 0;

        while (num > 0){
            sum += num % 10;
            num /= 10;
        }

        if (sum >= a && sum <= b){
        
            out = out + i;
        }
    }
    
    printf("%d", out);

    return 0;
        
}