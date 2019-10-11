#include <stdio.h>
#include <string.h>

int main()
{
    char str[200] = {0};
    char str2[9] = {0}; // 注意这里
    int n;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%s", str);
        char *p = str;
        while(*p)
        {
            for(int i=0; i<8; i++)
            {
                if(p[i])
                    str2[i] = p[i];
                else
                    str2[i] = '0';
            }
            printf("%s\n", str2);
            p += 8;
        }
        memset(str, 0, 81);
    }
    return 0;
}
