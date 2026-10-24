#include "NumberCheck.h"

static long long digit_power(int digit, int exponent) {
    long long result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= digit;
    }

    return result;
}

int is_prime(int number) {
    if (number < 2) {
        return 0;
    }

    for (int divisor = 2; divisor <= number / divisor; divisor++) {
        if (number % divisor == 0) {
            return 0;
        }
    }

    return 1;
}

int is_armstrong(int number) {
    if (number < 0) {
        return 0;
    }

    int digits = 0;
    int remaining = number;
    do {
        digits++;
        remaining /= 10;
    } while (remaining > 0);

    long long sum = 0;
    remaining = number;
    do {
        int digit = remaining % 10;
        sum += digit_power(digit, digits);
        remaining /= 10;
    } while (remaining > 0);

    return sum == number;
}

int is_perfect(int number) {
    if (number < 2) {
        return 0;
    }

    long long sum = 1;
    for (int divisor = 2; divisor <= number / divisor; divisor++) {
        if (number % divisor == 0) {
            sum += divisor;
            int paired_divisor = number / divisor;
            if (paired_divisor != divisor) {
                sum += paired_divisor;
            }
        }
    }

    return sum == number;
}
