#include <stdio.h>

int arrayNum;

void Sum_n();
int Find_Min();


int main(int argc, char const *argv[])
{
    int choose;
    printf("무엇을 선택하시겠습니까?\n1: 배열의 합\n2: 최솟값 찾기\n3: 끝내기\n");
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
            printf("배열의 요소의 개수: %d, 배열의 최솟값: %d\n\n", arrayNum, min);

            
        } else if (choose == 3) {
            printf("작업을 마칩니다.");
            break;
        } else {
            printf("1부터 3중 하나의 정수를 입력하시오.\n"); // 예외 처리
            printf("1: 배열의 합\n2: 최솟값 찾기\n3: 끝내기\n");
            scanf("%d", &choose);
            continue;
        } 
        printf("다음 작업을 선택하십시오.\n1: 배열의 합\n2: 최솟값 찾기\n3: 끝내기\n");
        scanf("%d", &choose);
    }
    return 0;
}

void Sum_n(int array[]) {

// 배열 입력
    int i, a;
    printf("배열의 개수를 입력하시오: ");
    scanf("%d", &arrayNum);
    for (i = 0; i < arrayNum; i++)
    {
        printf("배열의 %d번째 숫자를 입력하시오: ", i+1);
        scanf("%d", &a); // 배열의 num번째 요소 입력
        array[i] = a;
    }

    int sum = 0;
    // int n = sizeof(array) / sizeof(array[0]);  // 배열 a의 전체 메모리 크기 ÷ a의 첫 번째 값의 메모리 크기 (= 요소 개수)
    for (i = 0; i < arrayNum; i++)
        sum += array[i];
        printf("배열의 요소의 개수: %d, 배열의 합: %d\n\n", arrayNum, sum);
}


int Find_Min (int array[]) {

// 배열 입력
    int i, a;
    printf("배열의 개수를 입력하시오: ");
    scanf("%d", &arrayNum);
    for (i = 0; i < arrayNum; i++)
    {
        printf("배열의 %d번째 숫자를 입력하시오: ", i+1);
        scanf("%d", &a); // 배열의 num번째 요소 입력
        array[i] = a;
    }

// 최솟값 찾기
    int MIN;
    MIN = array[0];
    // int n = sizeof(array) / sizeof(array[0]);  // 배열 a의 전체 메모리 크기 ÷ a의 첫 번째 값의 메모리 크기 (= 요소 개수)
    for (i = 0; i < arrayNum; i++)
        if (MIN > array[i]) MIN = array[i];
    // printf("%d\n", MIN); // 검토용 코드
    return (MIN);
}