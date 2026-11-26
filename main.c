#include <stdio.h>

int main(void) {
    char name[20];
    int age;

    printf("名前と年齢を入力してください: ");
    scanf("%s %d", name, &age);

    printf("%s さんは %d 歳です。\n", name, age);

    return 0;
}