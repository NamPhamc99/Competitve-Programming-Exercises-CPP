#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <algorithm>
 
using namespace std;

int main(){

	int n;
    int Citizens[100];
    int maisRico = 0;
    int gasto = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) scanf("%d", &Citizens[i]);

    for (int i = 0; i < n; i++)
        if (maisRico < Citizens[i])
            maisRico = Citizens[i];

    for (int i = 0; i < n; i++){

        if(Citizens[i] < maisRico){
            gasto = gasto + (maisRico - Citizens[i]);
        }
        
    }

    printf("%d", gasto);

    return 0;	
}