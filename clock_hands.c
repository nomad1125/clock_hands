/**	
 *	clock_hands.c
 *	based on: 
 *	https://www.geeksforgeeks.org/calculate-angle-hour-hand-minute-hand/
 */

#include <stdio.h>
#include <stdlib.h>

int min(int x, int y) 
{
	return (x < y) ? x:y;
}

int displayClockHands(double hours, double minutes)
{
	if (hours < 0 || minutes < 0 || hours > 12 || minutes > 60)
	{
		printf("Wrong input\n");
		return 99;
	}

	int hour_angle = 0.5 * (hours * 60 + minutes);
	int minute_angle = 6 * minutes;

	int angle = abs(hour_angle - minute_angle);

	angle = min(360-angle, angle);

	return angle;
}

int main(int argc, char const *argv[])
{
	printf("%d\n", displayClockHands(9, 60));
	printf("%d\n", displayClockHands(3, 30));
	return 0;
}