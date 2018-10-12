//
//  Header.h
//  fourYearMovingAverage
//
//  Created by Melvin Ma on 10/8/18.
//  Copyright © 2018 Melvin Ma. All rights reserved.
//

#ifndef Header_h
#define Header_h


#endif /* Header_h */

double fourYearSum (double firstYear, double secondYear, double thirdYear, double fourthYear)
{
    double total = firstYear+secondYear+thirdYear+fourthYear;
    double finalTotal = total/4;
    std::cout<<finalTotal<<std::endl;
    return finalTotal;
}

