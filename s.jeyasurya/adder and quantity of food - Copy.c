/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
int main()
{
    int choise=1,quantity;
    printf("\n menu card");
    printf("\n coffee=15");
    printf("\n tea =10");
    printf("\n cold coffee=50");
    printf("\n milk shake=50");
    printf("\n samosa=8");
    switch(choise)

    {
        case 1:
        printf("\n you have choosed coffee");
        printf("\n enter the quantity=");
        scanf("%d",& quantity);
        printf("%d,total amount =",(quantity*15));
        break;
        
        case 2:
        printf("\n you have choosed tea");
        printf("\n enter the quantity=");
        scanf("%d",& quantity);
        printf("%d,total amount =",(quantity*10));
        break;
        
    
        case 3:
        printf("\n you have choosed cold coffee");
        printf("\n enter the quantity=");
        scanf("%d",& quantity);
        printf("%d,total amount =",(quantity*25));
        break;
        
    
        case 4:
        printf("\n you have choosed milk shake");
        printf("\n enter the quantity=");
        scanf("%d",& quantity);
        printf("%d,total amount =",(quantity*50));
        break;
        
    
        case 5:
        printf("\n you have choosed samosa ");
        printf("\n enter the quantity=");
        scanf("%d",& quantity);
        printf("%d,total amount =",(quantity*8));
        break;
        
    }
    return 0;
}

        
    