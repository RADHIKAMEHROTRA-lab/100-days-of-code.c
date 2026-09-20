#include <stdio.h>

int main() {
    int cp, sp;
    int percentage;
    
    printf("Enter cost price: ");
    scanf("%d", &cp);
    
    printf("Enter selling price: ");
    scanf("%d", &sp);
    
    if (sp > cp) {
        percentage = ((sp - cp) * 100) / cp;
        printf("Profit Percentage: %d\n", percentage);
    } 
    else if (cp > sp) {
        percentage = ((cp - sp) * 100) / cp;
        printf("Loss Percentage: %d\n", percentage);
    } 
    else {
        printf("No Profit No Loss\n");
    }
    
    return 0;
}
