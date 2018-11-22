/* Simple FizzBuzz in C */

#include <stdio.h>

int main(void)
{
    int i;
    for (i=1; i<101; ++i){
        if ((i % 3 != 0) && (i%5 != 0))
            printf("%d \n", i);
        if(i % 15 == 0)
            printf("%d FizzBuzz!\n", i);
        if (i % 5 == 0)
            printf("%d Buzzzz\n", i);
        if (i % 3 == 0)
            printf("%d Fizzzz\n", i);   
    }

    return 0;
}
