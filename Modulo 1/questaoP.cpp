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

    int n, a;
    scanf("%d", &n);
    scanf("%d", &a);

    if (n % 500 < a) 
        printf("Sim");
    else printf("Nao"); 

    
    return 0;
        
}