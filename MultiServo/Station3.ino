
void STATION3() {
  if (station_3 == 0)return;
  switch (STA) {
    case 1:
      Xvalue = 700; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 0; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;


    case 2:
      Xvalue = 4000; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 0; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 3:
      Xvalue = 4000; Yvalue = 3000; Zvalue = 1500; servoPos = 90; Pump = 0; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 4:
      Xvalue = 4000; Yvalue = 3000; Zvalue = 1500; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue))
      {
        if (wait(500) == 1) STA++;
      }
      break;
    case 5:
      Xvalue = 4000; Yvalue = 3000; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 6:
      Xvalue = 4000; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 7:
      Xvalue = 500; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 8:
      Xvalue = 500; Yvalue = 3000; Zvalue = 2000; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 9:
      Xvalue = 500; Yvalue = 3000; Zvalue = 2000; servoPos = 90; Pump = 1; Valve = 1;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue))
      {
        if (wait(500) == 1) STA++;
      }
      break;
    case 10:
      Xvalue = 500; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 0; Valve = 1;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;


    case 11:
      Xvalue = 4200; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 0; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 12:
      Xvalue = 4200; Yvalue = 3000; Zvalue = 1500; servoPos = 90; Pump = 0; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 13:
      Xvalue = 4200; Yvalue = 3000; Zvalue = 1500; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue))
      {
        if (wait(500) == 1) STA++;
      }
      break;
    case 14:
      Xvalue = 4200; Yvalue = 3000; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 15:
      Xvalue = 4200; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 16:
      Xvalue = 600; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 17:
      Xvalue = 600; Yvalue = 3000; Zvalue = 2000; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 18:
      Xvalue = 600; Yvalue = 3000; Zvalue = 2000; servoPos = 90; Pump = 1; Valve = 1;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue))
      {
        if (wait(500) == 1) STA++;
      }
      break;
    case 19:
      Xvalue = 600; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 0; Valve = 1;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;



    case 20:
      Xvalue = 4400; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 0; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 21:
      Xvalue = 4400; Yvalue = 3000; Zvalue = 1500; servoPos = 90; Pump = 0; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 22:
      Xvalue = 4400; Yvalue = 3000; Zvalue = 1500; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue))
      {
        if (wait(500) == 1) STA++;
      }
      break;
    case 23:
      Xvalue = 4400; Yvalue = 3000; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 24:
      Xvalue = 4400; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 25:
      Xvalue = 700; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 26:
      Xvalue = 700; Yvalue = 3000; Zvalue = 2000; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 27:
      Xvalue = 700; Yvalue = 3000; Zvalue = 2000; servoPos = 90; Pump = 1; Valve = 1;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue))
      {
        if (wait(500) == 1) STA++;
      }
      break;
    case 28:
      Xvalue = 700; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 0; Valve = 1;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;




    case 29:
      Xvalue = 4600; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 0; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 30:
      Xvalue = 4600; Yvalue = 3000; Zvalue = 1500; servoPos = 90; Pump = 0; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 31:
      Xvalue = 4600; Yvalue = 3000; Zvalue = 1500; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue))
      {
        if (wait(500) == 1) STA++;
      }
      break;
    case 32:
      Xvalue = 4600; Yvalue = 3000; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 33:
      Xvalue = 4600; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 34:
      Xvalue = 800; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 35:
      Xvalue = 800; Yvalue = 3000; Zvalue = 2000; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 36:
      Xvalue = 800; Yvalue = 3000; Zvalue = 2000; servoPos = 90; Pump = 1; Valve = 1;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue))
      {
        if (wait(500) == 1) STA++;
      }
      break;
    case 37:
      Xvalue = 800; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 0; Valve = 1;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;





    case 38:
      Xvalue = 4800; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 0; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 39:
      Xvalue = 4800; Yvalue = 3000; Zvalue = 1500; servoPos = 90; Pump = 0; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 40:
      Xvalue = 4800; Yvalue = 3000; Zvalue = 1500; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue))
      {
        if (wait(500) == 1) STA++;
      }
      break;
    case 41:
      Xvalue = 4800; Yvalue = 3000; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 42:
      Xvalue = 4800; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 43:
      Xvalue = 900; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 44:
      Xvalue = 900; Yvalue = 3000; Zvalue = 2000; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 45:
      Xvalue = 900; Yvalue = 3000; Zvalue = 2000; servoPos = 90; Pump = 1; Valve = 1;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue))
      {
        if (wait(500) == 1) STA++;
      }
      break;
    case 46:
      Xvalue = 900; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 0; Valve = 1;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;


    case 47:
      Xvalue = 5000; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 0; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 48:
      Xvalue = 5000; Yvalue = 3000; Zvalue = 1500; servoPos = 90; Pump = 0; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 49:
      Xvalue = 5000; Yvalue = 3000; Zvalue = 1500; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue))
      {
        if (wait(500) == 1) STA++;
      }
      break;
    case 50:
      Xvalue = 5000; Yvalue = 3000; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 51:
      Xvalue = 5000; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 52:
      Xvalue = 1000; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 53:
      Xvalue = 1000; Yvalue = 3000; Zvalue = 2000; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 54:
      Xvalue = 1000; Yvalue = 3000; Zvalue = 2000; servoPos = 90; Pump = 1; Valve = 1;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue))
      {
        if (wait(500) == 1) STA++;
      }
      break;
    case 55:
      Xvalue = 1000; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 0; Valve = 1;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;


    case 56:
      Xvalue = 5200; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 0; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 57:
      Xvalue = 5200; Yvalue = 3000; Zvalue = 1500; servoPos = 90; Pump = 0; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 58:
      Xvalue = 5200; Yvalue = 3000; Zvalue = 1500; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue))
      {
        if (wait(500) == 1) STA++;
      }
      break;
    case 59:
      Xvalue = 5200; Yvalue = 3000; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 60:
      Xvalue = 5200; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 61:
      Xvalue = 1100; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 62:
      Xvalue = 1100; Yvalue = 3000; Zvalue = 2000; servoPos = 90; Pump = 1; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;
    case 63:
      Xvalue = 1100; Yvalue = 3000; Zvalue = 2000; servoPos = 90; Pump = 1; Valve = 1;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue))
      {
        if (wait(500) == 1) STA++;
      }
      break;
    case 64:
      Xvalue = 1100; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 0; Valve = 1;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;

    case 65:
      Xvalue = 700; Yvalue = 50; Zvalue = 50; servoPos = 90; Pump = 0; Valve = 0;
      if ((stepper1.currentPosition() == Xvalue) && (stepper2.currentPosition() == Yvalue) && (stepper3.currentPosition() == Zvalue)) STA++;
      break;

    default:
      station_3 = 0;
      break;
  }
}
