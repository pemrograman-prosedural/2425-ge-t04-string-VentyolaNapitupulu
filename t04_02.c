// 12S24039 - Jody Alfonso Siahaan
// 12S24042 - Ventyola Rohati Napitupulu

#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int u;

    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    for (u = 0; u < strlen(str); u ++) {
        printf("%03d", str[u]);
        
    }

    printf("\n");

    return 0;
}
