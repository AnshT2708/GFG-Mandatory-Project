#include<stdio.h>
#include<windows.h>
int main()
{
    int h,m,s;
    int d=1000; //we add a delay of 1000 milliseconds and will be using it in the sleep function
    printf("Set Time : \n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>12 || m>60 || s>60)
    {
        printf("ERROR ! \n");
    }
    while(1) //this is an infinite loop and will keep repeating itself for infinity 
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }
        printf("\n CLOCK : ");
        printf("\n %02d:%02d:%02d",h,m,s);  //this writes the time in the format of 00:00:00
        Sleep(d); // the sleep function slows down the while loop and makes it look like a real clock
        system("cls"); //this clears the screen
    }
return 0;
}
