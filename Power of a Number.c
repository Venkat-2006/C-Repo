#include <stdio.h>
#include <math.h>

int main() {
    int x, y, M;
        scanf("%d %d %d", &x, &y, &M);

            // Calculate (x^y) % M using the pow function
                long long result = (long long)pow(x, y) % M;

                    // Print the result
                        printf("%lld\n", result);

                            return 0;
                            }
                            