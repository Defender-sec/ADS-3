// Copyright 2021 NNTU-CS
#include "iostream"
using namespace std;

int cbinsearch(int *arr, int size, int value) {
    int kolv = 0;
    int i;
    for (i = 0; i < 15; i++) {
        if (arr[i] == value) {
            kolv++;
        }
    }
    if (kolv > 0) {
        return kolv;
    }
    else {
        return 0;
    }
}
