// seth trials
/*
subject :simple calculator
result:can contain variables
*/
#include <stdio.h>



int main() {
    int start;
    int stop;
    printf("Enter start value ;");
    scanf("%d",&start);
    printf("Enter stop value:");
    scanf("%d",&stop);
    int i;
    for(i=start,i<=stop;i++;);
    
    printf("%d",i);
    return 0;
}
    