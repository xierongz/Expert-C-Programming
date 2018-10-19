#include <stdio.h>
int j;
int main()
{
    int i;
    printf("The stack top is near %p\n", &i);
    printf("The data top is near %p\n", &j);
    return 0;
}
