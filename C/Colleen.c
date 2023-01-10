/*
    First comment
*/
#include <stdio.h>

void Colleen(const char *s)
{
    printf(s, s, 10, 9, 34);
}

int main(void)
{
    /*
        Second comment
    */
   const char *s = "/*%2$c%3$cFirst comment%2$c*/%2$c#include <stdio.h>%2$c%2$cvoid Colleen(const char *s)%2$c{%2$c%3$cprintf(s, s, 10, 9, 34);%2$c}%2$c%2$cint main(void)%2$c{%2$c%3$c/*%2$c%3$c%3$cSecond comment%2$c%3$c*/%2$c%3$cconst char *s = %4$c%1$s%4$c;%2$c%3$cColleen(s);%2$c%3$creturn 0;%2$c}%2$c";
   Colleen(s);
   return 0;
}