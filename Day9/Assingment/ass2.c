#include <stdio.h>

int main()
{

    enum opration
    {
        ADD = 1,
        SUB,
        MUL,
        DIV
    } ;
  enum opration choice;
    int res, n1, n2;

do{
    printf("Enter Opration code Addition =1 , substarction =2, multiplcation =3 ,division =4 : ");
    scanf("%d", &choice);

    printf("Enter 2 NO for opration ");

    scanf("%d%d",&n1,&n2);

    switch (choice)
    {
    case ADD:
        res = n1 + n2;
        printf("%d\n" , res);
        break;

    case SUB:
        res = n1 - n2;
        printf("%d\n" , res);
        break;

    case MUL:
        res = n1 * n2;
        printf("%d\n" , res);
        break;

    case DIV:
        res = n1 / n2;
        printf("%d\n" , res);
        break;

    default:
      printf("Invalid Opration Code");
        break;
    }

    printf("\nIF You want to exit then press '0' Or if want to continue the press '1' : ");
    scanf("%d",&choice );
}while(choice!=0);
    return 0;
}