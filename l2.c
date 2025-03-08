#include <stdio.h>
#include <string.h>


float calculateBill(char wardType, int days) {
    float ratePerDay;

    
    if (wardType == 'G' || wardType == 'g') {
        ratePerDay = 1000;
    } else if (wardType == 'S' || wardType == 's') {
        ratePerDay = 2000;
    } else if (wardType == 'P' || wardType == 'p') {
        ratePerDay = 5000;
    } else {
        printf("Invalid ward type.\n");
        return -1;  
    }

    float totalBill = ratePerDay * days;

    if (days > 7) {
        totalBill *= 0.95;  
    }

    return totalBill;
}

int main() {
    char name[100], wardType;
    int days;
    float totalBill;

    
    printf("Enter Patient Name: ");
    scanf("%[^\n]s",name);

    printf("Enter Ward Type (G/S/P): ");
    scanf(" %c", &wardType);

    printf("Enter Number of Days: ");
    scanf("%d", &days);

    totalBill = calculateBill(wardType, days);

    
    if (totalBill == -1) {
        return 1;  
    }

    
    printf("\nPatient Name: %s\n", name);
    printf("Total Bill Before Discount: ₹%.2f\n", days * (wardType == 'G' || wardType == 'g' ? 1000 : wardType == 'S' || wardType == 's' ? 2000 : 5000));
    
    if (days > 7) {
        printf("Discount Applied: ₹%.2f\n", (days * (wardType == 'G' || wardType == 'g' ? 1000 : wardType == 'S' || wardType == 's' ? 2000 : 5000)) * 0.05);
    }
    
    printf("Final Bill Amount: ₹%.2f\n", totalBill);

    return 0;
}
