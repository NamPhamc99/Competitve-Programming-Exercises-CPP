#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
 
using namespace std;


int fib(int n) {
    if (n == 0) return 0;
    int previous = 0;
    int current = 1;
    for (int i = 1; i < n; i++) {
        int next = previous + current;
        previous = current;
        current = next;
    }
    return current;
}

int main(){

	int n = 0;
	int result = 0;

	scanf("%d", &n);

	result = fib(n);

	printf("%d", result);

    return 0;	
}