#include<stdio.h>
#include<math.h>
#define PI 3.141592653589793
int main(){
    double lambda_green = 530e-9;
    int m_green = 3;
    double theta_green = 65.0 * (PI/180.0);
    double lambda_red = 700e-9;
    int m_red = 2;
    double d = (m_green * lambda_green)/ sin(theta_green);
    double theta_red = asin((m_red * lambda_red)/d);
    theta_red = theta_red * (180.0/PI);
    printf("The angle for the second-order bright spot of red light is: %.2f degrees\n", theta_red);
    return 0;

}
