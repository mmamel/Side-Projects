//Created October 8, 2018
//  main.cpp
//  fourYearMovingAverage
//
//  Created by Melvin Ma on 10/8/18.
//  Copyright © 2018 Melvin Ma. All rights reserved.
// THINGS TO ADD: error catching for bad input, a conversion for entering values in milliones
//THINGS TO ADD: change if and else to try and catch? add a retry function.
// Should i change nYear-3 to a new variable? optimization?
//Things to learn: how dynamic array works.
#include <numeric>
#include <iostream>
#include "Header.h"

int main(int argc, const char * argv[]) {
    
    
    int nYears=0;
    std::cout << "How many years you want to enter?" << std::endl;
    std::cin >> nYears;
    if(nYears >3)
    {
    int *arrayYear = new int[nYears];
    int i=0;
    int money;
    for( i=0; i<nYears; i++)
    {
        std::cout << "Enter the profit" << std::endl;
        std::cin >> money;
        arrayYear[i] = money;
    }
  
    
    int yearOne=0;
   int yearTwo=0;
    int yearThree=0;
    int yearFour=0;
    int *arrayFourYear = new int[nYears-3];
        for (i=0; i< nYears-3; i++)
        {
            double movingAverage;
            //does typecasting this save memory?
            yearOne= (double)arrayYear[i];
            yearTwo= (double)arrayYear[i+1];
            yearThree = (double)arrayYear[i+2];
            yearFour = (double)arrayYear[i+3];
            
            movingAverage = fourYearSum(yearOne,yearTwo,yearThree,yearFour);
            arrayFourYear[i] = movingAverage;
        }
    for (i=0; i<nYears-3;i++)
    {
        std::cout<<arrayFourYear[i];
    }

    delete[] arrayFourYear;
    
    std::cin.ignore();

    /*
    for (i=0; i<nYears; i++)
    {
        std::cout << arrayYear[i]<<std::endl;
    }*/
    
    
    return 0;
    }
    else{
        std::cout<<"Not enough data";
    }
}
