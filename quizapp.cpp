#include <iostream>
#include <valarray>
#define pi 3.14159
//used for converting radians and revolutions
#define revs 360/6.283

void pistonForceTriangle(double top, double side, double hyp, double weight){
    printf("top: %lf\nside: %lf\nhypotenuse: %lf\nweight: %lf\n",top,side,hyp,weight);
    weight *= 9.8;
    double theta = acos(((hyp*hyp)+(side*side)-(top*top))/(2*side*hyp));
    printf("solution: %lf\n\n",tan(theta)*weight);
}
void pistonDistance(double piston, double hyp, double side, double change){
    printf("piston: %lf\nhypotenuse: %lf\nside: %lf\nchange: %lf\n\n",piston,hyp,side,change);
    piston -= change; 
    printf("solution: %lf meters\n\n",sqrt((hyp*hyp)-(piston*piston)) - side);
}
void pistonVelocity(double piston, double hyp, double side, double vel){
    printf("piston: %lf\nhypotenuse: %lf\nside: %lf\nvelocity: %lf\n\n",piston,hyp,side,vel);
    printf("%lf\n\n",vel*(0-2*piston)/(2*sqrt((hyp*hyp)-(piston*piston))));
}
void slidingRod90(double rod, double top, double hyp, double ext){
    printf("rod: %lf\ntop: %lf\nhyp: %lf\next: %lf\n\n",rod,top,hyp,ext);
    double hyp2 = sqrt((ext*ext)+(top*top));
    printf("hyp2: %lf\n\n",hyp2);
    printf("%lf\n\n",(atan(ext/top)*revs) + (acos(((hyp2*hyp2)+(rod*rod)-(hyp*hyp))/(2*hyp2*rod))*revs) - 90);
}

void slidingRod(double rod, double top, double hyp, double ext){//NOT TESTED
    printf("rod: %lf\ntop: %lf\nhyp: %lf\next: %lf\n\n",rod,top,hyp,ext);
    double hyp2 = sqrt((ext*ext)+(top*top));
    double angle = acos(((top*top)+(rod*rod)-(hyp*hyp))/(2*top*rod));
    printf("hyp2: %lf\n\n",hyp2);
    printf("%lf\n\n",(atan(ext/top)*revs) + (acos(((hyp2*hyp2)+(rod*rod)-(hyp*hyp))/(2*hyp2*rod))*revs) - angle);
}

void pistonDistance2(double piston, double hyp, double side, double change, int angle)
{
    printf("\npiston: %lf\nhypotenuse: %lf\nside: %lf\nchange: %lf\nangle: %d\n",piston,hyp,side,change,angle);
    piston -= change;
    //double newangle = 180-angle-;
    printf("\na: %lf\n",asin(sin(angle)/hyp*piston));//might need to change sin and asin units
    //printf("\nsolution: %lf\n",hyp/sin(angle)*sin(newangle) - side);
}

int main(){

pistonDistance(.144,.2274,.176,.04);

return 0;
}