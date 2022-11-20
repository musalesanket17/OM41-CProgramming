#include <stdio.h>

int main()
{
    /*
       int i = 1;
       for (; i < 1024; i <<= 1)
           printf("\n SunBeam IT Park %d", i);


        SunBeam IT Park 1
        SunBeam IT Park 2
        SunBeam IT Park 4
        SunBeam IT Park 8
        SunBeam IT Park 16
        SunBeam IT Park 32
        SunBeam IT Park 64
        SunBeam IT Park 128
        SunBeam IT Park 256
        SunBeam IT Park 512


       int value = 0;
       for (; value < 7;)
       {
           if (value < 7)
           {
               printf("Sun");
               ++value;
           }
           else
               continue;
           printf("Beam");
       }

    int d;
     if(scanf("%d" , d))
     printf("True");
     else
     printf("False");
     */

    for(int i=1;i<=5;i++){

        if(i==3)
        continue;
        printf("%d" , i);
    }
    return 0;
}