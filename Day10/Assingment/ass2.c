/*
2.  Write a function to implement four function calculator. Function
would take operands and operator as arguments and returns
result.
int calculate(int num1, int num2, char op)
*/
#include <stdio.h>

int calculator(int n1, int n2);

int main()
{

    int res, n2, n1;
    printf("Enter 2 NO For Opration : ");
    scanf("%d%d", &n1, &n2);
    res = calculator(n1, n2);
    printf("Your Ans is = %d", res);

    return 0;
}

int calculator(int n1, int n2)
{
    int op_no, res;
    enum opration
    {
        Add = 1,
        Sub,
        Mul,
        Div
    };

    do
    {
        printf("print Opartion No: which one you Like To perform on this No : \n");
        printf("Addition -1 , Substaction-2 , Multiplication -3 , division -4 : ");
        scanf("%d", &op_no);

        switch (op_no)
        {
        case Add:
            res = n1 + n2;
            return res;
            goto StartAgin;
            break;

        case Sub:
            res = n1 - n2;
            return res;
            goto StartAgin;
            break;

        case Mul:
            res = n1 * n2;
            return res;
            goto StartAgin;
            break;

        case Div:
            res = n1 / n2;
            return res;
            goto StartAgin;
            break;

        default:
            printf("Invalid Opration ");
            break;
        }

      StartAgin :
        printf("If You want to Exit Then press 0 OR For Countinue Press 1 : \n");
        printf("After Conforming Your option Your Ans Is Visible :   ");
        scanf("%d", &op_no);

    } while (op_no != 0);
}
