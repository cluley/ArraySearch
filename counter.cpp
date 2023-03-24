#include "counter.h"

int counter(int* arr, int size, const int& pnt) {
    int left = 0;
    int right = size - 1;
    int mid = 0;
    int cntr = 0;

    while (left < right) {
        mid = (left + right) / 2;
        if (arr[left] > pnt) {
            cntr = -1;
            break;
        }
        else if (arr[mid] == pnt) {
            left = mid + 1;
            if (arr[left] > pnt) {
                cntr = left - 1;
                break;
            }
        }
        else if (arr[mid] > pnt) {
            right = mid - 1;
        }
        else if (arr[mid] < pnt) {
            left = mid + 1;
        }

        if (left == right) {
            cntr = left;
        }
    }

    cntr = size - (cntr + 1);

    return cntr;
}