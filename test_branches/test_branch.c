#include <stdio.h>

void test_branch()
{
    printf("I will make new branch\n");
}

void modi_any()
{
    int a = 1;

    printf("%d\n", a);
}

// 이건 fetch를 위한 거야

int main()
{
    test_branch();

    return 0;
}