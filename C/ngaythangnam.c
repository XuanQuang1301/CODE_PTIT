#include <stdio.h>

struct Date{
	int ngay;
	int thang; 
	int nam;
};

void in(struct Date d){
	scanf("%d%d%d", &d.ngay, &d.thang, &d.nam);
}
void printfDate(struct Date d){
	printf("%d/%d/%d", d.ngay, d.thang, d.nam);
}
int main (){
	struct Date myDate;
	in(myDate);
	printfDate(myDate);
}