 #include<stdio.h>
#include<string.h>

int digitValue(char);

int main(){

    char roman[1000];
    int i=0;
    long int number =0;
   
    printf("Enter any roman number (Valid digits are I, V, X, L, C, D, M):  \n");
    scanf("%s",roman);
   
    while(roman[i]){
        
         if(digitValue(roman[i]) < 0){
             printf("Invalid roman digit : %c",roman[i]);
             return 0;
         }
            
         if((strlen(roman) -i) > 2){
             if(digitValue(roman[i]) < digitValue(roman[i+2])){
                 printf("Invalid roman number");
                 return 0;
             }
         }

         if(digitValue(roman[i]) >= digitValue(roman[i+1]))
             number = number + digitValue(roman[i]);
         else{
             number = number + (digitValue(romani+1]) - digitValue(roman[i]));
             i++;
         }
         i++;
    }
        
    printf("Its decimal value is : %ld",number);
   
    return 0;

}

int digitValue(char c){

    int value=0;

    switch(c){
         case 'I': value = 1; break;
         case 'V': value = 5; break;
         case 'X': value = 10; break;
         case 'L': value = 50; break;
         case 'C': value = 100; break;
         case 'D': value = 500; break;
         case 'M': value = 1000; break;
         case '\0': value = 0; break;
         default: value = -1; 
    }

    return value;
}
