
1. What will be the output?
#include<stdio.h>
union test
{
short int num;
char ch[2];
};
int main()
{
    union test ut;
    ut.num = 325;
    char *ch = ut.ch ;
    printf("%d \t %c\n", ch[0],(char)ut.num);
    return 0;
}
2. What will be the Output?
#include <stdio.h>
int main()
{
	struct
    {
        struct
        {
            int m;
            char *s;
        }marks;
        char *name;
    }s[3] = {{65,"","Tom"},{75,"","Jerry"},{55,"","Alsa"}};

    printf("Specify Subject name");

    scanf("%s",s[0].marks.s);	//assume subject name English as input

    printf("%d %s %s",s[0].marks.m,s[0].marks.s,s[0].name);

}
3. What is the output of this C code?
#include <stdio.h>
struct p
{
 int k;
 char c;
 float f;
};
int main()
{
 struct p x = {.c = 166, .f = 3, .k = 1};
 printf("%f\n", x.f);
}
4. What will be the Output?
#include <stdio.h>
struct point
{
	int x;
	int y;
};
void print(struct point*);
int main()
{
	struct point p1[] = {1, 2, 3, 4};
	print(p1);
}
void print(struct point p[])
{
	printf("%d %d %d %d\n", p->x, ++p->x,p->y,++p->y);
}
5. What will be the output?
#include<stdio.h>
union
{
	int i;
	char c;
	char arr[4];
}u;

int main(void)
{
	u.c = 'D';
	u.i = 0x0041;
	u.arr[1] = u.arr[2] = 'E';
	printf("%d %c",sizeof(u),u.c);

	return 0;
}
6. What will be the Output?
#include<stdio.h>

int main()
{
    typedef struct
    {
        int id;
        float price;
    }DEMO;
    DEMO d[3]={11,56.00,22,45.00,33,78.00};
    fun(d+1);
}
void fun(DEMO *d)
{
    printf("%d %.2f",d->id,d->price)
}
7. #include <stdio.h>
int main()
{
    union values
    {
        unsigned char a;
        unsigned char b;
        unsigned int  c;
    };
 
    union values val;
    val.a=0;
    val.b=0;
    val.c=1;
 
    printf("%d,%d,%d",val.a,val.b,val.c);
    return 0;
}
8. What will be the output of following program ?
#include <stdio.h>
struct sample
{
    int a=1;
    char b='S';
    float c=11.5;
};
int main()
{
    struct sample s;
    printf("%d,%c,%f",s.a,s.b,s.c);
    return 0;
}
9. What will be the output?
#include <stdio.h>
struct test
{
	int capacity;
	char *course;
}st[] = { 220, "DAC Pune", 120, "KDAC Karad ", 30, "DBDA", 60, "DESD", 120,	"DMC" };

int main(void)
{
	struct test *p = st;
	p += 1;
	++p->course;
	printf(" %s,", p++->course);
	printf(" %c,", *++p->course);
	printf(" %d,", p[0].capacity);
	printf(" %s \n", p->course);

	return 0;
}
10. What will be the output of program?
#include<stdio.h>
int main(void)
{
	struct s
	{
		char *p;
		int i;
		struct s1
		{
			char a[4];
			char *p;
		}o1;
		struct s *sp;
	}a[] = {"E-DAC",5,"JAVA","PUNE",a+1,
            "E-DMC",6,"CPP","PUNE",a+2,
            "E-DESD",8,"EOS","KARAD",a},*p;
	p = a[2].sp;
	printf("%s %d %s %s \n",(p+1)->p,(*p).i,a[1].sp->p,(&2[a])->sp->p);

	return 0;
}