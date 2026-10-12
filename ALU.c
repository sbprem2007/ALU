#include <stdio.h>

void bi(int dig)
{
    if(dig == 0){
        printf("0");
    }
    else{
    int num = dig;
    int bin[7];
    int b;
    for(int i = 0; num != 0;i++){
        bin[i]=num%2;      
        num = num/2;
        b=i;
    }
    for(int i = b;i>=0;i--){
    printf("%d",bin[i]);
    }}
    printf("\n");
}
void add(int a,int b){
    int add = a+b;
    printf("Sum = %d :- ",add);
    bi(add);
}
void sub(int a,int b){
    int sub = a-b;
    printf("Difference = %d :- ",sub);
    bi(sub);
}
void mult(int a,int b){
    int mult = a*b;
    printf("Product = %d :- ",mult);
    bi(mult);
}
void or(int a,int b){
    int or = a|b;
    printf("OR = %d :- ",or);
    bi(or);
}
void and(int a,int b){
    int and = a & b;
    printf("AND = %d :- ",and);
    bi(and);
}
void xor(int a,int b){
    int xor = a^b;
    printf("XOR = %d :- ",xor);
    bi(xor);
}
int main(){
    int num1;
    int num2;
    printf("Enter A Number 1 :- ");
    scanf("%d",&num1);
    printf("Enter A Number 2 :- ");
    scanf("%d",&num2);
    int num;
    printf("Enter The Number To Perform The Action\n");
    printf("1 -> Addition\n");
    printf("2 -> Subtraction\n");
    printf("3 -> Multiplication\n");
    printf("4 -> Bitwise OR\n");
    printf("5 -> Bitwise AND\n");
    printf("6 -> Bitwise XOR\n");
    scanf("%d",&num);
    printf("%d = ",num1);
    bi(num1);
    printf("%d = ",num2);
    bi(num2);
    if(num == 1){
    add(num1,num2);}
    if(num == 2){
    sub(num1,num2);}
    if(num == 3){
    mult(num1,num2);}
    if(num == 4){
    or(num1,num2);}
    if(num == 5){
    and(num1,num2);}
    if(num == 6){
    xor(num1,num2);}

}