#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s,str[100],lin[100];
    scanf("%c", &s);
    scanf("%s", &str);
    scanf(" %[^\n]%*c", lin);

    printf("%c\n" , s);
    printf("%s\n",str);
    printf("%s\n",lin);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}