#include <stdio.h>
#include <stdlib.h>
void waitforinput() {
    printf("\nPress enter to return to the main menu...");
    getchar();
    getchar();
    clrscr();    //this clears the screen before restarting the loop
}
void clrscr() {
    system("cls");
}

void datatypes() {
int datatypekey;
char * data[] = {
    "int",
    "float",
    "double",
    "char",
};

char * datadef[] = {
    "Specifies the integer type of value a variable will hold",
    "Specifies the single-precision floating-point of value a variable will hold",
    "Specifies the double-precision floating-point type of value a variable will",
    "Specifies the character type of value a variable will hold",
    };
     printf("--Word Menu--\n");
     printf("1. int\n");
     printf("2. float\n");
     printf("3. double\n");
     printf("4. char\n");
     printf("Choice: ");
     scanf("%d", &datatypekey);

     printf("Definition of %s %s\n", data[datatypekey -1], datadef[datatypekey -1]);
     //waitforinput();
}

void qualifiertype() {
int qualifiertypekey;
char * qual[] = {
    "signed",
    "unsigned",
    "short",
    "long",
};

char * qualdef[] = {
    "Specifies a variable can hold positive and negative integer type of data",
    "Specifies a variable can hold only the positive integer type of data",
    "Specifies a variable can hold fairly small integer type of data",
    "Specifies a variable can hold fairly large integer type of data"
};
     printf("--Word Menu--\n");
     printf("1. signed\n");
     printf("2. unsigned\n");
     printf("3. short\n");
     printf("4. long\n");
     printf("Choice: ");
     scanf("%d", &qualifiertypekey);

     printf("Definition of %s %s\n", qual[qualifiertypekey -1], qualdef[qualifiertypekey -1]);
    // waitforinput();
}

void loopControl() {
int loopControlkey;
char * loop[] = {
    "for",
    "while",
    "do"
};

char * loopdef[] = {
     "Loop is used when the number of passes is known in advance",
     "Loop is used when the number of passes is known in advance",
     "Loop is used to handle menu-driven programs"
};
 printf("--Word Menu--\n");
     printf("1. for\n");
     printf("2. while\n");
     printf("3. do\n");
     printf("Choice: ");
     scanf("%d", &loopControlkey);

     printf("Definition of %s %s\n", loop[loopControlkey -1], loopdef[loopControlkey -1]);
    // waitforinput();
}

void jumpControl() {
int jumpControlkey;
char * jump[] = {
    "break",
    "continue",
    "goto"
};

char * jumpdef[] = {
    "Used to force immediate termination of a loop, bypassing the conditional expression and any remaining code in the body of the loop",
    "Used to take the control to the beginning of the loop bypassing the statements inside the loop",
    "Used to take the control to required place in the program"
};
printf("--Word Menu--\n");
     printf("1. break\n");
     printf("2. continue\n");
     printf("3. goto\n");
     printf("Choice: ");
     scanf("%d", &jumpControlkey);

     printf("Definition of %s %s\n", jump[jumpControlkey -1], jumpdef[jumpControlkey -1]);
     //waitforinput();
};
void main() {
    int Dtypes;
    do{
       //clrscr();
       printf("Main Menu\n");
       printf("1 dataTypes\n");
       printf("2 qualifiertype\n");
       printf("3 loopControltypes\n");
       printf("4 Jump Control types\n");
       printf("5 exit\n");
       scanf("%d",&Dtypes);

        switch (Dtypes)
        {
            case 1:
                datatypes();
                break;
            case 2:
                qualifiertype();
                break;
            case 3:
                loopControl();
                break;
            case 4:
                jumpControl();
                break;
            case 5:
                break;
            default:
                printf("You wrong");
        }
        if(Dtypes != 5) {waitforinput();}
    } while(Dtypes != 5);
}

