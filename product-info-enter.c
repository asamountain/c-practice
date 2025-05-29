// Practice: Reading and displaying product information with formatted output.
// Concepts: Integer and float input, formatted output, scanf/printf formatting.
#include <stdio.h>

int main(){

        int item_number;
        int day, month, year;
        float unit_price;

        printf("Enter item number: ");
        scanf("%d", &item_number);
        printf("Enter unit price: ");
        scanf("%f", &unit_price);
        printf("Enter purchase date (mm/dd/yyyy): ");
        scanf("%d/%d/%d", &month, &day, &year);

        printf("\nItem\t\tUnit\t\tPurchase\n");
        printf("\t\tPrice\t\tDate\n");
        printf("%d\t\t$%7.2f\t%.2d/%.2d/%d", item_number, unit_price, month, day, year);

        return 0;


}

