/*Write a C that asks the user to enter his ID and his password, if the ID is correct the
system will ask the user to enter his password up to 3 times, if he enters the password
right the system welcomes him, if the three times are incorrect, the system prints "No
more tries". The system prints "You are not registered" on every wrong try. (Login
code)*/
#include <stdio.h>
int main()
{
   int id,pass,_id,_pass;
   id = 225687;
   pass = 123456;
    printf("Enter your ID >> ");
    scanf("%d", &_id);
    if(_id==id)
    {
        for(int i=0;i<3;i++)
        {
           printf("Enter your Password >> ");
           scanf("%d", &_pass);  
           if(_pass==pass)
           {
             printf(">>WELCOME<<");
             break;
           }else
           {
             printf("You are not registered\n");
             continue;
           }
        }
        if(_pass!=pass)
        {
             printf("No more tries....\n");
        }
    }else{
        printf("Your ID is Wrong ...\n");
    }
   
    return 0;

}