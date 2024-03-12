//                                       SALTING
//  FIND THE SALTED FORM OF A PASSWORD ENTERED BY USER IF THE SALT IS "123" & ADDED AT THE END

#include<stdio.h>
#include<string.h>
void salting(char pass1[]);
int main()
{
    char pass[100];
    gets(pass);
    salting(pass);
}
void salting(char pass1[])
{
    char salt[20]="123";
    char newpass[100];
    strcpy(newpass,pass1);
    strcat(newpass,salt);
    puts(newpass);

}