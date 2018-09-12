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

bool is_perfect_square(int n) {
    if (n < 0)
        return false;
    int root(round(sqrt(n)));
    return n == root * root;
}


int main(){

    string str;
    getline(cin, str);

    string::iterator end_pos = remove(str.begin(), str.end(), ' ');
    str.erase(end_pos, str.end());

    int i = stoi (str);

    if (is_perfect_square(i)) 
        printf("Sim");
        else printf("Nao");


    return 0;
        
}