//the fputc() function is used to write a single character into file.it outputs a character to a stream.
//w mode is create a file and you can write a file
#include<stdio.h>
void main()
{
    FILE*fp;//FILE POINTER

    fp=fopen("file1.txt","w");
    fputc('F',fp);
    fclose(fp);//fopen function function is used to open file
}
