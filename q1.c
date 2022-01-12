#include "stdio.h"

/**
 * @brief What does this code print?
 * 
 * @return int 
 */
void  main(void) {

    int val = 0;
    int sum = 0;

    for (int i=0; i<10; i++) {
        val += 2;
        sum += val;
    }
    printf("Sum = %d\n",sum);
}