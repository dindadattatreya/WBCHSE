#include <stdio.h>
void fun (int i)
{
++i;
}
int main ()
{ int i=5;
fun (i);
printf ("\n i=%d",i);
return 0;
}
