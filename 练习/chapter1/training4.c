#include <stdio.h>

int main()
{
    const int limit = 10;
    const int *limitp = &limit;
    int i = 27;
    printf("limitp的值：%d\n",*limitp);
    limitp = &i;
    printf("limitp的值：%d\n",*limitp);
    return 0;
}
