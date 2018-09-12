#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <deque>
 
using namespace std;

int main(){

    int n, t, c;
    scanf("%d", &n);
    scanf("%d", &t);
    scanf("%d", &c);
    int vec[200000];

    for (int i = 0; i < n; i++) scanf("%d", &vec[i]);

    int ways = 0;
    int start = 0;
    
    while ( n-c >= start ) {
        for (int i = start; i <= start+(c-1); i++){
            if (vec[i] > t) break;
            else if (i == start+c-1) ways++;
        }

        start++;
    }


    printf("%d", ways);

    return 0;	
}




