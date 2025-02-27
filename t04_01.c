// 12S24039 - Jody Alfonso Siahaan
// 12S24042 - Ventyola Rohati Napitupulu

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[61];
    char pesan[21];
    int u;

    scanf("%60s", str);

    for (u = 0; u < strlen(str); u += 3) {
        int ascii_code = atoi(strncpy((char[4]) {0}, str + u, 3));
        pesan[u / 3] = (char) ascii_code;
    }

    pesan[u / 3] = '\0';

    printf("%s\n", pesan);

    return 0;
}