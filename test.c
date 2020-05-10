#include <stdio.h>
#include <string.h>
//#define ze

int main(void)
{
#if 0 
    printf("hello world!\n");
#ifdef ze
    printf("test\n");
#endif
#endif
    char str[5000];
    int i = 0, len, count = 0;
    fgets(str, 5000, stdin);
    
    printf("%s\n", str);
    len = strlen(str) - 1;
    
    printf("char size: %d\n", len);
    while(str[len] != ' ')
    {
        printf("%c\n", str[len]);
        len--;
        count++;
        if(len == 0)
        {
            count = len;
            break;
        }
    }
    count--;
    printf("%d\n", count);
    return 0;
}
