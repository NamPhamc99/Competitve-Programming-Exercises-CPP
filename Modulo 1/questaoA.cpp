#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <map>
#include <stack>

using namespace std;

struct Car {
    int a, b;
    Car(int a, int b) : a(a), b(b) {}
};

int main() {
    stack<Car> carsParked;
    int n, k;
    int a, b;
    int time = 0;
    scanf("%d", &n); 
    scanf("%d", &k);
    bool x = true;
       
        
    for(int i = 0; i < n; i++) {
        
        scanf("%d", &a);
        scanf("%d", &b);

        time = 0;
        
        // remove cars from stack if exist
        // next car begining time must be bigger than
        // the last car exit time, means full capacity
        while(carsParked.size() > 0 && a >= carsParked.top().b) {
            // check if exit time is bigger or equal to current time
            x = x & carsParked.top().b >= time;
            // new time is now the other car exit time
            time = carsParked.top().b;
            // exit
            carsParked.pop();
        }
        
        // check if there are more cars parked than the limit
        x = x & carsParked.size() < k;

        // add new car
        carsParked.push(Car(a, b));
    }
    
    time = 0;
    // if stack still full check exit times
    while(carsParked.size() > 0) {

        x = x & carsParked.top().b >= time;
        time = carsParked.top().b;
        carsParked.pop();
    }
    
    if (x) printf("Sim");
    else printf("Nao");
}



