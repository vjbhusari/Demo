#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("test.txt","r");

    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));              USING FGETC(FPTR);
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));


     int ch;
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);

    fclose(fptr);
 
}
