#include <iostream>
#include <vector>
#include <stdio.h>
 
using namespace std;

int main(){

	int i, n, d, size;


	scanf("%d", &n);
	vector<int> v(n);

	i = 0;
	size = 0;

	for (int i = 0; i < n; i++) scanf("%d", &v[i]);



	// Create a vector containing integers
 	vector<int> exists(10);
 	for (i = 0; i < 10; i++){
 		exists[i] = -1;
 	}

 	for(i = 0; i < n; i++){
 		if (exists[v[i]] == -1){
 			exists[v[i]] = i;
 			size++;
 		}

 		else {
 			v[exists[v[i]]] = -1;
 			exists[v[i]] = -1;
 		}
 	}

 	printf("%d\n", size);
    for(i = 0; i < n; i++) {

    	if (v[i] != -1)
        	printf("%d ", v[i]);
    }
 

    return 0;	
}