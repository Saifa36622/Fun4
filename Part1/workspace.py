import roboticstoolbox as rtb
import numpy as np

from spatialmath import SE3
from math import pi
import matplotlib.pyplot as plt
from spatialmath.base import *
from spatialmath import *

robot = rtb.DHRobot(
    [
        rtb.RevoluteMDH(d=0.2),
        rtb.RevoluteMDH(alpha = pi/2,offset=pi/2),
        rtb.RevoluteMDH(a=0.25),

    ],tool = SE3.Tx(0.28),
    name = "RRR_Robot"
)

q0 = np.random.uniform(-np.pi, np.pi, robot.n)

fk = robot.fkine(q0)

print(fk)

fk_sol = fk.t

x = fk_sol[0]
y = fk_sol[1]
z = fk_sol[2]

print(x,y,z)

target_pose = SE3(x,y,z)
mask = [1, 1, 1, 0, 0, 0]
solute = robot.ikine_LM(target_pose,mask=mask)

print(solute.q)
if solute.success :
    print("yeah")
else :
    print("wow")
# q = [0,0,0]
# robot.plot(q)
# input("Enter")

