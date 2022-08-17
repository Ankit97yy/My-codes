#include <stdio.h>
#include <string.h>

int main()
{
    char comment[100];
    printf("enter a sring\n");
    scanf("%s", comment);
    if (comment[0] == '/')
    {
        if (comment[1] == '/')
        {
            printf("its a comment");
        }

        else if (comment[1] == '*')
        {
           if(comment[strlen(comment)-1]=='/' && comment[strlen(comment)-2]=='*')
           printf("comm");
           else printf("not comm");
        }
        else
            printf("not comm");
    }
    else
        printf("not comm");
}