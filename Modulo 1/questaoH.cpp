#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>

 
using namespace std;

int main(){
 
    int n, k;

    scanf("%d", &n);
    scanf("%d", &k);

    int usadas = 0;
    int horas = 0;

    while (n > 0){

        if (n - k >= 0) {
            usadas = k;
            n = (n - k) + 1;
        } 
        else if (n - k < 0 && n > 0) {
            usadas = n;
            n = 0;
        }

        horas = horas + usadas;
        
    }

    printf("%d", horas);

}
