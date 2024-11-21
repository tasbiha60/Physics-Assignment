#include<stdio.h>
int main(){
    double lambda,a1,a2,a3,sinTheta1,sinTheta2,sinTheta3;
    int m=1;
    printf("Enter wavelength(in nm): ");
    scanf("%lf", &lambda);
    if(lambda<380 || lambda>750){
        printf("Out of the range.Please enter a valid number\n");
        return 0;
    }
    printf("Enter the three slidth(in micrometers): ");
    scanf("%lf %lf %lf", &a1, &a2, &a3);
    lambda *= 1e-9;
    a1 *= 1e-6;
    a2 *= 1e-6;
    a3 *= 1e-6;
    sinTheta1 = (m*lambda)/a1;
    sinTheta2 = (m*lambda)/a2;
    sinTheta3 = (m*lambda)/a3;
    if(sinTheta1>sinTheta2 && sinTheta1>sinTheta3){
        printf("%.2lf\n", a1*1e6);

    }
      else if(sinTheta2>sinTheta1 && sinTheta2>sinTheta3){
        printf("%.2lf\n", a2*1e6);

    }

  else{  printf("%.2lf\n", a3*1e6);
  }

}
