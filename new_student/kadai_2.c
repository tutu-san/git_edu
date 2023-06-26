#include <stdio.h>

int main(){
    int money = 5000, mark;

    //入力
    printf("点数を入れて:");
    scanf("%d", &mark);

    //計算 メッセージ表示
    if(mark >= 80){
        printf("ごほうびだよ\n");
        money += 2000;
    }else{
        printf("次は頑張ってね\n");
        money -= 1000;
    }

    //結果表示
    printf("今月のおこづかいは%d円です\n", money);

    return 0;
}