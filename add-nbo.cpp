#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>

int main() {
    FILE* file1 = fopen("thousand.bin", "rb");
    FILE* file2 = fopen("five-hundred.bin", "rb");

    uint32_t num1, num2;

    fread(&num1, sizeof(num1), 1, file1);
    fread(&num2, sizeof(num2), 1, file2);

    fclose(file1);
    fclose(file2);

    num1 = ntohl(num1);
    num2 = ntohl(num2);

    uint32_t sum = num1 + num2;
    printf("%u(0x%x) + %u(0x%x) = %u(0x%x)\n", num1, num1, num2, num2, sum, sum);

    return 0;
}
