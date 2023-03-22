#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 1000; i++)
    {
        if (i % 2 == 1)
        {
            if (i % 3 == 1)
            {
                if (i % 4 == 1)
                {
                    if (i % 5 == 1)
                    {
                        if (i % 6 == 1)
                        {
                            if (i % 7 == 0)
                            {
                                // num = i;
                                printf("The number is %d\n\n", i);
                            }
                        }
                    }
                }
            }
        }
    }
    
}