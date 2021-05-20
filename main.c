#include <stdio.h>
#include <string.h>
#include <stdlib.h>



//int main() {
//    printf("Hello, World!\n");
//    return 0;
//}

//int main() {
//    // int
//    int a = 0;
//    scanf("%d", &a);
//    printf("%d\n", a);

//    // float
//    float a = 0;
//    scanf("%f", &a); // 13
//    printf("%f\n", a); // 13.000000
//    printf("%.1f\n", a); // 13.0
//    printf("%.2f\n", a); // 13.00

//    // float
//    double a = 0;
//    scanf("%lf", &a); // 13
//    printf("%lf\n", a); // 13.000000
//    printf("%.1lf\n", a); // 13.0
//    printf("%.2lf\n", a); // 13.00

//    // char
//    char a = 'a'; // 單引號
//    scanf("%c", &a);
//    printf("%c", a);

//    // String
//    char a[10] = "hello"; // 雙引號
//    scanf("%s", a); //這裡不用加 &
//    printf("%s", a);

//    return 0;
//}


//int main() {
//    // 字串比較 strcmp
//    // 如果返回 0 -> 兩字串一樣
//    char str1[10] = "abc";
//    char str2[10] = "abc";
//    int a = strcmp(str1, str2);
//    printf("%d", a);
//
//    // 如果返回不是 0 -> 兩字串不一樣
//    char str3[10] = "abc";
//    char str4[10] = "abcdef";
//    int b = strcmp(str3, str4);
//    printf("%d", b);
//}

//int main() {
//    // password
//    char password[10] = "hello"; // 設定密碼為: hello
//    char input[10];
//    scanf("%s", input);
//    if (strcmp(password, input) == 0){              // 密碼正確
//        printf("Password is correct");
//    }else{                                          // 密碼錯誤
//        printf("Wrong password");
//    }
//}

//int main() {
////    // password 輸入三次
//    int i;
//    for (i = 0; i < 3; i++) { // for 固定寫法
//        char password[10] = "hello"; // 設定密碼為: hello
//        char input[10];
//        scanf("%s", input);
//        if (strcmp(password, input) == 0) {              // 密碼正確
//            printf("Password is correct");
//        } else {                                          // 密碼錯誤
//            printf("Wrong password");
//        }
//    }
//
//}

// HW7
int main() {

    int i;
    // 計算A玩家分數
    double A_point = 0.0;
    for (i = 0; i < 3; i++) {
        char card[10];
        scanf("%s", card);
        if (strcmp(card, "A") == 0) {
            A_point += 1;
        } else if (strcmp(card, "J") == 0 || strcmp(card, "Q") == 0 || strcmp(card, "K") == 0) {
            A_point += 0.5;
        } else {
//        A_point += card;
            A_point += atof(card);
        }
    }
    // 計算B玩家分數
    double B_point = 0.0;
    for (i = 0; i < 3; i++) {
        char card[10];
        scanf("%s", card);
        if (strcmp(card, "A") == 0) {
            B_point += 1;
        } else if (strcmp(card, "J") == 0 || strcmp(card, "Q") == 0 || strcmp(card, "K") == 0) {
            B_point += 0.5;
        } else {
//        A_point += card;
            B_point += atof(card);
        }
    }

    if (A_point > 10.5) {
        A_point = 0.0;
    }
    if (B_point > 10.5) {
        B_point = 0.0;
    }
    printf("%.1f\n", A_point);
    printf("%.1f\n", B_point);

    if (A_point > B_point) {
        printf("A Win.\n");
    } else if (A_point < B_point) {
        printf("B Win.\n");
    } else {
        printf("Tie.\n");
    }


}





