//Write a program that asks for the number of calories and fat grams in a food.
//The program should display the percentage of calories that come from fat. 
//If the calories from fat are less than 30% of the total calories of the food, 
//it should also display a message indicating that the food is low in fat. 
//One gram of fat has 9 calories, so
//Calories from fat = fat grams * 9
//The percentage of calories from fat can be calculated as: calories from fat/total calories 
//Input validation: Make sure the number of calories and fat grams are not less than 0. 
//Also, the number of calories from fat cannot be greater than the total number of calories. 
//If that happens, display an error message indicating that either the calories or fat grams were incorrectly entered.

#include<iostream>
using namespace std;
int main()

{
    float calories, fat, cal_from_fat, percent_cal, low_fat;
    cout<<"Enter Calories in food:";
    cin>>calories;
    cout<<"Enter fat in food:";
    cin>>fat;
    cal_from_fat= fat*9;

    if(calories>0 && fat>0 && cal_from_fat<calories)
    {
        cout<<"Calorie from fat="<<cal_from_fat<<endl;
        percent_cal= (cal_from_fat/calories)*100;
        cout<<"Percent calorie from fat is="<<percent_cal<<"%"<<endl;
        low_fat= 0.3*calories;

        if(cal_from_fat<low_fat)
        {
            cout<<"Food is low in fat"<<endl;
        }
    }

    else
    {
        cout<<"either the calories or fat grams were incorrectly entered!!"<<endl;
    }

    return 0;
}
