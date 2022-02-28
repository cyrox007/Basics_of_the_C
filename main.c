#include <stdio.h>

int main(int argc, char const *argv[]) {
    int costNight = 1; // 00:00 - 08:00
    int costDay = 2; // 08:00 - 16:00
    int costEvening = 3; // 16:00 - 00:00

    int power; // ���� �������� �������� ����������� ��������������
    int hours; // ���� �������� ����� � �����
    int result; // ����� ����� ��������� ���������

    // �������� ����� ����������� ��������������
    printf("Enter used power: ");
    scanf("%d", &power);

    // �������� ����� � �����
    printf("Enter finished time (hours): ");
    scanf("%d", &hours);

    /* ����� ������������ � 24-�� �������. 
        24 ���� ������ ��������� ����. 
        ����� �� ����� ��������� 24 ���� */
    if (hours >= 0 && hours < 8) {
        result = power * costNight;
    } else if (hours >= 8 && hours < 16) {
        result = power * costDay;
    } else if (hours >= 16 && hours < 24) {
        result = power * costEvening;
    } else {
        printf("The time is specified incorrectly");
        return 0;
    }
    
    printf("Total price: $%d", result);
    
    return 0;
}