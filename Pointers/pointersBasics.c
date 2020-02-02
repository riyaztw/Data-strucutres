#include <stdio.h>
int main(int argc, char const *argv[])
{
    int normalVariable;

    printf("address of Variable(&)-%p\n\n", &normalVariable);

    normalVariable = 1;
    int *integerTypePointerVariable;
    integerTypePointerVariable = &normalVariable;
    printf("normalVariable-%d\n", normalVariable);
    printf("normalVariable address-%p\n", &normalVariable);
    printf("integerTypePointerVariable-%p\n", integerTypePointerVariable);
    printf("*integerTypePointerVariable-%d\n", *integerTypePointerVariable);
    printf("&integerTypePointerVariable-%p\n", &integerTypePointerVariable);
    return 0;
}
