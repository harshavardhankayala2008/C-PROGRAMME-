#include <stdio.h>

int main()
{
    int category, qty, bill;
    char dishcode;

    printf("\n\tWELCOME TO HOTEL MONIKA\n");

    printf("\n******** MENU CARD ********\n");

    printf("\n1. NON VEGETARIAN");
    printf("\n   c. Chicken Biryani          = 2000");
    printf("\n   m. Mutton Biryani           = 6000");
    printf("\n   e. Egg Rice                 = 1000");
    printf("\n   f. Fish Kabab               = 1800");

    printf("\n\n2. VEGETARIAN");
    printf("\n   v. Veg Biryani              = 1200");
    printf("\n   r. Roti                     = 120");
    printf("\n   p. Paneer Butter Masala     = 1800");

    printf("\n\n3. DESSERTS");
    printf("\n   l. Lemon Juice              = 120");
    printf("\n   s. Strawberry Ice Cream     = 230");
    printf("\n   b. Butter Scotch Ice Cream  = 340");

    printf("\n\nEnter your category: ");
    scanf("%d", &category);

    switch(category)
    {
        case 1:
            printf("\nYou selected NON VEGETARIAN");
            printf("\nEnter dish code: ");
            scanf(" %c", &dishcode);

            switch(dishcode)
            {
                case 'c':
                    printf("Enter quantity: ");
                    scanf("%d", &qty);
                    bill = qty * 2000;
                    printf("Chicken Biryani\n");
                    printf("Bill = %d", bill);
                    break;

                case 'm':
                    printf("Enter quantity: ");
                    scanf("%d", &qty);
                    bill = qty * 6000;
                    printf("Mutton Biryani\n");
                    printf("Bill = %d", bill);
                    break;

                case 'e':
                    printf("Enter quantity: ");
                    scanf("%d", &qty);
                    bill = qty * 1000;
                    printf("Egg Rice\n");
                    printf("Bill = %d", bill);
                    break;

                case 'f':
                    printf("Enter quantity: ");
                    scanf("%d", &qty);
                    bill = qty * 1800;
                    printf("Fish Kabab\n");
                    printf("Bill = %d", bill);
                    break;

                default:
                    printf("Invalid dish code.");
            }
            break;

        case 2:
            printf("\nYou selected VEGETARIAN");
            printf("\nEnter dish code: ");
            scanf(" %c", &dishcode);

            switch(dishcode)
            {
                case 'v':
                    printf("Enter quantity: ");
                    scanf("%d", &qty);
                    bill = qty * 1200;
                    printf("Veg Biryani\n");
                    printf("Bill = %d", bill);
                    break;

                case 'r':
                    printf("Enter quantity: ");
                    scanf("%d", &qty);
                    bill = qty * 120;
                    printf("Roti\n");
                    printf("Bill = %d", bill);
                    break;

                case 'p':
                    printf("Enter quantity: ");
                    scanf("%d", &qty);
                    bill = qty * 1800;
                    printf("Paneer Butter Masala\n");
                    printf("Bill = %d", bill);
                    break;

                default:
                    printf("Invalid dish code.");
            }
            break;

        case 3:
            printf("\nYou selected DESSERTS");
            printf("\nEnter dish code: ");
            scanf(" %c", &dishcode);

            switch(dishcode)
            {
                case 'l':
                    printf("Enter quantity: ");
                    scanf("%d", &qty);
                    bill = qty * 120;
                    printf("Lemon Juice\n");
                    printf("Bill = %d", bill);
                    break;

                case 's':
                    printf("Enter quantity: ");
                    scanf("%d", &qty);
                    bill = qty * 230;
                    printf("Strawberry Ice Cream\n");
                    printf("Bill = %d", bill);
                    break;

                case 'b':
                    printf("Enter quantity: ");
                    scanf("%d", &qty);
                    bill = qty * 340;
                    printf("Butter Scotch Ice Cream\n");
                    printf("Bill = %d", bill);
                    break;

                default:
                    printf("Invalid dish code.");
            }
            break;

        default:
            printf("Invalid category.");
    }

    return 0;
}
