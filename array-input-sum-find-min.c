#include <stdio.h>

int arrayNum;

void Sum_n();
int Find_Min();


int main(int argc, char const *argv[])
{
    int choose;
    printf("������ �����Ͻðڽ��ϱ�?\n1: �迭�� ��\n2: �ּڰ� ã��\n3: ������\n");
    scanf("%d", &choose);

    while (1)
    {
        if (choose == 1)
        {
            Sum_n();

        } else if (choose == 2) {
            int num;
            int min = Find_Min();
            // printf("%d\n", min);
            printf("�迭�� ����� ����: %d, �迭�� �ּڰ�: %d\n\n", arrayNum, min);

            
        } else if (choose == 3) {
            printf("�۾��� ��Ĩ�ϴ�.");
            break;
        } else {
            printf("1���� 3�� �ϳ��� ������ �Է��Ͻÿ�.\n"); // ���� ó��
            printf("1: �迭�� ��\n2: �ּڰ� ã��\n3: ������\n");
            scanf("%d", &choose);
            continue;
        } 
        printf("���� �۾��� �����Ͻʽÿ�.\n1: �迭�� ��\n2: �ּڰ� ã��\n3: ������\n");
        scanf("%d", &choose);
    }
    return 0;
}

void Sum_n(int array[]) {

// �迭 �Է�
    int i, a;
    printf("�迭�� ������ �Է��Ͻÿ�: ");
    scanf("%d", &arrayNum);
    for (i = 0; i < arrayNum; i++)
    {
        printf("�迭�� %d��° ���ڸ� �Է��Ͻÿ�: ", i+1);
        scanf("%d", &a); // �迭�� num��° ��� �Է�
        array[i] = a;
    }

    int sum = 0;
    // int n = sizeof(array) / sizeof(array[0]);  // �迭 a�� ��ü �޸� ũ�� �� a�� ù ��° ���� �޸� ũ�� (= ��� ����)
    for (i = 0; i < arrayNum; i++)
        sum += array[i];
        printf("�迭�� ����� ����: %d, �迭�� ��: %d\n\n", arrayNum, sum);
}


int Find_Min (int array[]) {

// �迭 �Է�
    int i, a;
    printf("�迭�� ������ �Է��Ͻÿ�: ");
    scanf("%d", &arrayNum);
    for (i = 0; i < arrayNum; i++)
    {
        printf("�迭�� %d��° ���ڸ� �Է��Ͻÿ�: ", i+1);
        scanf("%d", &a); // �迭�� num��° ��� �Է�
        array[i] = a;
    }

// �ּڰ� ã��
    int MIN;
    MIN = array[0];
    // int n = sizeof(array) / sizeof(array[0]);  // �迭 a�� ��ü �޸� ũ�� �� a�� ù ��° ���� �޸� ũ�� (= ��� ����)
    for (i = 0; i < arrayNum; i++)
        if (MIN > array[i]) MIN = array[i];
    // printf("%d\n", MIN); // ����� �ڵ�
    return (MIN);
}