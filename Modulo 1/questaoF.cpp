#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
 
using namespace std;

int main(){

	int n, x;
    int A[10], B[10];
    int exists = 0;

	scanf("%d", &n);
    scanf("%d", &x);

	for (int i = 0; i < n; i++) scanf("%d", &A[i]);
    for (int i = 0; i < n; i++) scanf("%d", &B[i]);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (A[i] + B[j] == x)
                exists = 1;
        }
    }

    printf("%d", exists);

    return 0;	
}