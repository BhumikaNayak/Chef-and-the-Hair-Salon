#include<stdio.h>
int main()
{
    int Testcases;  //number of testcases
    scanf("%d\n",&Testcases);
    
    while(Testcases--)
    {
        int numofctmrN,timetakenperctmrM; //declaration of variables
        scanf("%d %d",&numofctmrN,&timetakenperctmrM);
        fflush(stdin);
        
        int result;
        if(numofctmrN!=0)
        {
           result= numofctmrN*timetakenperctmrM;
        }
        else
        {
            result=numofctmrN;
        }
        printf("%d\n",result);
    }
    
    return 0;
}
//Code By Bhumika Nayak