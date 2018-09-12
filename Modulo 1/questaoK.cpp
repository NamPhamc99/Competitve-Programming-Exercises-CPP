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

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
/* The main function that implements QuickSort 
 arr[] --> Array to be sorted, 
  low  --> Starting index, 
  high  --> Ending index */
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        int pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

int main(){
 
    int n, q;
    int vec[100000];
    int consultas[100000];

    scanf("%d", &n);
    scanf("%d", &q);

    for (int i = 0; i < n; i++) scanf("%d", &vec[i]);
    quickSort(vec, 0, n);
    //for (int i = 1; i <= n; i++) printf("%d", vec[i]);

    for (int i = 0; i < q; i++) scanf("%d", &consultas[i]);
    bool existe;
    int consulta = 0;

    for (int i = 0; i < q; i++){

        existe = false;
        consulta = consultas[i];

        for (int j = 1; j <= n; j++) {
            if (vec[j] >= consulta){
                printf("%d\n", vec[j]);
                existe = true;
                break;
            }
        }

        if (existe == false) {
            printf("-1\n");
        }

    }
}
