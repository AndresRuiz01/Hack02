/**
 *
 * File: Hack02.c
 * Author: Andres Ruiz
 * Date: 2019/01/25
 * Hack 02
 *
 */
 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>
 #include <math.h>

int main(int argc, char **argv) {

  double latitude1,latitude2,longitude1,longitude2;
  double piValue = 3.14159265;
  double radiusEarth = 6371;
  double longitudeDifference;
  double distance;
  double conv; // Converting from degrees to radians

  printf("Input origin coordinates: ");
  scanf("%lf %lf", &latitude1, &longitude1);
  printf("Input desination coordinates: ");
  scanf("%lf %lf", &latitude2, &longitude2);

  longitudeDifference = longitude2 - longitude1;

  conv = (piValue / 180);

  // Distance formula :
  {
    distance = (acos(((sin(latitude1 * conv)) * (sin(latitude2 * conv)))
    + ((cos(latitude1 * conv)) * (cos(latitude2 * conv)) * (cos(longitudeDifference * conv))))) * radiusEarth;
  }

  if (latitude1 > 90 || latitude2 > 90 || longitude1 > 90 || longitude2 > 90) {
    printf("Latitude and Longitude should be between -90 and 90");
}
  else {

  printf("Location Distance\n");
  printf("========================\n");
  printf("Origin:      (%lf, %lf)\n", latitude1, longitude1);
  printf("Destination: (%lf, %lf)\n", latitude2, longitude2);
  printf("Air distance is %lf kms\n", distance);
}
  return 0;
}
