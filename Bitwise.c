#include <stdio.h>

int main()
{
    int x = 7;
    int y = 4;
    int z = x & y;
    int k = x | y;
    int l = x ^ y;
    int m = x >> 1;
    int n = y << 2;
    printf(" Z = %d \n",z);
    printf(" k = %d \n",k);
    printf(" l = %d \n",l);
    printf(" m = %d \n",m);
    printf(" n = %d \n",n);
    return 0;
}
