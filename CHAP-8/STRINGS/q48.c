//   ASK THE USER TO ENTER THEIR FIRST NAME & PRINT IT BACK TO THEM
//   ALSO TRY THIS WITH THEIR FULLNAME

#include<stdio.h>
int main()
{
    // char firstname[100];
    // scanf("%s",firstname);
    // printf("your name is %s\n",firstname);

    char fullname[100];
    gets(fullname);
    //puts(fullname);                                       
    fgets(fullname,100,stdin);
    printf("your name is %s",fullname);


}