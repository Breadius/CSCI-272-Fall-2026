
#include <iostream> 


//Preforms calculation to find the sum and count, uses references to the values could be updated
void calculateMultiples(int n, int &sum, int &count){
    sum = 0;
    count = 0;
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0){
            sum += i;
            count++;
        }
    }
}

//Introduced to get a number out of the user in order to then perform the calculations later
int getNumber(){
    int input = 0;
    std::cout <<"Enter a number: ";
    std::cin >> input; 
    return input; 
}

int main(){
    //Calls on the function to get user input
    int number = getNumber(); 

    //Creates variabls to store sum and count values
    int totalSum = 0; 
    int totalCount = 0;

    //Calls on the function to perform calculations with results by reference
    calculateMultiples(number, totalSum, totalCount);
    
    //Prints out the results
    std::cout <<"The sum of numbers divided by 3: " <<totalSum << std::endl;
    std::cout <<"The count of numbers divisible by 3: " <<totalCount << std::endl;
    return 0; 
}
