#include "../../Algorithms/lib/include/lsearch.h"
#include <iostream>

int main() {
    
    int arr[4] = {1, 2, 3, 4};
    int target = 3; 
    int result = akvachan::lsearch(target, arr, 4);
    
    std::cout << result << std::endl; 

    return 0;

}
