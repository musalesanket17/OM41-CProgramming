#include <stdio.h>

int main()
{
  /*
    char i = 50;
    switch (i)
    {
    case '2':
        printf("SunBeam Karad");
        break;
    case '1':
        printf("SunBeam Market Yard");
        break;
    default:
        printf("SunBeam IT Park Hinjewadi");
    }
*/
    int i = 1;
    for (; i < 1024; i >>= 1)
        printf("\n SunBeam IT Park %d" , i); // Infinite
        //  << print 10 times;

            return 0;
}