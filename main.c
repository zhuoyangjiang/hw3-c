// Author: zhuoyangjiang zfj5038@psu.edu
// Collaborator:
// Collaborator:
// Collaborator:
// Section: 007R
// Breakout: 

#include "stdio.h"
#include "stdlib.h"
#include <readline/readline.h>
#include <readline/history.h>

int digit_sum(int n)
{
    if(n<=0)
    {
        return 0;
    }

    return (n%10) + digit_sum(n/10);
}

int main()
{
    int n=0;
    char *str;
    str = readline("Enter an int: ");
    n = atoi(str);
    printf("sum of digits of %s is %d.\n", str , digit_sum(n));
    free(str);

    return 0;
}