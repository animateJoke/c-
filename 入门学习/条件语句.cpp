#include<stdio.h>
 
int main()
{
    int num;
 
    printf("����һ������ : ");
    scanf("%d",&num);
 
    /*(num%2==0)?printf("ż��"):printf("����");*/

	/*if(num%2==0){
		printf("ż��");
	}else{
		printf("����");
	}*/

	switch(num%2){
		case 0:
			printf("ż��");
			break;
		case 1:
			printf("����");
			break;
		default:
			break;
	}
}