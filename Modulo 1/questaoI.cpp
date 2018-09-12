#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>

 
using namespace std;

int main(){

    int n, m;

    scanf("%d", &n);
    scanf("%d", &m);

    int matrix[10][10];

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            matrix[i][j] = -1;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    int inicioAltura = 0;
    bool primeiro = false;
    int fimAltura = 0;

    // encontre a altura
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (matrix[i][j] == 1 && primeiro == false){
                inicioAltura = i;
                primeiro = true;
            } 
            if (matrix[i][j] == 1 && i > fimAltura){
                fimAltura = i;
            }
        }
    }


    int altura = (fimAltura - inicioAltura) + 1;

    int inicioLado = 100000;
    int fimLado = 0;


    // encontre o lado
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (matrix[i][j] == 1 && j < inicioLado){
                inicioLado = j;
            } 
            if (matrix[i][j] == 1 && j > fimLado){
                fimLado = j;
            }
        }
    }

    int lado = (fimLado - inicioLado) + 1;

    if (lado == -99999) {
        lado = 0;
        altura = 0;
    }

    printf("%dx%d", lado, altura);

    return 0;   
    

}