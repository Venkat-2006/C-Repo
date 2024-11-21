#include <stdio.h>

int main() {
    int seat_number;

        // Input the seat number
            scanf("%d", &seat_number);

                // Check if the seat number is valid
                    if (seat_number < 1 || seat_number > 30) {
                            printf("Invalid seat number\n");
                                    return 1;
                                        }

                                            // Determine the type of seat
                                                if (seat_number <= 15) {
                                                        // Lower deck
                                                                if (seat_number == 11 || seat_number == 12 || seat_number == 13 || seat_number == 14 || seat_number == 15) {
                                                                            printf("Lower Single\n");
                                                                                    } else {
                                                                                                printf("Lower Double\n");
                                                                                                        }
                                                                                                            } else {
                                                                                                                    // Upper deck
                                                                                                                            if (seat_number == 26 || seat_number == 27 || seat_number == 28 || seat_number == 29 || seat_number == 30) {
                                                                                                                                        printf("Upper Single\n");
                                                                                                                                                } else {
                                                                                                                                                            printf("Upper Double\n");
                                                                                                                                                                    }
                                                                                                                                                                        }

                                                                                                                                                                            return 0;
                                                                                                                                                                            }
                                                                                                                                                                            