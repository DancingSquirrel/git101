#include <stdio.h>

int main()
{
    char s[] ="kasetsart.university";
    int n,m,i ;

    for (n=0 ; s[n]; n++);
       m = n/2;
    for (i=0 ; i <= m; i++);
       s[n-i] = s[i-1];
    
    printf("%s",s);
}
