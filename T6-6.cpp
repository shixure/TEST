#include <stdio.h>
main()
{
    int i, s;
    for (i = 2; i <= 1000; i++)
    {
        for (s = 2; s < i; s++)
            if (i % s == 0)
                break;
        if (i == s && (s + 1000) % 43 == 0)
        {
            printf("%d", s);
            break;
        }
    }
}