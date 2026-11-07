#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);
    if (input < 0 || input >= 10)
    {
        printf("OK");
    }
    if (0 <= input && input < 10)
    {
        printf("NG");
    }
    return 0;
}
