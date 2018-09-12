#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <deque>
 
using namespace std;

int calcular_erro (int a[], int b[], int n, int err[]){
	int erro = 0;

	for (int i = 0; i < n; i++){
		err[i] = (a[i]*a[i] - 2*a[i]*b[i] + b[i]*b[i]);
		erro = erro + err[i];
	}

	return erro;

}

int main(){

    int n, k1, k2;
    scanf("%d", &n);
    scanf("%d", &k1);
    scanf("%d", &k2);

 	int A[1000], B[1000], err[1000];

    for (int i = 0; i < n; i++) scanf("%d", &A[i]);
    for (int i = 0; i < n; i++) scanf("%d", &B[i]);

    int erro = calcular_erro(A, B, n, err);
	
	//printf("%d\n", erro);
	int maxErro = 0;
	int j = 0;

	// correcting a
	while (k1 > 0) {

		maxErro = 0;
		j = 0;
		for (int i = 0; i < n; i++){
			if (err[i] > maxErro) {
				maxErro = err[i];
				j = i;
			}
		}
		
		if (A[j] - B[j] == 0 ){
			A[j] = A[j] - 1;
			k1--;
		}
		else if (A[j] - B[j] > 0) {
			A[j] = A[j] - 1;
			k1--;
		}
		else if (A[j] - B[j] < 0) {
			A[j] = A[j] + 1;
			k1--;
		}

		err[j] = (A[j]*A[j] - 2*A[j]*B[j] + B[j]*B[j]);
		
	}

	while (k2 > 0) {

		maxErro = 0;
		j = 0;
		for (int i = 0; i < n; i++){
			if (err[i] > maxErro) {
				maxErro = err[i];
				j = i;
			}
		}

		if (A[j] - B[j] == 0){
			B[j] = B[j] - 1;
			k2--;
		}
		else if (A[j] - B[j] > 0) {
			B[j] = B[j] + 1;
			k2--;
		} else if (A[j] - B[j] < 0) {
			B[j] = B[j] - 1;
			k2--;
		}

		err[j] = (A[j]*A[j] - 2*A[j]*B[j] + B[j]*B[j]);
	}

	erro = calcular_erro(A, B, n, err);

	printf("%d", erro);

    return 0;

}