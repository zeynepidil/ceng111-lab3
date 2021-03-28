#include<stdio.h>

int main(void){
	//Question1
	int customid;
	char customname[20];
	int unit;
	float chg,surchrg=0,gramt,netamt;
	
	printf("Input Customer ID:");
	scanf("%d",&customid);
	
	printf("Input the Customer Name:");
	scanf("%s",customname);
	
	printf("Input the unit consumed by the customer:");
	scanf("%d",&unit);
	
	if(unit<200)
		chg=1.20;
	else if(unit>=200&& unit<400)
	    chg=1.50;
	else if(unit>=400 && unit<600)
		chg=1.80;
	 else
	 chg=2.00;
	 gramt=unit*chg;
	 if(gramt>300)
	 surchrg=gramt*15/100.0;
	 netamt=gramt+surchrg;
	 
	 if(netamt<100)
	 netamt=100;
	 
	 printf("\nElectricity Bill\n");
	 printf("Customer IDNO           :%d\n",customid);
	 printf("Customer Name           :%s\n",customname);
	 printf("unit consumed           :%d\n",unit);
	 printf("Amount Charges @Rs.%4.2f per unit :%8.2f\n",chg,gramt,netamt);
	 printf("Surcharge Amount        :%15.2f\n",surchrg);
	 printf("Net Amount Paid By the Customer  :%8.2f\n",netamt);
	 return 0;

	//Question2	
	int grade;
	
	printf("Enter marks:");
	scanf("%d",&grade);
	
	if(grade>=90 && grade<=100){
		printf("Your grade is A",grade);
	}
   	else if(grade>=80&& grade<90){
   		printf("Your grade is B",grade);
	   }
	else if(grade>=70&& grade<80){
		printf("Your grade is C",grade);
	}
	else if(grade>=60&& grade<70){
		printf("Your grade is D",grade);
	}
	else if(grade>=50&&grade<60){
		printf("Your grade is E",grade);
	}
	else if(grade>=0&& grade<50){
		printf("Your grade is F",grade);
	}
    return 0;
	
    
	//Question3
	int projectnumber;
  	char ch;
 	char $;
	int cost;
 	 printf("Choose a project type:");
 	 scanf("%c",&ch);
     scanf("%c",&$);
  if(ch=='s'){
    printf("Enter project number:");
    scanf("%d",&projectnumber);
    if(projectnumber<3){
      cost=1500*$*projectnumber;
      printf("%d ",cost);
      printf("%c",'$'); 
      
    }
    else if(projectnumber>=3 && projectnumber<=5){
      cost=1000*$*projectnumber;
      printf("%d",cost);
      printf("%c",'$'); 
    }
    else if(projectnumber>5){
      cost=750*$*projectnumber;
      printf("%d",cost);
      printf("%c",'$'); 
    }
  }
      if(ch=='m'){
       printf("Enter project number:");
       scanf("%d",&projectnumber);
        if(projectnumber<3){
        cost=2500*$*projectnumber;
        printf("%d",cost);
        printf("%c",'$'); 
      }
        else if(projectnumber>=3&&projectnumber<=5){
        cost=2000*$*projectnumber;
        printf("%d",cost);
		printf("%c",'$');       
      }
        else if(projectnumber>5){
        cost=1750*$*projectnumber;
        printf("%d",cost);
        printf("%c",'$'); 
      }
  }
  
  
    if(ch=='l'){
        printf("Enter project number:");
        scanf("%d",&projectnumber);
      if(projectnumber<3){
        cost=4500*$*projectnumber;
        printf("%d",cost);
        printf("%c",'$'); 
      }
        else if(projectnumber>=3 && projectnumber<=5){
          cost=4000*$*projectnumber;
          printf("%d",cost);
          printf("%c",'$'); 
        }
        else if(projectnumber>5){
          cost=3500*$*projectnumber;
          printf("%d",cost);
		  printf("%c",'$');        }
        }  
        return 0;
  
	
	
	//Question4
	int number,max;
  	int firstdigit,seconddigit;

	printf("Enter a two-digit number:");
	scanf("%d",&number);
    printf("Enter the number of first digit:");
    scanf("%d",&firstdigit);
    printf("Enter the number of second digit:");
    scanf("%d",&seconddigit);
      
    if(number>=10 && number<=100){
     if(firstdigit>seconddigit) {
	       firstdigit=max;
         printf("First digit is greater than second digit");
         scanf("%d %d",&firstdigit,&max);
    }
	   else {
        seconddigit=max;
        printf("Second digit is greater than first digit");
        scanf("%d %d",&seconddigit,&max);
    }
    }
	return 0;
	
	//Question5
    int numberofsensors;
    char $;
   	int price;
    printf("Enter the number of sensors:");
    scanf("%d",&numberofsensors);
    scanf("%c",&$);

    if(numberofsensors<100){
    price=5*$*numberofsensors;
    printf("%d ",price);
    printf("%c",'$');
  }
    else if(numberofsensors>=100 && numberofsensors<1000){
    price=4*$*numberofsensors;
    printf("%d",price);
    printf("%c",'$');
}
    else if(numberofsensors>=1000){
    price=3*$*numberofsensors;
    printf("%d",price);
    printf("%c",'$');
    return 0;
}
	//Question6
	int side1,side2,side3;
    printf("Enter three sides:");
    scanf("%d %d %d",&side1,&side2,&side3);
     if((side1+side2>side3)&&(side1+side3>side2)&&(side2+side3>side1)){
	  printf("Triangle is valid");
}
	else{
		printf("Triangle is not valid");
	}
	return 0;
}

