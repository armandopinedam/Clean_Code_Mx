#include <stdio.h>

int main() {
    // Define an array of strings
    char *strings[] = {"Bosch", "Bangalore", "Mexico", "Canada", "India"};

    // Get the size of the array
    int size = sizeof(strings) / sizeof(strings[0]);

    // Print each string in the array
    for (int i = 0; i < size; i++) {
        if(strings[i][0]=='B')
        {
            printf("%s\n", strings[i]);
        }
        
    }

    return 0;
} //VehicleType_u32