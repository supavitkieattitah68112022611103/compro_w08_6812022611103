#include <stdio.h>

int main() {
    for (int i = 2; i <= 10; i+=2) {   // เงื่อนไขให้ทำงานจนกว่า i จะมากกว่า 10
        printf("%d\n", i);     // ปริ้นค่าของ i
    }

    printf("End of loop\n");        
    return 0;
}
