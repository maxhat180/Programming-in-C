#include <stdio.h>

int main(void)
{
    int myAge = 43;
    int test = 27;

    printf("%p\n", (void *)&myAge);
    printf("%d\n", test);
    printf("%p\n", (void *)&test);

    return 0;
}
