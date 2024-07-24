#include "algorithms.h"
#include <stdio.h>

int main(void) {
    // Example usage of the functions defined in your modules
    int array[] = {1, 2, 3, 4, 5};
    int target = 3;
    int idx = lsearch(target, array, 5);
    if (idx != -1) {
        printf("Element found at index %d\n", idx);
    } else {
        printf("Element not found\n");
    }
    return 0;
}
