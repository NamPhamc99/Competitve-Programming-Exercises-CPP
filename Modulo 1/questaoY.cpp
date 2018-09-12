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

int main(){

    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b) return 0;
    if (a < 0) return 0;
    if (b > 1000) return 0;

    int max = -1;
    int num = 0;
    int sum = 0;
    int sumHoles = 0;
    int maxSumHoles = 0;

    // range [ a, b ]
    for (int i = a; i <= b; i++){

        // current number
        num = i;

        // if 0 only 1 digit
        if (num == 0) {
            sumHoles = sumHoles + 1;
            if (sumHoles > maxSumHoles) {
                max = i;
                maxSumHoles = sumHoles;
            }

            sumHoles = 0;
            continue;
        }

        // get number digits
        while (num > 0){

            sum = num % 10;

            if (sum == 0 || sum == 4 || sum == 6 || sum == 9)
                sumHoles++;
            if (sum == 8) 
                sumHoles = sumHoles + 2;

            num /= 10;
        }

        if (sumHoles > maxSumHoles) {
            max = i;
            maxSumHoles = sumHoles;
        }

        sumHoles = 0;

    }

    if (max != -1)
        printf("%d", max);

    return 0;
        
}