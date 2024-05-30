#include<stdio.h>

void main(){
    int choice;
    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    printf("Enter your Choice : ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Press 1 for Internet Recharge\n");
            printf("Press 2 for Top-up Recharge\n");
            printf("Press 3 for Special Recharge\n");
            printf("Enter your Choice : ");
            scanf("%d", &choice);
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
        case 2:
            printf("Internet Recharge ke liye 1 dabaiye\n");
            printf("Top-up Recharge ke liye 2 dabaiye\n");
            printf("Special Recharge ke liye 3 dabaiye\n");
            printf("Enter your Choice : ");
            scanf("%d", &choice);
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
        case 3:
            printf("Internet Recharge mate 1 dabavo\n");
            printf("Top-up Recharge mate 2 dabavo\n");
            printf("Special Recharge mate 3 dabavo\n");
            printf("Enter your Choice : ");
            scanf("%d", &choice);
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