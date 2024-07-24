#include "lsearch.h"

int lsearch(int target, int arr[], int len) {
    int idx = -1;
    for (int i=0; i<len; i++) {
        if (arr[i] == target) {
            idx = i;
            break;
        }
    }
    return idx;
}
