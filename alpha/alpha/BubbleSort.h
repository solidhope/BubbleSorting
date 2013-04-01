#pragma once
#ifndef alpha_BubbleSort_h
#define alpha_BubbleSort_h

#include <iostream>
using namespace std;

void bubbleSort(int data[], int n);

int main()
{
    
    cout << "Enter ten unsorted integers \n" << endl;
    
    int a[10];
    for (int i = 0; i < 10; ++i) {
        
        cout << "[" << i << "] = ";
        cin >> a[i];
    }
    
    cout << endl;
    cout << "Sorted List = ";
    bubbleSort(a, 10);
}

#endif
