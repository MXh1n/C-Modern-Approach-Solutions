#include <stdio.h>

int main(void){
    //This program displays the closest departure and arrival time according to the time entered by user

    //declaring variables
    int hour, min;
    int time_min;
    int d1_min, d2_min, d3_min, d4_min, d5_min, d6_min, d7_min, d8_min;//Departure times in minutes
    int m1_min, m2_min, m3_min, m4_min, m5_min, m6_min, m7_min, m8_min;//Midpoints of the departure times
    

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    time_min = hour * 60 + min;
    
    //Converting departure times in mins
    d1_min = 8 * 60 + 0;
    d2_min = 9 * 60 + 43;
    d3_min = 11 * 60 + 19;
    d4_min = 12 * 60 + 47;
    d5_min = 14 * 60 + 0;
    d6_min = 15 * 60 + 45;
    d7_min = 19 * 60  + 0;
    d8_min = 21 * 60 + 45;

    //calculating midpoints between each departure time in mins
    m1_min = (d1_min + d2_min)/2; 
    m2_min = (d2_min + d3_min)/2;
    m3_min = (d3_min + d4_min)/2;
    m4_min = (d4_min + d5_min)/2;
    m5_min = (d5_min + d6_min)/2;
    m6_min = (d6_min + d7_min)/2;
    m7_min = (d7_min + d8_min)/2;
    m8_min = (((24 * 60 - d8_min) + d1_min)/2) - (24 * 60 - d8_min); /*This following formula of m8_min determines                                                                        the midpoint between 9:45pm and 8:00am.
                                                                       Remember after 12:00am the time in minutes                                                                         should become 0 min again so we subtract
                                                                       from (24 * 60) <-- 1 day in min the time 
                                                                       until 9:45 in mins */

    //Comparing time_min with midpoint times
    if (time_min >= m8_min && time_min < m1_min){
        printf("Closest departure time is 8:00 A.M., arriving at 10:16 A.M.\n");
    }
    else if (time_min >= m1_min && time_min < m2_min){
        printf("Closest departure time is 9:43 A.M., arriving at 11:52 A.M.\n");
    }
    else if (time_min >= m2_min && time_min < m3_min){
        printf("Closest departure time is 11:19 A.M., arriving at 1:31 P.M.\n");
    }
    else if (time_min >= m3_min && time_min < m4_min){
        printf("Closest departure time is 12:47 P.M., arriving at 3:00 P.M.\n");
    }
    else if (time_min >= m4_min && time_min < m5_min){
        printf("Closest departure time is 2:00 P.M., arriving at 4:08 P.M.\n");
    }
    else if (time_min >= m5_min && time_min < m6_min){
        printf("Closest departure time is 3:45 P.M., arriving at 5:55 P.M.\n");
    }
    else if (time_min >= m6_min && time_min < m7_min){
        printf("Closest departure time is 7:00 P.M., arriving at 9:20 P.M.\n");
    }
    else if ((time_min >= m7_min && time_min < (24 * 60)) || (time_min >= 0 && time_min < m8_min)){
        printf("Closest departure time is 9:45 P.M., arriving at 11:58 P.M.\n");
    }


    return 0;
}
