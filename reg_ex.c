#include <stdio.h>
#include <stdbool.h>

bool isMatch(char * s, char * p);
bool zeroOrMore(char * a, char * b);


bool zeroOrMore(char * a, char * b)
{
    char * iter = a;
    if(*b == '.')
    {
        for( ; *iter != '\0' ; iter++)
            if(isMatch(iter, b+2))
                return true;
    }
    else
    {
        for( ; *iter == *b ; iter++)
            if(isMatch(iter, b+2))
                return true;
    }
    return isMatch(iter, b+2);
}




bool match( char *a, char *b)
{
    if(*(b+1) == '*')
        return zeroOrMore(a,b);
    if(*b == '.' || *b == *a)
    {
        if(*a == '\0') return false;
        return isMatch(a+1, b+1);
    }
    else
        return false;
}



bool isMatch(char * s, char * p){
    char *a, *b;
    a = s;
    b = p;
    if(*b == '\0')
    {
        if(*a == '\0')
            return true;
        else
            return false;
    }
    else
    {
        return match(a, b);
    }
}








int main()
{
    char s[] = "aabcbcbcaccbcaabc";
    char p[] = ".*a*aa*.*b*.c*.*a*";
    bool result = isMatch(s, p);
    printf("\n\tThe func output is : ");
    if(result)
        printf("TRUE\n\n");
    else
        printf("FALSE\n\n");
    return 0;
}