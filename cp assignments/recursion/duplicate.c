#include <stdio.h>
#include <string.h>
char* removeUtil(char* str, char* last_removed)
{
 if (str[0] == '\0' || str[1] == '\0')   
        return str;
 if (str[0] == str[1]) {
        *last_removed = str[0];
        while (str[1] && str[0] == str[1])
            str++;
        str++;
        return removeUtil(str, last_removed);
    }
    char* rem_str = removeUtil(str + 1, last_removed);
if (rem_str[0] && rem_str[0] == str[0]) {
        *last_removed = str[0];
 
        
        return (rem_str + 1);
    }
 if (rem_str[0] == '\0' && *last_removed == str[0])
        return rem_str;
        rem_str--;
    rem_str[0] = str[0];
    return rem_str;
}
 
//function to remove
char* removes(char* str)
{
    char last_removed = '\0';
    return removeUtil(str, &last_removed);
}
 

int main()
{
char str1[] = "acaaabbbacdddd";
printf("%s\n", removes(str1));
 
    return 0;
}
 

 
