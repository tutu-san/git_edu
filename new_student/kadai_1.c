#include <stdio.h>

int main(){
    int input_num, result_num = 1;
    
    //入力
    printf("n=");
    scanf("%d", &input_num);

    //計算と出力
    for(int i = 1; i <= input_num; i++){
        result_num *= i;
        
        printf("%d! \t%10d\n", i, result_num);
    }

    return 0; 
}

