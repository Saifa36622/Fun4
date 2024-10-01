# **Fun4**

## **Basic installation** 

In this project we will develop a little fun turtle project using simple libraly on ubuntu  So Ubuntu (22.04 LTS is recommend) with Ros humble 

* [Ubuntu](https://releases.ubuntu.com/jammy/)
* [ROS_Humble](https://docs.ros.org/en/humble/Installation.html)

then clone this workspace in to your terminal 


```
git clone https://github.com/Saifa36622/Fun4.git
```
paste this in the terminal or powershell of your prefer and then use this command to navigate to the working directory
```
cd Fun4
```
then use this command in the workspcace 

```
colcon build
```
and then 

```
source install/setup.bash
```

In this project there is some dependency (if you dont have you can follow this to dowload the package)

* [teleop_twist_keyboard](https://index.ros.org/p/teleop_twist_keyboard/)


## **System architecture** 

![Screenshot from 2024-09-28 15-55-25](https://github.com/user-attachments/assets/b02b2e09-3507-49eb-af59-d42eecb2184b)

this is the system architecture that will show how this system work ,In the main part we develop mainly 2 node as follow 

### 1.Controller node

this node will be the main source that will control the robot 

![image](https://github.com/user-attachments/assets/888efcac-2c3e-4d9f-b10a-a30bb311c5bb)

from this node there is going to be 3 main mode 
 - mode 1 Inverse Pose Kinematics mode 
 - mode 2 Tele-operation mode
 - mode 3 Auto mode <br>
 all this mode is determine by a custom service that going to input by a user like this

![Screenshot from 2024-09-28 16-03-49](https://github.com/user-attachments/assets/05d591fd-ddf5-4ec6-a628-c06e5562cfd6)

and in the custom service we going to have a parameter as follow 

![Screenshot from 2024-09-28 15-56-06](https://github.com/user-attachments/assets/6646a508-898b-4f91-a1a3-44a674d050fc)

So when the user request service in to this node the node will response with boolean according to the condition in the mode that been input 
  #### mode 1 
  In this mode we will do the calculation according to the input x y z from custom service ,So there is no need to provide more data
  #### mode 2

![Screenshot from 2024-09-28 16-10-02](https://github.com/user-attachments/assets/f37ec97f-2cbc-4486-a63b-1ede244dc814)

This node is goning to be a Tele-op node ,So it will subscribe the topic "cmd_vel" to this node 

  #### mode 3

![Screenshot from 2024-09-28 16-12-22](https://github.com/user-attachments/assets/6f4df2de-d0e1-4e00-8723-2dea6677d119)

This node is will need to publish to "/request_target" to request target from the random node and subscribe to "/target"  to get the input 

and then when the target node finish calculation nomatter which mode ,this node will publish the joint state and end_effector_position like this 

![image](https://github.com/user-attachments/assets/54e0daf1-4ca7-4935-bea8-fbc1bcf6f494)

as the image ,the joint state and end_effector_position will be publish to robot_state_publisher and then to visualize it in to rviz


### 2.Random node

this node will random the possible position from the robot workspace and then publish it 

![image](https://github.com/user-attachments/assets/b326dffd-e436-47a8-aae7-bad8b4f4a489)

as the image ,this node will wait for the request from the controller node in topic "/request_target" and then generate the random the possible position and publish it to "/target"

## work space 
 So to know the robot work space ,I create the DH parameter of the RRR robot 
 
 ![Screenshot from 2024-09-28 17-18-10](https://github.com/user-attachments/assets/3fea447b-5478-4f95-bdb7-c0694fa798d9)

and the loop apply each joint -pi till pi and then do the foward kinematic in each angle in every joint and then keep the position x y x and then use that position to plot the max and min workspace of the robot 

![Screenshot from 2024-09-28 17-19-15](https://github.com/user-attachments/assets/21d6776c-7cb9-4ac5-8651-bc604ae2aa25)

![Screenshot from 2024-09-28 17-20-46](https://github.com/user-attachments/assets/3dcdf3f8-a068-4644-a963-4019f930e9af)

(for this part I use the code from the HW_kineatic)
## How to use each mode 

### mode 1 

first you need to be in the workspace and then run this command to open the launch file 

```
ros2 launch example_description fun.launch.py
```

wait 2 - 3 secound the rviz will show this picture 

![image](https://github.com/user-attachments/assets/fc809115-bd51-4414-b8a2-a0e1106de8ad)

So to use mode 1 you need to use this command in anoter source terminal as example 

```
ros2 service call /Mode custom_interface/srv/Basic "mode:
  data: 1
x:
  data: -0.035594417844439424
y:
  data: 0.0996378227856056
z:
  data: 0.6775170866211754" 
```

if you input the possible position ,The service will respon **True**

![image](https://github.com/user-attachments/assets/941ba878-9803-4888-94af-600721d5d6a6)

and in the lauch file terminal the node will log the solution like the image below 

![image](https://github.com/user-attachments/assets/1cd619d2-451d-48aa-9d81-86b99e09c3f4)

and the robot will start to move in to the input solution 

![image](https://github.com/user-attachments/assets/d2fe5cdf-c64e-44fe-9753-efc6b7e145d7)

but if the position is impossible ,The service will respon **False** , and the robot will stand still

![image](https://github.com/user-attachments/assets/b69bca30-bd3c-4e8c-9b5e-bbeb3b267535)

video output mode 1 (click the image)

[![Watch the video](https://github.com/user-attachments/assets/d2fe5cdf-c64e-44fe-9753-efc6b7e145d7)](https://youtu.be/5NdAb9AZTrY?si=sJGyIGtZzVdUiNK6)

### mode 2
same as mode 1 ,first you need to be in the workspace and then run this command to open the launch file 

```
ros2 launch example_description fun.launch.py
```
and then use the command (run the mode that will move base on base frame)

```
ros2 service call /Mode custom_interface/srv/Basic "mode:
  data: 2
x:
  data: 1
y:
  data: 0.0
z:
  data: 0.0" 
```
or (run the mode that will move base on end-effector frame)
```
ros2 service call /Mode custom_interface/srv/Basic "mode:
  data: 2
x:
  data: 2
y:
  data: 0.0
z:
  data: 0.0" 
```
and when the command successful the service will respond **True** and the log will show which mode you are on 

![image](https://github.com/user-attachments/assets/eadb6e8c-5c9c-4b4a-8b94-299a64cbf282)

but if the data is not 1 or 2 the service will respond **False** and the log will show the error

![image](https://github.com/user-attachments/assets/1bdcd25a-3426-4ae8-b090-1d6de8ebd1bf)


To use mode 2 ,simply change the mode number to 2 and the value x will determine the refference axis of the move 

 - x = 1 -> refference from base axis 
 - x = 2 -> refference from end_effector axis

then use command (run this command after lauch the lauch file to avoid possible error)

```
ros2 run teleop_twist_keyboard teleop_twist_keyboard
```

then the robot will move as the teleopkey press 


video output mode 2 (click the image)

[![Watch the video](https://github.com/user-attachments/assets/d2fe5cdf-c64e-44fe-9753-efc6b7e145d7)](https://youtu.be/cs42aag8suQ)

### mode 3
same as mode 1 and 2 ,first you need to be in the workspace and then run this command to open the launch file 

```
ros2 launch example_description fun.launch.py
```

and then 
```
ros2 service call /Mode custom_interface/srv/Basic "mode:
  data: 3
x:
  data: 0.0
y:
  data: 0.0
z:
  data: 0.0" 
```

and then the resposnse will return as **True** and the log will respond as image 

![image](https://github.com/user-attachments/assets/d88f5309-c1d3-4cf6-90c2-c72239d82cf2)

So the robot will start moving automaticly


video output mode 3 (click the image)

[![Watch the video](https://github.com/user-attachments/assets/d2fe5cdf-c64e-44fe-9753-efc6b7e145d7)](https://www.youtube.com/watch?v=fKTjRlf-mQk)

### end_effecter_pose 

as you run each mode after the 
```
ros2 launch example_description fun.launch.py
```
you can use this command to visualize the position of the end_effector by open the rviz2 on another terminal using this cmd

```
rviz2
```

then click the add button on the bottom left connor

![image](https://github.com/user-attachments/assets/c85591ab-6bcb-4c05-bdfb-9a23c488ca77)

the select the By topic on the upper part and then select the /end_effector (Pose)

![image](https://github.com/user-attachments/assets/63f7e614-b416-45b3-92c2-e8155323672a)

then select the reffecrence frame as you desire

![image](https://github.com/user-attachments/assets/45c282a0-45a7-4826-8bc3-8e8b4f9eebae)

then the position of the end effector will apear on the rviz2 

![image](https://github.com/user-attachments/assets/763167ca-a598-47ed-90fd-2d072cc9d29a)


video output of the end_effector visualisation (click the image)

ps. in the clip will use mode 3 to demo 

[![Watch the video](https://github.com/user-attachments/assets/d2fe5cdf-c64e-44fe-9753-efc6b7e145d7)](https://www.youtube.com/watch?v=D7Mvqn28bHQ)


