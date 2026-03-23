#include <stdio.h>

int main(){
    char st1[] = { 's', 'u', 'b', 'h', '\0'};
    char st2[] = "subh";
    for (int i = 0; i < 4; i++)
    {
        printf("%c", st1[i] );
    }
    printf("\n");
    printf("%s ", st2);    
    return 0;
}