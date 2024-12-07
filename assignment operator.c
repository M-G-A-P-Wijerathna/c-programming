#include <stdio.h>
int main ()
{
   /*apa wisin nirmanaya karana object ekakata value ekk assign kara ganimata
     a=b
     a+=b  a+b=a
     a-=b   a-b=a
     a*=b   a*b=a
     a/=b   a/b=a
     a%=b   a%b=a*/

     int x = 0;
     printf("value x = %d",x);

     x+=10 ;
     printf("\nvalue of x = %d",x);

     printf("\nvalue of x = %d  ", x-=5);

     printf("\nvalue of x = %d ",x*=3);

     printf("\nvalue of x = %d",x/=5);

     printf("\nvalue of x = %d",x%=2);






    return 0;
}
