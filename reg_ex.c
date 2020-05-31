#include <stdio.h>
#include <stdbool.h>

bool isMatch(char * s, char * p);

bool match( char *a, char *b)
{
    switch(*b)
    {
        case '.':
            if(*a == '\0')
            {
                if(*(b+1) == '*')
                    return isMatch(a, b+2);
                else
                    return false;
            }
            else
            {
                if(*(b+1) == '\0')
                {
                    if(*(a+1) == '\0')
                        return true;
                    else
                        return false;
                }
                else
                {
                    if(*(b+1) == '*')
                        return isMatch(a, b+1);
                    else
                        return isMatch(a+1, b+1);
                } // end-of if(*(b+1) == '\0')
                
            } // end-of if(*a == '\0')
        break;
        case '*':
            if(isMatch(a,b+1) == true)
                return true;
            else
            {
                if( (*(b-1) != '.') && ( *a != *(b-1) ) )
                    return false;
                if(*(b+1) == '\0')
                    return true;
                return isMatch(a+1, b+1);
            }
        break;
        default:
            if(*a == '\0')
            {
                if(isMatch(a, b+1))
                {
                    if(*(b+1) == '*')
                        return true;
                    else
                        return false;
                }
                else
                    return false;
            }
            else
            {
                if(*a == *b)
                    return isMatch(a+1, b+1);
                else
                {
                    if(isMatch(a, b+1))
                    {
                        if(*(b+1) == '*')
                            return true;
                        else
                            return false;
                    }
                    else
                        return false;
                }   //end-of if(*a == *b)
                
            }   // end-of if(*a == '\0')
            
    }   //end-of switch
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
    char s[] = "ab";
    char p[] = ".*";
    bool result = isMatch(s, p);
    printf("\n\tThe func output is : ");
    if(result)
        printf("TRUE\n\n");
    else
        printf("FALSE\n\n");
    return 0;
}