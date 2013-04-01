#pragma once
#include <iostream>
#include "BubbleSort.h"
using namespace std;

void bubbleSort(int data[], int n) {
    
    int j = 0;
    bool nextEnd = true;
    
    while (nextEnd) {
        
        nextEnd = false;
        j++;
        
        for (int i = 0; i < n - j; i++) {
            
            if (data[i] > data[i + 1]) {
                
                int temp = data[i + 1];
                data[i + 1] = data[i];
                data[i] = temp;
                nextEnd = true;
            }
        }
    }
    
    for (int i = 0; i < 10; i++)
        
    cout << data[i] << ", ";
    cout << endl;

}