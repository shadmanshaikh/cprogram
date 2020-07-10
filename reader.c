#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fp;
    char ch[1000];

    fp = fopen("[enter your file path]" , "r"); //reads ypur .txt file

    fgets(ch ,1000 , (FILE*)fp);
    printf("%s",ch);
    fclose(fp);
    return 0;

}