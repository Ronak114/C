#include<stdio.h>
#include<conio.h>
void work(int, int, int);
void moneybelow100();
struct cust_acc{
	long int acc_no;
	char name[30];
	int bal;
} bank[200] = { 1, "Ronak",54786373,
2, "Mrunal", 78478764,
3, "Teja", 98,
4, "Riya", 99,
5, "sharvari", 2078657
};
int main(){
	int acc_num, amount, code;
	printf("Enter your account number : ");
	scanf("%d", &acc_num);
	printf("Enter 1 for deposit and 0 for withdrawal : ");
	scanf("%d", &code);
	if (code){
		printf("Enter amount to be deposit : ");
		scanf("%d", &amount);
	}
	else{
		printf("Enter amount to withdraw : ");
		scanf("%d", &amount);
	}
	work(acc_num, amount, code);
	_getch();
	printf("\nAll members with account balance less than 100 are following \n: ");
	moneybelow100();
	_getch();
	return 0;
}
void moneybelow100(){
	int i;
	for (i = 0; i < 200; i++){
		if (bank[i].bal < 100 && bank[i].bal > 0){
			printf("Name : %s \t", bank[i].name);
			printf("Account Number : %d\n\n", bank[i].acc_no);
		}
	}
}
void work(int acc_num, int amount, int code){
	int i;
	for (i = 0; i < 200; i++)
		if (bank[i].acc_no == acc_num)
			break;
	if (!code){
		if (bank[i].bal - amount < 100){
			printf("\nThe balance is insufficient for the specified withdrawal");
			return;
		}
		else{
			bank[i].bal -= amount;
			printf("\nYour new account balance is : %d", bank[i].bal);
		}
	}
	else{
		bank[i].bal += amount;
		printf("\nYour new account balance is : %d", bank[i].bal);
	}
}