#include <bits/stdc++.h>
using namespace std;


int main(){
	
	
	int ducks;
	double bread_nutrition, bread_price;
	
	printf("How many Ducks? ");
	scanf("%d", &ducks);
	
	printf("How many ducks does a single loaf feed? ");
	scanf("%lf", &bread_nutrition);
		
	printf("Bread price per loaf? ");
	scanf("%lf", &bread_price);
	
	if (bread_nutrition <= 0.)
	{
		printf("Invalid Bread Nutrition!");
		return 0;
	}
	
	if(bread_price <= 0.0)
	{
		printf("Negative price not allowed!");
		return 0;
	}
	
	if(bread_nutrition <= 0.0)
	{
		printf("Have you ever seen losing energy by feeding? Just Curious!");
		return 0;
	}
	
	double total_price = ceil(ducks/bread_nutrition) * bread_price;
	
	printf("Money to spend on Ducks: %lf\n", total_price);
	
	return 0;

}
