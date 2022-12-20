#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char ch;
    //A file pointer ( stream pointer ) is pointer to structure of type FILE
    //file pointer points to this strucuture (identfies the file )

    if ((fptr = fopen("sunbeam.txt", "r")) == NULL)
    {
        printf("Error");
        exit(1);
    }

    while ((ch = fgetc(fptr)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fptr);

    return 0;
}
