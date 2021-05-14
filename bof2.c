#include <stdio.h>
#include <unistd.h>
int main(void) {
    char win[8];
    int length;
    char dummy[12];
    char buf[20];
    
    scanf("%d", &length);
    read(0, buf, length);
    if (!strncmp(win, "PAYLOAD!", 8)){
        printf("Success!\n");
    }
}
