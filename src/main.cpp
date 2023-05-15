// Copyright 2022 NNTU-CS
#include "alg.h"
#include "iostream"
using namespace std;
int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5};
    int count = cbinsearch(arr, 15, 3); // count = 3
    return 0;
}
