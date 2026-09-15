// Online C compiler to run C program online
#include<stdio.h>
int main(void)
{
    int choice;
    int bill = 0;
    int planrate=0;

    printf("======================");
    printf("**WELCOME TO POWERFIT GYM**");
    printf("======================\n");
    printf("1. Membership\n2. Gym Services\n3. Payment & Billing\n4. Member Feedback\n5. Exit\nEnter your choice:");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        {
            int check;
            printf("------------- MEMBERSHIP -------------\n1. Check Slot Availability\n2. Check Membership Eligibility\n3. Select Membership Plan\n4. Group membership\n5. Back to Main Menu\n Enter you choice : ");
            scanf("%d", &check);

            if (check==1)
            {
                int bookSlot;

                printf("Which slot do you want to book?\n");

                printf("1. 9 AM - 10 AM\n");
                printf("2. 10 AM - 11 AM\n");
                printf("3. 11 AM - 12 PM\n");
                printf("4. 12 PM - 1 PM\n");
                printf("5. 1 PM - 2 PM\n");
                printf("6. 2 PM - 3 PM\n");
                printf("7. 3 PM - 4 PM\n");
                printf("8. 4 PM - 5 PM\n");
                printf("9. 5 PM - 6 PM\n");
                printf("10. 6 PM - 7 PM\n");
                printf("11. 7 PM - 8 PM\n");
                printf("12. 8 PM - 9 PM\n");
                printf("13. 9 PM - 10 PM\n");

                scanf("%d", &bookSlot);

                if (bookSlot >= 1 && bookSlot <= 3)
                    printf("Sorry, this slot is not available.\n");
                else if (bookSlot >= 4 && bookSlot <= 13)
                    printf("This slot is available.\n");
                else
                    printf("Invalid slot.\n");
            }

            if(check==2)
            {
                int age;
                printf("Enter your age: ");
                scanf("%d", &age);

                if (age >= 16)
                {
                    printf("You are Eligible for Membership.\n");
                }
                else
                {
                    printf("You are NOT Eligible for Membership.\n");
                }
            }

            if(check==3)
            {
                int plan;

                printf("Select your membership plan:\n");
                printf("1. Basic\n");
                printf("2. Premium\n");
                printf("3. VIP\n");

                scanf("%d", &plan);

                switch (plan)
                {
                    case 1:
                        printf("You selected Basic Plan.\n");
                        planrate=planrate+500;
                        break;

                    case 2:
                        printf("You selected Premium Plan.\n");
                        planrate=planrate+1000;
                        break;

                    case 3:
                        printf("You selected VIP Plan.\n");
                        planrate=planrate+3000;
                        break;

                    default:
                        printf("Invalid plan selected.\n");
                }
            }

            if(check==4)
            {
                int a,b,c;

                printf("\nenter first members age: ");
                scanf("%d", &a);

                printf("\nenter second members age: ");
                scanf("%d", &b);

                printf("\nenter third members age: ");
                scanf("%d", &c);

                if(a >= 16 && b >= 16 && c >= 16)
                    printf("\n You all are Eligible for membership");
                else
                    printf("\nYou are not Allowed for the Memberdhip");
            }

            else if(check==5)
                break;
            else if(check != 1 && check != 2 && check != 3 && check != 4)
                printf("invalid choice");

            break;
        }

        case 2:
        {
            int service;
            int supplement;
            int rating;
            char trainer;
            char diet;

            printf("---------- GYM SERVICES ------------\n");
            printf("1. Personal Trainer\n");
            printf("2. Supplement Menu\n");
            printf("3. Trainer Rating\n");
            printf("4. Diet Consultation\n");

            printf("\nSelect a service: ");
            scanf("%d", &service);

            if(service==1)
            {
                printf("Do you want a Personal Trainer? (Y/N): ");
                scanf(" %c", &trainer);

                if(trainer =='Y' || trainer == 'y')
                {
                    printf("You are selected for the Personal Trainer, you will be charged more.\n");
                }
                else if(trainer == 'N' || trainer == 'n')
                {
                    printf("You will have no extra charges.\n");
                }
                else
                {
                    printf("Invalid choice.\n");
                }
            }

            else if(service == 2)
            {
                printf("\n===== SUPPLEMENT MENU =====\n");
                printf("1. Protein\n");
                printf("2. Creatine\n");
                printf("3. BCAA\n");

                printf("Select a supplement: ");
                scanf("%d", &supplement);

                switch(supplement)
                {
                    case 1:
                        printf("You selected Protein.\n");
                        break;

                    case 2:
                        printf("You selected Creatine.\n");
                        break;

                    case 3:
                        printf("You selected BCAA.\n");
                        break;

                    default:
                        printf("Invalid supplement choice.\n");
                }
            }

            else if(service==3)
            {
                printf("\nEnter trainer rating (1 to 5): ");
                scanf("%d", &rating);

                switch(rating)
                {
                    case 1:
                        printf("Poor\n");
                        break;

                    case 2:
                        printf("Average\n");
                        break;

                    case 3:
                        printf("Good\n");
                        break;

                    case 4:
                        printf("Very Good\n");
                        break;

                    case 5:
                        printf("Excellent\n");
                        break;

                    default:
                        printf("Invalid rating.\n");
                }
            }

            else if(service == 4)
            {
                printf("Do you want Diet Consultation? (Yes/No): ");
                scanf(" %c", &diet);

                if(diet == 'Y' || diet == 'y')
                {
                    bill = bill + 1000;

                    printf("Diet Consultation selected.\n");
                    printf("Rs 1000 added to the bill.\n");
                }
                else if(diet == 'N' || diet == 'n')
                {
                    printf("No Diet Consultation selected.\n");
                    printf("No extra charges.\n");
                }
                else
                {
                    printf("Invalid choice.\n");
                }
            }

            else
            {
                printf("Invalid choice.\n");
            }

            break;
        }

        case 3:
        {
            int choice;
            int months;
            int Date;
            float bill=0;
            float tax;
            float discount = 0;
            float penalty = 0;
            float finalBill;
            char corporate;

            printf("========== BILLING AND PAYMENT ==========\n");
            printf("1. Check Monthly Bill\n");
            printf("2. Check Payment Confirmation\n");

            printf("\nWhat do you want to check? ");
            scanf("%d", &choice);

            if(choice==1)
            {
                printf("\nHow many months have you been enrolled? ");
                scanf("%d", &months);

                bill = 1 * 10000;
                tax = bill * 0.10;
                bill = bill + tax + planrate;

                printf("\nMonthly Bill = Rs. %.2f\n", bill);
                printf("Tax = Rs. %.2f\n", tax);

                if(months >= 6)
                {
                    discount = discount + bill * 0.10;
                    printf("10%% discount applied for 6 or more months.\n");
                }

                printf("\nAre you a corporate member? (Y/N): ");
                scanf(" %c", &corporate);

                if(corporate == 'Y' || corporate == 'y')
                {
                    discount = discount + bill * 0.20;
                    printf("20%% corporate discount applied.\n");
                }
                else if(corporate == 'N' || corporate == 'n')
                {
                    printf("No corporate discount.\n");
                }
                else
                {
                    printf("Invalid choice.\n");
                }

                finalBill = bill - discount;

                printf("\nEnter the date of payment (1-31): ");
                scanf("%d", &Date);

                if(Date > 10)
                {
                    penalty = 300;
                    finalBill = finalBill + penalty;

                    printf("Late payment penalty = Rs. 300\n");
                }
                else if(Date >= 1 && Date <= 10)
                {
                    printf("Payment made on time.\n");
                }
                else
                {
                    printf("Invalid payment date.\n");
                }

                printf("\n___________ FINAL BILL _____________\n");
                printf("Bill before discount = Rs. %.2f\n", bill);
                printf("Total discount = Rs. %.2f\n", discount);
                printf("Penalty = Rs. %.2f\n", penalty);
                printf("Final Bill = Rs. %.2f\n", finalBill);
            }

            else if(choice == 2)
            {
                int a, amount;

                amount==10000;

                printf("\nhow much amount have you paid?\n");
                scanf("%d", &a);

                if(a==amount)
                    printf("\n confirm Membership\n");
                else
                    printf("\nmembership not confirmed\n");
            }

            else
                printf("\ninvalid choice\n");

            break;
        }

        case 4:
        {
            printf("\n------------ FEEDBACK -----------\n");
            int rating;

            printf("Enter your rating (1-5): ");
            scanf("%d", &rating);

            if(rating >= 4)
            {
                printf("Congratulations! You get a free protein shake voucher.\n");
            }
            else
                printf("We will improve service.\n");

            break;
        }

        default:
            printf("invalid selection");
    }

    return 0;
}
