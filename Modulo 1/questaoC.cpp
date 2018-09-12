#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
 
using namespace std;

int main(){

	int n, x;
	int sumA = 0;
	int sumB = 0;
	int sumC = 0;
    int A[100000], B[100000], C[100000];

	scanf("%d", &n);
 

	for (int i = 0; i < n; i++) scanf("%d", &A[i]);
    for (int i = 0; i < n-1; i++) scanf("%d", &B[i]);
    for (int i = 0; i < n-2; i++) scanf ("%d", &C[i]);

    for (int i = 0; i < n; i++) sumA = sumA + A[i];
    for (int i = 0; i < n-1; i++) sumB = sumB + B[i];
    for (int i = 0; i < n-2; i++) sumC = sumC + C[i];

    printf("%d\n", sumA-sumB);
    printf("%d", sumB-sumC);

    return 0;	
}