#include <stdio.h>

int main()
{
    float order_value, discount = 0.0, delivery = 0.0, final_amount;
    int is_holiday;

    // Input order value and if it's Sunday (holiday)
    printf("Enter order value: ");
    scanf("%f", &order_value);

    printf("Is it Sunday? (1 for yes, 0 for no): ");
    scanf("%d", &is_holiday);

    // Initialize delivery and discount based on order value and holiday

    if (is_holiday == 1)
    {
        // Sunday special rules
        delivery = 0; // free delivery on Sunday

        if (order_value >= 3000)
        {
            discount = 0.20 * order_value; // 20% discount
        }
        else
        {
            discount = 0;
        }
    }
    else
    {
        // Not Sunday
        if (order_value >= 3000)
        {
            discount = 0.10 * order_value; // 10% discount
            delivery = 0;                  // free delivery
        }
        else if (order_value >= 1500 && order_value < 3000)
        {
            discount = 0;
            delivery = 100;
        }
        else if (order_value >= 1000 && order_value < 1500)
        {
            discount = 0;
            delivery = 200;
        }
        else
        {
            discount = 0;
            delivery = 300;
        }
    }

    final_amount = order_value - discount + delivery;

    // Display the output in the same format as sample
    if (is_holiday == 1)
    {
        printf("****Sunday Special Deals****\n");
    }

    printf("Order Value = %.2f\n", order_value);
    printf("Discount    = %.2f\n", discount);
    printf("Delivery    = %.2f\n", delivery);
    printf("Final Amount= %.2f\n", final_amount);

    return 0;
}