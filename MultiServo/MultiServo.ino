#include "AccelStepper.h"
#include <Servo.h>
#define EN 8
#define DIRX 5
#define DIRY 6
#define DIRZ 7
#define STEPX 2
#define STEPY 3
#define STEPZ 4
#define SERVO 12
#define XENDSTOP 9
#define YENDSTOP 10
#define ZENDSTOP 11
#define PUMP 13
#define VALVE A3
AccelStepper stepper1(1, STEPX, DIRX);
AccelStepper stepper2(1, STEPY, DIRY);
AccelStepper stepper3(1, STEPZ, DIRZ);
Servo myservo;
String CMD = "";
int servoPos = 90;
int servoDir = 0;
int Xvalue = 0;
int Yvalue = 0;
int Zvalue = 0;
int XvaluePause = 0;
int YvaluePause = 0;
int ZvaluePause = 0;
int Valve = 0;
int Pump = 0;
int STA = 1;
int STAPause = 1;
int station_1 = 0;
int station_2 = 0;
int station_3 = 0;
int station_4 = 0;
int station_5 = 0;
int station_6 = 0;
int station_1Pause = 0;
int station_2Pause = 0;
int station_3Pause = 0;
int station_4Pause = 0;
int station_5Pause = 0;
int station_6Pause = 0;
unsigned long lastTime = 0;
unsigned long waitTime = 0;
int staTimer = 0;
void setup()
{
  pinMode(EN, OUTPUT);
  digitalWrite(EN, LOW);
  pinMode(XENDSTOP, INPUT_PULLUP);
  pinMode(YENDSTOP, INPUT_PULLUP);
  pinMode(ZENDSTOP, INPUT_PULLUP);

  pinMode(PUMP, OUTPUT);
  pinMode(VALVE, OUTPUT);

  myservo.attach(SERVO);
  myservo.write(servoPos); // Cho servo về vị trí mặc định
 
  delay(1000);
  stepper1.setMaxSpeed(100000.0); // tốc độ tối đa step 1
  stepper1.setAcceleration(100000.0); // gia tốc step 1

  stepper2.setMaxSpeed(500000.0); // tốc độ tối đa step 2
  stepper2.setAcceleration(100000.0); // gia tốc step 2

  stepper3.setMaxSpeed(500000.0); // tốc độ tối đa step 3
  stepper3.setAcceleration(100000.0);// gia tốc step 3
  Serial.begin(115200);
  lastTime = millis(); //biến thời gian sử dụng cho việc phản hồi
}
void loop() //Hàm chính
{
  if (Serial.available() > 0) {
    CMD = Serial.readString();
    if (CMD.indexOf('!') > 0) { // xử lý lệnh điều khiển
      Serial.println("#OK!");
      if (CMD.indexOf("HOME") >= 0) homeAll();
      else if (CMD.indexOf("STOP") >= 0) stopMove();
      else if (CMD.indexOf("PAUSE") >= 0) pause();
      else if (CMD.indexOf("CONTINUE") >= 0) continueMove();
      else if (CMD.indexOf("STATION1") >= 0) {
        station_1 = 0;
        station_2 = 0;
        station_3 = 0;
        station_4 = 0;
        station_5 = 0;
        station_6 = 0;
        station_1 = 1;
        STA = 1;
      }
      else if (CMD.indexOf("STATION2") >= 0) {
        station_1 = 0;
        station_2 = 0;
        station_3 = 0;
        station_4 = 0;
        station_5 = 0;
        station_6 = 0;
        station_2 = 1;
        STA = 1;
      }
      else if (CMD.indexOf("STATION3") >= 0) {
        station_1 = 0;
        station_2 = 0;
        station_3 = 0;
        station_4 = 0;
        station_5 = 0;
        station_6 = 0;
        station_3 = 1;
        STA = 1;
      }
      else if (CMD.indexOf("STATION4") >= 0) {
        station_1 = 0;
        station_2 = 0;
        station_3 = 0;
        station_4 = 0;
        station_5 = 0;
        station_6 = 0;
        station_4 = 1;
        STA = 1;
      }
      else if (CMD.indexOf("STATION5") >= 0) {
        station_1 = 0;
        station_2 = 0;
        station_3 = 0;
        station_4 = 0;
        station_5 = 0;
        station_6 = 0;
        station_5 = 1;
        STA = 1;
      }
      else if (CMD.indexOf("STATION6") >= 0) {
        station_1 = 0;
        station_2 = 0;
        station_3 = 0;
        station_4 = 0;
        station_5 = 0;
        station_6 = 0;
        station_6 = 1;
        STA = 1;
      }
      else {

        int X_index = CMD.indexOf('X'); // di chuyển X
        if (X_index >= 0) {
          String X_sub = CMD.substring(X_index + 1, CMD.indexOf('Y'));
          Xvalue = X_sub.toInt();

        }
        if (CMD.indexOf('x') >= 0) Xvalue += 50;// nhấn #X! thì di chuyển một đoạn nhỏ 50
        if (CMD.indexOf('d') >= 0) Xvalue -= 50;// nhấn #x! thì di chuyển một đoạn nhỏ -50
        int Y_index = CMD.indexOf('Y'); // di chuyển Y
        if (Y_index >= 0) {
          String Y_sub = CMD.substring(Y_index + 1, CMD.indexOf('Z'));
          Yvalue = Y_sub.toInt();

        }
        if (CMD.indexOf('y') >= 0) Yvalue += 50;
        if (CMD.indexOf('h') >= 0) Yvalue -= 50;

        int Z_index = CMD.indexOf('Z'); // di chuyển Z
        if (Z_index >= 0) {
          String Z_sub = CMD.substring(Z_index + 1, CMD.indexOf('S'));
          Zvalue = Z_sub.toInt();

        }
        if (CMD.indexOf('z') >= 0) Zvalue += 50;
        if (CMD.indexOf('a') >= 0) Zvalue -= 50;
        int S_index = CMD.indexOf('S');
        if (S_index >= 0) {
          String S_sub = CMD.substring(S_index + 1, CMD.indexOf('!'));
          servoPos = S_sub.toInt();

        }
        if (CMD.indexOf('s') >= 0) servoPos++;
        if (CMD.indexOf('w') >= 0) servoPos--;
        int B_index = CMD.indexOf('B');
        if (B_index >= 0) {
          String B_sub = CMD.substring(B_index + 1, CMD.indexOf('V'));
          Pump = B_sub.toInt();

        }
        if (CMD.indexOf('b') >= 0) Pump = 1;
        if (CMD.indexOf('g') >= 0) Pump = 0;
        int V_index = CMD.indexOf('V');
        if (V_index >= 0) {
          String V_sub = CMD.substring(V_index + 1, CMD.indexOf('!'));
          Valve = V_sub.toInt();

        }
        if (CMD.indexOf('v') >= 0) Valve = 1;
        if (CMD.indexOf('f') >= 0) Valve = 0;
      }
      if (Xvalue < 0) Xvalue = 0;
      if (Yvalue < 0) Yvalue = 0;
      if (Zvalue < 0) Zvalue = 0;
      if (servoPos < 0) servoPos = 0;
      CMD = "";
    }
  }

  if (millis() > (lastTime + 1000)) { // thời gian phản hồi là 1000 mili giây, muốn phản hồi nhanh chậm thì chỉnh ở đây.
    String s = "#X" + (String)stepper1.currentPosition() + "Y" + (String)stepper2.currentPosition() + "Z" + (String)stepper3.currentPosition() + "S" + servoPos + "!";
    String s1 = "#B" + (String)Pump + "V" + (String)Valve + "!";
    Serial.println(s);// s chứa X Y Z S
    Serial.println(s1);// s1 chứa B V ( bơm và van)
    lastTime = millis();
  }
  STATION1();
  STATION2();
  STATION3();
  STATION4();
  STATION5();
  STATION6();
  stepper1.moveTo(Xvalue);
  stepper2.moveTo(Yvalue);
  stepper3.moveTo(Zvalue);
  myservo.write(servoPos);
  digitalWrite(PUMP, Pump);
  digitalWrite(VALVE, Valve);
  stepper1.run();
  stepper2.run();
  stepper3.run();
}

