import cmath

def pistonDistance2(piston, hyp, side, angle, extension):
    piston -= extension
    angleRads = angle * 6.283/360
    x = cmath.asin(cmath.sin(angleRads)/hyp*piston)
    print(x*360/6.283)
    y = 180 - angle - x*360/6.283
    print((cmath.sin(y)/cmath.sin(angle)*hyp)-side)

def pistonForceTriangle2(piston,slider,rod,weight,theta):
    weight *= 9.8
    thetaRads = theta * 6.283/360
    angleB = cmath.asin(cmath.sin(thetaRads)/rod*piston)
    leftangle = 90 - theta
    rightangle = 180 - theta - leftangle - angleB
    solution = cmath.tan(rightangle*6.283/360)*weight
    print("\nsolution: ",solution,"\n")
