#include <stdio.h>

int main() {
    int i = 2;  // เริ่มต้นที่ 2

    while (i <= 10) {   // เงื่อนไขให้ทำงานจนกว่า i จะมากกว่า 10
        printf("%d\n", i); // ปริ้นค่าของ i
        i+=2;// เพิ่มค่า i ทีละ 2
    }

    printf("End of loop\n");  

    return 0;
}
