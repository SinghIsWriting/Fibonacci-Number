/*

Fibonacci numbers - 0, 1, 1, 2, 3, 5, 8, 13, 21, ...

*/
#include <stdio.h>

int fibonacci(int num){
    if (num == 1 || num == 2){
        return num - 1;
    }
    else{
        if (num==19){
            printf("It's 19 here\n");
        }
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int iterative_fibonacci(int num){
    int fibo[num];
    fibo[0] = 0;
    fibo[1] = 1;
    if (num == 1 || num == 2)
    {
        return num - 1;
    }
    else {
        for (int i = 2; i<num; i++){
            fibo[i] = fibo[i-1] + fibo[i-2];
        }
        return fibo[num-1];
    }
}

int fibonacci_with_iteration(int num){
    int a=0, b=1;
    for (int i=0; i<num-1; i++){
        b = a+b;
        a = b-a;
    }
    return a;
}

int main()
{
    /* fibonacci number */
    int n;
    printf("Welcome to my program to get fibonacci number!\n");
    printf("Enter the number n for nth fibonacci number: \n");
    scanf("%d", &n);

    // Using recusrion
    printf("The %dth fibonacci number using recursion is %d\n", n, fibonacci(n));   // 42th fibonacci = 165580141

    // Using iteration
    printf("The %dth fibonacci number using iteration is %d\n", n, iterative_fibonacci(n));    //  42th fibonacci = 165580141

    // Using iteration
    printf("The %dth fibonacci number using iteration is %d\n", n, fibonacci_with_iteration(n));    //  42th fibonacci = 165580141

    return 0;
}




