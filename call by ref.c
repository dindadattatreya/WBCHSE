#include <stdio.h>
void fun (int *p)
{
(*p)++;
}

int main()
{int i=5;
fun (&i);
printf ("\n i=%d",i);
return 0;
}
