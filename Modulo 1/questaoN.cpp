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

    int n;
    scanf("%d", &n);

    string str;
    vector<string> ordemDeEntrada;
    vector<string> ordemAlfabetica;
    map<string, int> ordem;

    int i = 0;
    while(getline(cin, str)){
        ordemDeEntrada.push_back(str);
        ordemAlfabetica.push_back(str);
        i++;
        if (i > n) break;
    }

    sort(ordemAlfabetica.begin(), ordemAlfabetica.end());

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if ((ordemDeEntrada[i].compare(ordemAlfabetica[j]) == 0))
                printf("%d ", j - 1);
        }
    }


    
    return 0;
        
}