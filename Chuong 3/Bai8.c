#include <stdio.h>

int main()
{
    unsigned int toan, ly, hoa;
    float TB;
    printf("Chương trình tính điểm trung bình \n");
    printf("Nhập điểm môn toán: ");
    scanf("%d", &toan);
    printf("Nhập điểm môn lý: ");
    scanf("%d", &ly);
    printf("Nhập điểm môn hóa: ");
    scanf("%d", &hoa);
    TB = ((float)toan + ly + hoa) / 3;
    printf("Điểm trung bình: %.2f", TB);
    return 0;
}