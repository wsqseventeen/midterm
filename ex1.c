
#include <stdio.h>
int main()
{

    int anumber=0;
    int znumber=0;
    char c=0;
    int b=0;
    printf("please give a test less than 50:");
    while((c=getchar())!=EOF)
    {
        if(c=='0')
            ++znumber;
        else if(c=='A'||c=='a')
            ++anumber;
        else
            ++b;
        if(c=='\n')
            break;
    }
   
    printf("the number of a and A is:%d\n",anumber);
    printf("the number of 0 is:%d\n",znumber);
    return 0;
}
