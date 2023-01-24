    
    
#include <stdio.h>
struct tcs{
int a  :2 ;
int b  :3 ;
int c  :4 ;
int d  :5 ;

};

    int main()
    {

        struct tcs a;
        printf("%d",sizeof(a));

    return 0;
    }