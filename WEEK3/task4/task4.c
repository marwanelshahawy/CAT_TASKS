/*Write a c code login code but use a function called login.*/
#include <stdio.h>
void login(int id ,int pass)
{int _id ,_pass;
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
}

int main()
{
    int id,pass;
   id = 225687;
   pass = 123456;
login(id,pass);
   
    return 0;

}
