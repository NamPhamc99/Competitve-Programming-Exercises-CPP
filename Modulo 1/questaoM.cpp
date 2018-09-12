#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <string> 
#include <map>
#include <algorithm>
#include <functional>
 
using namespace std;

// N VELAS K divisoes
// U = N
// N = U/K

bool numeroBonito (int n){
    string str = to_string(n);

    for (int i = 0; i < str.size(); i++){
        for (int j = i + 1; j <= str.size(); j++){
            if (str[i] == str[j]) return false;
        }
    }

    return true;

}

int main(){

    int n;

    scanf("%d", &n);

    for (int i = n + 1; i < 9999; i++){
        if (numeroBonito(i)) {
            printf("%d", i);
            break;
        }
    }
    return 0;   
    
}