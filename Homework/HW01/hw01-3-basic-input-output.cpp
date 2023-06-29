/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/
#include <stdio.h>
int main(){
    char Name[50];
    printf("Enter you First Name: ");
    scanf("%s",Name);
    printf("Enter you Last Name: ");
    scanf("%s",Name);
    printf("Fname = %s\n",Name);
    printf("Lname = %ss",Name);
    printf("TC, RMUTL, Chiang Mai, Thailand");
    return 0;
}
