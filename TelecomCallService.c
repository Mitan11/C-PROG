/*
Write a Program to create a menu-driven program for Telecom call service
conversation using nested switch case.
For example,
Press 1 for English
Press 2 for Hindi
Press 3 for Gujarati
Enter your choice: 1
Press 1 for Internet Recharge
Press 2 for Top-up Recharge
Press 3 for Special Recharge
Enter your choice: 2
You have successfully done a Top-up Recharge.
---------------------------------------------
For example,
Press 1 for English
Press 2 for Hindi
Press 3 for Gujarati
Enter your choice: 2
Internet Recharge ke liye 1 dabaiye
Top-up Recharge ke liye 2 dabaiye
Special Recharge ke liye 3 dabaiye
Enter your choice: 1
Aapne safaltapurvak Internet Recharge kar liya he.
---------------------------------------------
For example,
Press 1 for English
Press 2 for Hindi
Press 3 for Gujarati
Enter your choice: 3
Internet Recharge mate 1 dabavo
Top-up Recharge mate 2 dabavo
Special Recharge mate 3 dabavo
Enter your choice: 3
Tame safaltapurvak Special Recharge karyu chhe.
*/

#include<stdio.h>

void main(){
    int choice;
    
    // Display language options
    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    
    // Prompt user to select language
    printf("Enter your Choice : ");
    scanf("%d", &choice);
    
    // Switch based on selected language
    switch(choice){
        case 1: // English
            // Display recharge options in English
            printf("Press 1 for Internet Recharge\n");
            printf("Press 2 for Top-up Recharge\n");
            printf("Press 3 for Special Recharge\n");
            
            // Prompt user to select recharge option
            printf("Enter your Choice : ");
            scanf("%d", &choice);
            
            // Nested switch to handle recharge options
            switch(choice){
                case 1:
                    printf("You have successfully done a Internet Recharge.");
                    break;
                case 2:
                    printf("You have successfully done a Top-up Recharge.");
                    break;
                case 3:
                    printf("You have successfully done a Special Recharge.");
                    break;
                default:
                    printf("Invalid Choice");
                    break;
            }
            break;
        case 2: // Hindi
            // Display recharge options in Hindi
            printf("Internet Recharge ke liye 1 dabaiye\n");
            printf("Top-up Recharge ke liye 2 dabaiye\n");
            printf("Special Recharge ke liye 3 dabaiye\n");
            
            // Prompt user to select recharge option
            printf("Enter your Choice : ");
            scanf("%d", &choice);
            
            // Nested switch to handle recharge options
            switch(choice){
                case 1:
                    printf("Aapne safaltapurvak Internet Recharge kar liya he.");
                    break;
                case 2:
                    printf("Aapne safaltapurvak Top-up Recharge kar liya he.");
                    break;
                case 3:
                    printf("Aapne safaltapurvak Special Recharge kar liya he.");
                    break;
                default:
                    printf("Invalid Choice");
                    break;
            }
            break;
        case 3: // Gujarati
            // Display recharge options in Gujarati
            printf("Internet Recharge mate 1 dabavo\n");
            printf("Top-up Recharge mate 2 dabavo\n");
            printf("Special Recharge mate 3 dabavo\n");
            
            // Prompt user to select recharge option
            printf("Enter your Choice : ");
            scanf("%d", &choice);
            
            // Nested switch to handle recharge options
            switch(choice){
                case 1:
                    printf("Tame safaltapurvak Internet Recharge karyu chhe.");
                    break;
                case 2:
                    printf("Tame safaltapurvak Top-up Recharge karyu chhe.");
                    break;
                case 3:
                    printf("Tame safaltapurvak Special Recharge karyu chhe.");
                    break;
                default:
                    printf("Invalid Choice");
                    break;
            }
            break;
        default:
            printf("Invalid Choice");
            break;
    }
}
