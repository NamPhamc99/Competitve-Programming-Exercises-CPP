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

    string S, P, Out;
    getline(cin, S);
    getline(cin, P);
    int x;

    char positions[26];
    char c = 'a';

    for (int i = 0; i < 26; i++){
    	positions[i] = c;
    	c = c + 1;
    }

    for(int i = 0; i < S.size(); i++){
    	for (int j = 0; j < 26; j++){
    		if (positions[j] == S.at(i)){
    			Out = Out + P.at(j);
    		}
    	}
    }

    cout << Out;
    
    return 0;
        
}