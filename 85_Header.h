#ifndef PROGRAM_HEADER_H
#define PROGRAM_HEADER_H

#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int>& arr);
void selectionSort(vector<int>& arr);
void insertionSort(vector<int>& arr);
void mergeSort(vector<int>& arr);
void printArray(const vector<int>& arr);
void performSort(vector<int>& arr, int choice);

#endif 