// electricity bill
#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
    float units_consumed;
    float chargeper_unit;
    float total_bill;
    printf("unit consumed is :");
    scanf("%f",&units_consumed);
    printf("The unit consumed is:%f\n",units_consumed);
    printf("Charge per unit is:");
    scanf("%f",&chargeper_unit);
    printf("Charge per unit is :%f\n",chargeper_unit);
    if(units_consumed<=9){
    total_bill=chargeper_unit*units_consumed;
        printf("Bill:%f\n",total_bill);
    }
    else if(units_consumed>=10){
        
       total_bill=chargeper_unit*units_consumed; 
        printf("Bill:%f\n",total_bill);
        
    }
    else{
    printf("units not available\n");
}
char customer_id[25];
char customer_name[25];
 printf("Enter id\n");
 scanf("%s",&customer_id);
  printf("Enter name\n");
 scanf("%f",&customer_name);
 total_bill=chargeper_unit*units_consumed;
 printf("Total bill:%f",total_bill);
    return 0;
}