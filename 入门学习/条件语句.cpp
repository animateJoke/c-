#include<stdio.h>
 
int main()
{
    int num;
 
    printf("输入一个数字 : ");
    scanf("%d",&num);
 
    /*(num%2==0)?printf("偶数"):printf("奇数");*/

	/*if(num%2==0){
		printf("偶数");
	}else{
		printf("奇数");
	}*/

	switch(num%2){
		case 0:
			printf("偶数");
			break;
		case 1:
			printf("奇数");
			break;
		default:
			break;
	}
}