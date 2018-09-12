#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
 
using namespace std;

int main(){

	int i = 0;
	int n = 0;
	int v[10];
	int difference = 0;
	int newDif = 0;

	scanf("%d", &n);

	if (n < 2 || n > 10) printf("error");

	for (i = 0; i < n; i++) scanf("%d", &v[i]);

	for (i = 0; i < n-1; i++){
		
		newDif = abs(v[i] - v[i+1]);

		if (newDif > difference) 
			difference = newDif;
	}

	printf("%d", difference);

    return 0;	
}