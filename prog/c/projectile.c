// projectile.c - dragless projectile motion analysis

#include <math.h>
#include <stdio.h>

#define G0 9.80665
#define PI 3.141592654

int main(void) {
	double angle, speed, peak, range, time;

	printf("Angle (deg) = ");
	scanf("%lg", &angle);

	printf("Speed (m/s) = ");
	scanf("%lg", &speed);

	angle *= PI / 180;

	peak  = pow(speed * sin(angle), 2) / (2 * G0);
	range = pow(speed, 2) * sin(2 * angle) / G0;
	time  = 2 * speed * sin(angle) / G0;

	printf("Peak  (m)   = %lg\n", peak);
	printf("Range (m)   = %lg\n", range);
	printf("Time  (s)   = %lg\n", time);
}
