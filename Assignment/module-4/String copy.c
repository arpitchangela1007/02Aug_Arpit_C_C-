#include <stdio.h>
int main() 
{
    char s1[20],s2[20], i;
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);

    for (i = 0; s1[i] != '\0'; ++i) 
	{
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2: %s", s2);
}

