#include<stdio.h>
void main()
{

    char shut , y ,Y ;
    printf("would you like to shut your PC (Y/N) : ");
    scanf("%c", &shut);
    if ( shut == y || shut == Y)
    {
        system("C:\\WINDOWS\\System32\\shutdown -s ");
    }else
    {
        printf("can't shutdown \n");
    }
    
    
}