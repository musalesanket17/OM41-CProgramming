#include<stdio.h> 
int main(int argc, char *argv[])
{

    //.\a.exe one two 
    //printf("%u ",argv[0]); 
    //printf("%u ",argv[1]);
    //printf("%u ",argv[2]); 

    //printf("%u ",*(argv + 0 ) + 0  );
    //printf("%u ",*(argv + 0 ) + 1  );
    //printf("%u ",*(argv + 0 ) + 2  );

    // printf("%c ",*(*(argv + 0 ) + 0 ) ); 
    // printf("%c ",*(*(argv + 0 ) + 1 ) );
    // printf("%c ",*(*(argv + 0 ) + 2 ) );
    // printf("%c ",*(*(argv + 0 ) + 3 ) );
    // printf("%c ",*(*(argv + 0 ) + 4 ) );     

      printf("%c ",argv[0][0]); // .   
    return 0;
}
