#include <stdio.h>

void test_branch()
{
    printf("I will make new branch\n");
}

void test_branch2()
{
    printf("I will mke second branch\n");
}

void test_revert(){
    return 0;
}

void test_stash2()
{
    printf("test stash 2\n");
}

int main()
{
    test_branch();
    
    return 0;
}
