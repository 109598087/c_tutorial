#include <stdio.h>

//int main() {
//    int i;
//    for (i = 0; i < 5; i++) {
//        int number;
//        scanf("%d", &number);
//        int score = 0;
//        scanf("%d", &score);
//        if (score == 100) {
//            printf("%d: A\n", number);
//        } else if (score >= 90 && score < 100) {
//            printf("%d: B\n", number);
//        } else if (score >= 80 && score < 90) {
//            printf("%d: C\n", number);
//        } else if (score >= 70 && score < 80) {
//            printf("%d: D\n", number);
//        } else if (score >= 60 && score < 70) {
//            printf("%d: E\n", number);
//        } else {
//            printf("%d: F\n", number);
//        }
//    }
//
//}
//
//// sizeof: 查詢陣列所佔的記憶空間 -> byte
//int main() {
//    // 一個int 佔 4Byte
//    int a[10];
//    printf("sizeof(int):　%d\n", sizeof(int));
//    printf("sizeof(a): %d\n", sizeof(a));
//    printf("%d\n", sizeof(a) / sizeof(int));
//
//    printf("----------------------------------------------\n");
//
//    // 一個double/float 佔 8Byte /4Byte
//    printf("sizeof(double): %d\n", sizeof(double));
//    printf("sizeof(float): %d\n", sizeof(float));
//
//    printf("----------------------------------------------\n");
//
//    // 一個char 佔 1Byte
//    printf("sizeof(char): %d\n", sizeof(char));
//}


//int main() {
//    int score1[5];
//
//    int score2[5] = {65, 72, 84, 33, 45};
//
//    int score3[] = {65, 72, 84, 33, 45};
//
////    printf("%d\n", score2[0]); //65
////    printf("%d\n", score2[2]); //84
//
//    printf("%d\n", score2[2]); //84
//    score2[2] = 100;
//    printf("%d\n", score2[2]); //100
//}

//int main() {
//    int score1[5] = {65, 72, 84, 33, 45};
//    int score2[5] = {0, 0, 0, 0, 0};
//    int i;
//    for (i = 0; i < 5; i++) {
//        printf("%d\n", score1[i]);
//    }
//}

//int main() {
//
//    int i;
//    int score;
//    int score1[10] = {0};
//    int j = 0;
//    int score2[10] = {0};
//    int k = 0;
//    for (i = 0; i < 10; i++) {
//        scanf("%d", &score);
//        if (score >= 60) {
//            score1[j] = score;
//            j++;
//        } else {
//            score2[k] = score;
//            k++;
//        }
//    }
//
//    for (i = 0; i < 10; i++) {
//        if (score1[i] != 0) {
//            printf("%d\n", score1[i]);
//        }
//    }
//    printf("------------------------\n");
//    for (i = 0; i < 10; i++) {
//        if (score2[i] != 0) {
//            printf("%d\n", score2[i]);
//        }
//    }
//
//}


//int main() {
//    int a[10][10] = {0};
//    int i, j;
//    for (i = 0; i < 10; i++) {
//        for (j = 0; j < 10; j++) {
//            printf("%d ", a[i][j]);
//        }
//        printf("\n");
//    }
//}

//int main() {
//    int a[10][10] = {0};
//    int i;
//    int j;
//
//    for (i = 0; i < 10; i++) {
//        for (j = 0; j < i + 1; j++) {
//            a[i][j] = 1;
//        }
//    }
//    for (i = 0; i < 10; i++) {
//        for (j = 0; j < 10; j++) {
//            printf("%d ", a[i][j]);
//        }
//        printf("\n");
//    }
//}

int main() {
    int a[10][10] = {0};
    int i;
    int j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10 - i; j++) {
            a[i][j] = 1;
        }
    }
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

