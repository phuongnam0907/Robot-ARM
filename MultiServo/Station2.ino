
void STATION2() {
  if (station_2 == 0)return;
  switch (STA) {
    case 1:
      Xvalue = 700; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 0; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 2:
      Xvalue = 5000; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 0; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 3:
      Xvalue = 5000; Yvalue = 3000; Zvalue = 1500; servoPos = 90; Pump = 0; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 4:
      Xvalue = 5000; Yvalue = 3000; Zvalue = 1500; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue))
      {
        if (wait(500) == 1) STA++;
      }
      break;
    case 5:
      Xvalue = 5000; Yvalue = 3000; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 6:
      Xvalue = 5000; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 7:
      Xvalue = 800; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 8:
      Xvalue = 800; Yvalue = 3000; Zvalue = 2000; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 9:
      Xvalue = 800; Yvalue = 3000; Zvalue = 2000; servoPos = 90; Pump = 1; Valve = 1;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue))
      {
        if (wait(500) == 1) STA++;
      }
      break;
    case 10:
      Xvalue = 800; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 0; Valve = 1;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 11:
      Xvalue = 700; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 0; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    default:
      station_2 = 0;
      break;
  }
}
