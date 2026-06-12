/************************************
 * Name    : Sensor_data.c
 * Purpose : Monitor sensor data and execute the required jumping statements.
 * Author  : Navin Chakravarthy Kamalakannan
 ************************************/
#include <stdio.h>

int main()
{
    int sensor_data[5] = {10, -1, 25, 40, -1};
    int i;

    for(i = 0; i < 5; i++)
    {
        if(sensor_data[i] == -1)
        {
            continue;   // Invalid sensor reading
        }

        if(sensor_data[i] > 30)
        {
            printf("Over Temperature!\n");
            break;      // Stop monitoring
        }

        printf("Sensor = %d\n", sensor_data[i]);
    }

    return 0;
}