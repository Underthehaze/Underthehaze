// 5.7 Final Exam: Catered Family Dinner
// August 26,2021
// ISmael Galarza

#include<stdio.h>
void swap ( float *A_total, float *C_total); // function prototype for the swap.  

    int main() {
    
	
	int counter;			// declare the counter for the FOR loop
    float A_Meal[5]={10,10,15,7.5};         //Adult meal costs
    float C_Meal[3]={7.5,7.5,8.5,};          // child meal costs
	float A_total=0, C_total=0, percentage = 45;

    for( counter = 0; counter < 4; counter++)                    //calculating total cost of adult and child meals
    {
         A_total += A_Meal[counter];  // calucalting the total for adult
         C_total += C_Meal[counter];	// calculating for total children meal
    }

    float Total_cost= A_total+C_total;                      //total meal cost
    float Total_donation= (percentage*Total_cost)/100;      //total donation cost

    
    printf("Welcome to the Family Dinner Catering Service\n\n"); // print statement for the user.
      printf("\n");
    printf("Meal sales for Adults:\n");
         printf("\n");
         

        
    for( counter = 0; counter < 4; counter++)                                    //printing adult meals
    {
        printf("\nAdult catered meal Prices: $ %.2f",A_Meal[counter]);
    }
    
    swap(&A_total, &C_total); 	// the swap of the Meals 	
											
    printf("\n\nTotal Adult Catered Meal Prices are $ %.2f",C_total);
      printf("\n");
     printf("\nMeal sales for Children:\n");
       printf("\n");
    
	
	for( counter = 0; counter < 3; counter++)                                    //printing child meals
    {
        printf("\nChildren catered meal Prices: $ %.2f",C_Meal[counter]);
    }
    printf("\n\nTotal Children Catered Meal Prices are $ %.2f",A_total);
     printf("\n");
    printf("\nTotal cost for Catered meals are $ %.2f",Total_cost);
      printf("\n");
    
    printf("\nTotal Donation for Charity is $ %.2f",Total_donation);
    printf("\n");
     
     return 0;
}

void swap(float *A_total, float *C_total) // function definitions that determines the integer swap
{
	
float temp = *A_total;
*A_total = *C_total;
*C_total = temp;
	
	
}
