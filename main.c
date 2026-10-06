#include <stdio.h>
#include <stdlib.h>
void towerofhonoi(int n,char source,char dest,char temp)
{

    if(n>1){
        towerofhonoi(n-1,source,temp,dest);
        printf("\n move %d disc from %c to %c",n,source,dest);
        towerofhonoi(n-1,temp,dest,source);
    }
    else{
        printf("\n move %d disc from %c to %c",n,source,dest);
    }
}

int main()
{
    int n;
    printf("\n Read number of disc:");
    scanf("%d",&n);
    towerofhonoi(n,'S','D','T');
    return 0;
}
