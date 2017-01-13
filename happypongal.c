#include<stdio.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

main()
{
    char ch[12]="HAPPY PONGAL";
    int i=0;
    while(i<strlen(ch))
    {
        Sleep(1000);
        printf("%c",ch[i]);
        i++;
    }
}
