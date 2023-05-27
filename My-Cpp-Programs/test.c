#include <stdio.h>
#include <conio.h>
int main(){
    int n,temp,rem,val=0;
    printf("Enter a number:-\n");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
       rem=temp%10;
       val+=(rem*rem*rem);
       temp/=10;
    }
    if(val==n)printf("armstrong\n");
    else printf("no armstrong\n");
    
    return 0;
}