void homeX() {// hàm về góc tạo độ X
  digitalWrite(DIRX, 0);
  while (digitalRead(XENDSTOP) == 1) {
    tone(STEPX, 500);
  }
  noTone(STEPX);
  Xvalue = 700;
}
void homeY() {// hàm về góc tạo độ X
  digitalWrite(DIRY, 0);
  while (digitalRead(YENDSTOP) == 1) {
    tone(STEPY, 500);
  }
  noTone(STEPY);
  Yvalue = 0;

}
void homeZ() {// hàm về góc tạo độ X
  digitalWrite(DIRZ, 0);
  while (digitalRead(ZENDSTOP) == 1) {
    tone(STEPZ, 500);
  }
  noTone(STEPZ);
  Zvalue = 0;
}
void homeAll() {// hàm về góc tạo độ XYZ
  servoPos = 90;
  myservo.write(servoPos);
  homeY();
  homeZ();
  homeX();
  stepper1.setCurrentPosition(0);
  stepper2.setCurrentPosition(0);
  stepper3.setCurrentPosition(0);
  Xvalue = 700;
  Yvalue = 0;
  Zvalue = 0;
}
void pause() { //Hàm tạm dừng
  STAPause = STA;
  station_1Pause = station_1;
  station_2Pause = station_2;
  station_3Pause = station_3;
  station_4Pause = station_4;
  station_5Pause = station_5;
  station_6Pause = station_6;
  station_1 = 0;
  station_2 = 0;
  station_3 = 0;
  station_4 = 0;
  station_5 = 0;
  station_6 = 0;
  XvaluePause = Xvalue;
  YvaluePause = Yvalue;
  ZvaluePause = Zvalue;
  Xvalue = stepper1.currentPosition();
  Yvalue = stepper2.currentPosition();
  Zvalue = stepper3.currentPosition();

}
void continueMove() {//hàm tiếp tục chạy
  Xvalue = XvaluePause;
  Yvalue = YvaluePause;
  Zvalue = ZvaluePause;
  STA = STAPause;
  station_1 = station_1Pause;
  station_2 = station_2Pause;
  station_3 = station_3Pause;
  station_4 = station_4Pause;
  station_5 = station_5Pause;
  station_6 = station_6Pause;
}
void stopMove() {// hàm dừng hẳn mọi di chuyển
  Xvalue = stepper1.currentPosition();
  Yvalue = stepper2.currentPosition();
  Zvalue = stepper3.currentPosition();
  XvaluePause = Xvalue;
  YvaluePause = Yvalue;
  ZvaluePause = Zvalue;
  station_1 = 0;
  station_2 = 0;
  station_3 = 0;
  station_4 = 0;
  station_5 = 0;
  station_6 = 0;
}
int wait(unsigned long milliSecond) { //hàm chờ giữa các bước
  switch (staTimer) {
    case 0:
      waitTime = millis();
      staTimer = 1;
      break;
    case 1:
      if (millis() > (waitTime + milliSecond)) {
        staTimer = 0;
        return 1;
      }
      else return 0;
    default:
      return 0;
  }
}
