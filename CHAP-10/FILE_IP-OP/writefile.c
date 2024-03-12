#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("test.txt","w");

    // fputc('a',fptr);
    // fputc('p',fptr);
    // fputc('p',fptr);           UDING FPUTC()
    // fputc('l',fptr);
    // fputc('e',fptr);

    fprintf(fptr,"%c",'m');
    fprintf(fptr,"%c",'a');
    fprintf(fptr,"%c",'n');
    fprintf(fptr,"%c",'g');
    fprintf(fptr,"%c",'o');

    fclose(fptr);
}