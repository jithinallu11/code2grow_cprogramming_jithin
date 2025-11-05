#include <stdio.h>
int main(){
    int choice, transactions = 0;
    float balance = 10000,amount;
    printf("------Mini ATM Stimulator------\n");
    printf("Initial Account Balance:%.2f\n",balance);
    do{
        printf("1.Initial Balance\n");
        printf("2.Deposite\n");
        printf("3.withdraw\n");
        printf("4.Exit\n");
        printf("Enter your choice \n");
        scanf("%d", &choice);
        if(choice == 1){
            printf("Your current Bank Balance:%.2f\n",balance);
            transactions++;
        }
        else if(choice == 2){
            printf("Enter the deposite Amount:\n");
            scanf("%f", &amount);
            if(amount > 0){
                balance += amount;
                printf("Your updated Bank balance: %.2f\n",balance);
                transactions++;
                }else{
                    printf("Invalied Deposite Amount\n");
                }
            }
            else if(choice == 3){
                printf("Enter Amount to Withdraw:\n");
                scanf("%f", &amount);
                if(amount > balance - 500){
                    printf("Insufficient account balance\n");
                }else{
                    balance -= amount;
                    printf("Account balance after deposite: %.2f\n",balance);
                    transactions++;
                }
            }
    
            else if(choice == 4){
                    printf("Thanks for choosing our Bank\n");
                }
                else{
                    printf("Invalid choice. please select options from (1-4)\n");
                }
            if(transactions > 5){
                printf("Your Transaction limited reached max-5\n");
                break;
            }
    }
    
    
        while(choice != 4);
        printf("------Transaction Summary------\n");
        printf("Total transactions:%d\n",transactions);
        printf("Final Balance:%.2f",balance);
        return 0;
    }
