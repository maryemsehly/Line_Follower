#define left_sensor A0
#define mid_sensor A1
#define right_sensor A2
#define left_motor_fwd 10 
#define left_motor_bwd 9  
#define right_motor_fwd 8  
#define right_motor_bwd 7  
#define left_speed 5  
#define right_speed 6  

void setup() {
  pinMode(left_sensor, INPUT);
  pinMode(mid_sensor, INPUT);
  pinMode(right_sensor, INPUT);
  pinMode(left_motor_fwd, OUTPUT);
  pinMode(left_motor_bwd, OUTPUT);
  pinMode(right_motor_fwd, OUTPUT);
  pinMode(right_motor_bwd, OUTPUT);
  pinMode(left_speed, OUTPUT);
  pinMode(right_speed, OUTPUT);
  analogWrite(left_speed, 255); 
  analogWrite(right_speed, 255); 
}

void moveForward() {
  digitalWrite(left_motor_fwd, HIGH); 
  digitalWrite(left_motor_bwd, LOW);
  digitalWrite(right_motor_fwd, HIGH); 
  digitalWrite(right_motor_bwd, LOW);
}

void turnRight() {
  digitalWrite(left_motor_fwd, HIGH); 
  digitalWrite(left_motor_bwd, LOW);
  digitalWrite(right_motor_fwd, LOW);  
  digitalWrite(right_motor_bwd, LOW);
}

void turnLeft() {
  digitalWrite(left_motor_fwd, LOW);  
  digitalWrite(left_motor_bwd, LOW);
  digitalWrite(right_motor_fwd, HIGH);
  digitalWrite(right_motor_bwd, LOW);
}

void stopMotors() {
  digitalWrite(left_motor_fwd, LOW);
  digitalWrite(left_motor_bwd, LOW);
  digitalWrite(right_motor_fwd, LOW);
  digitalWrite(right_motor_bwd, LOW);
}

void loop() {
  int left_val = digitalRead(left_sensor);
  int mid_val = digitalRead(mid_sensor);
  int right_val = digitalRead(right_sensor);

  if (mid_val == 0 && left_val == 1 && right_val == 1) {
    moveForward();
  }
  else if (right_val == 0) {
    turnLeft(); 
  }
  else if (left_val == 0) {
    turnRight(); 
  }
  else {
    stopMotors();
  }
}
