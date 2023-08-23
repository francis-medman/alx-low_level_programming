#include <stdio.h>

int main(void)
{
    int a[5] = {98, 198, 298, 398, 498};
    int *p;

    p = a + 2;
    *(p + 1) = 98;
    printf("a[2] = %d\n", *(p + 1));
    return (0);
}
