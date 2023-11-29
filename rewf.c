#include<stdio.h>
//printing number from 1 to 50 using recursive function ;
int printNum(int);
int main(){
    int n = 1;
    printf("\n ranjeet we are printing number from 1 to 50: ");
    printf("\n -------------------------------------------");
    printf(" \nhere we go \n");
    printNum(n);
    printf("\n\n");
    return 0;
}
int printNum( int n )
{
    if(n<=50)
    {
        printf("%d",n);
        printNum(n+1);
    }

}
