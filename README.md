# Line_Follower

Project Overview
This project involves the development of a Line Follower Robot using an ESP32 microcontroller. The robot is designed to autonomously follow a predefined path marked by a line, typically black on a white surface, or vice versa. The project demonstrates key concepts in robotics, such as sensor integration, motor control, and basic automation.

----How It Works
The IR sensors detect the difference in reflectivity between the line and the surface. Based on the sensor readings, the ESP32 adjusts the speed and direction of the motors to keep the robot on track. If the sensors detect the robot is off the line, corrective action is taken to bring it back on course.


-----Components

Used ESP32: Main microcontroller for controlling the robot. 
IR Sensors: Used to detect the line and guide the robot along the path. 
DC Motors: Control the movement of the robot. 
Motor Driver (L298N): Used to drive the motors. 
Power Supply: Battery pack for powering the robot.

----Features

Line Detection: IR sensors are used to detect the line and guide the robot's movement.
Autonomous Navigation: The robot can autonomously follow the line without any external intervention. 
Real-Time Control: The ESP32 processes the sensor input and adjusts the motors to stay on the path.
