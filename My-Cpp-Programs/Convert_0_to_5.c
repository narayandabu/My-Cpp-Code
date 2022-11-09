#include <stdio.h>
#include <string.h>

//program for conversion of 0's to 5 or anyother number with some modification.
int main()
{
    int T,input;
    char input2[20];
    scanf("%d",&T);

    while (T>0)
    {   
        scanf("%s",&input2);
        static char input3[sizeof input2/sizeof input2[0]];
        
        strcpy(input3,input2);
        for (int i = 0; i < sizeof input3/sizeof input3[0]; i++)
        {
            if(input3[i]=='0')
            {
             input3[i]='5';
             continue;
             }
            else
             {
             continue;
             }
        
        
        }
        printf("%s\n",input3);


        T--;
        
        


    }
    
	return 0;
}
