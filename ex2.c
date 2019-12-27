
#include<stdio.h>
int main (void)
{
    unsigned long long int a,b,c,d;
    a=0;
    c=0;

    b=~a;
    d=1;

    for(d=1;d!=0;d=d<<1)
    {
        c++;
    }

    printf("unsigned long long int is size of %llu bit.\n",c);
    printf("the max is %llu.\nthe min is %llu.\n",b,a);
   
    return 0;

}
