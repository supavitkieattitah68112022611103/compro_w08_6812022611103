#include <stdio.h>

int main(void) {// ฟังก์ชันหลักของโปรแกรม
    int start, end,sum,i;// ประกาศตัวแปรจำนวนเต็มสำหรับเก็บค่าจุดเริ่มต้นและจุดสิ้นสุด

        printf("Enter start number: ");// รับค่าจุดเริ่มต้นจากผู้ใช้
        scanf("%d", &start);

        printf("Enter stop number: ");// รับค่าจุดสิ้นสุดจากผู้ใช้
        scanf("%d", &end);


    printf("Enter start number: %d\n", start);// แสดงค่าจุดเริ่มต้นที่ผู้ใช้ป้อน
    printf("Enter stop number: %d\n", end);// แสดงค่าจุดสิ้นสุดที่ผู้ใช้ป้อน
    printf("Start number is %d and stop number is %d\n", start,end);// แสดงค่าจุดเริ่มต้นและจุดสิ้นสุด
    printf("------------------\n");
    printf("seaquence from start to stop:");// แสดงข้อความเริ่มต้นของลำดับตัวเลข
    for(int sum = start; sum <= end; sum+=1) {// วนลูปจากค่าจุดเริ่มต้นถึงค่าจุดสิ้นสุด
        printf("%d ", sum);// แสดงค่าปัจจุบันในลำดับตัวเลข
    }

    printf("\nThank you.");



    return 0;
}
