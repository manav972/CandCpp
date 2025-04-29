#include<stdio.h>

int main() {
    int ch, val;

    printf("Press 1 to speak English language\n");
    printf("Press 2 to speak Hindi language\n");
    printf("Press 3 to speak Gujarati language\n");
    scanf("%d", &ch);

    switch(ch) {
        case 1:
            printf("Press 1 for Internet Recharge\n");
            printf("Press 2 for Top-up Recharge\n");
            printf("Press 3 for Special Recharge\n");
            scanf("%d", &val);
            switch(val) {
                case 1:
                    printf("You have successfully done an Internet Recharge\n");
                    break;
                case 2:
                    printf("You have successfully done a Top-up Recharge\n");
                    break;
                case 3:
                    printf("You have successfully done a Special Recharge\n");
                    break;
                default:
                    printf("Invalid number\n");
                    break;
            }
            break;

        case 2:
            printf("Internet recharge ke liye 1 dabaiye\n");
            printf("Top-up recharge ke liye 2 dabaiye\n");
            printf("Special recharge ke liye 3 dabaiye\n");
            scanf("%d", &val);
            switch(val) {
                case 1:
                    printf("Aapne safaltapurvak Internet recharge kiya hai\n");
                    break;
                case 2:
                    printf("Aapne safaltapurvak Top-up recharge kiya hai\n");
                    break;
                case 3:
                    printf("Aapne safaltapurvak Special recharge kiya hai\n");
                    break;
                default:
                    printf("Invalid number\n");
                    break;
            }
            break;

        case 3:
            printf("Internet recharge mate 1 dabavo\n");
            printf("Top-up recharge mate 2 dabavo\n");
            printf("Special recharge mate 3 dabavo\n");
            scanf("%d", &val);
            switch(val) {
                case 1:
                    printf("Tame safaltapurvak Internet recharge karyu che.\n");
                    break;
                case 2:
                    printf("Tame safaltapurvak Top-up recharge karyu che.\n");
                    break;
                case 3:
                    printf("Tame safaltapurvak Special recharge karyu che.\n");
                    break;
                default:
                    printf("Invalid number\n");
                    break;
            }
            break;

        default:
            printf("Invalid choice of language\n");
            break;
    }

    return 0;
}

