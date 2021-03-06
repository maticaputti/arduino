/*
Led RGB
Function to turn on an RGB led and set it's on/off time
*/
 
int RGB_1_redPin  =  30;
int RGB_1_greenPin = 29;
int RGB_1_bluePin  = 28;

int RGB_2_redPin  =  27;
int RGB_2_greenPin = 26;
int RGB_2_bluePin  = 25;

int RGB_3_redPin  =  24;
int RGB_3_greenPin = 23;
int RGB_3_bluePin  = 22;

int RGB_4_redPin  =  21;
int RGB_4_greenPin = 20;
int RGB_4_bluePin  = 19;

int RGB_5_redPin  =  18;
int RGB_5_greenPin = 17;
int RGB_5_bluePin  = 16;

int RGB_6_redPin  =  15;
int RGB_6_greenPin = 14;
int RGB_6_bluePin  = 13;

int RGB_7_redPin  =  12;
int RGB_7_greenPin = 11;
int RGB_7_bluePin  = 10;

char RGB_1_type = 'A';
char RGB_2_type = 'A';
char RGB_3_type = 'A';
char RGB_4_type = 'A';
char RGB_5_type = 'A';
char RGB_6_type = 'A';
char RGB_7_type = 'A';
String RGB_1_name = "RGB_1";
String RGB_2_name = "RGB_1";
String RGB_3_name = "RGB_1";
String RGB_4_name = "RGB_1";
String RGB_5_name = "RGB_1";
String RGB_6_name = "RGB_1";
String RGB_7_name = "RGB_1";
 
void setup() {
  pinMode(RGB_1_redPin, OUTPUT);
  pinMode(RGB_1_greenPin, OUTPUT);
  pinMode(RGB_1_bluePin, OUTPUT);
   
  pinMode(RGB_2_redPin, OUTPUT);
  pinMode(RGB_2_greenPin, OUTPUT);
  pinMode(RGB_2_bluePin, OUTPUT);
  
  pinMode(RGB_3_redPin, OUTPUT);
  pinMode(RGB_3_greenPin, OUTPUT);
  pinMode(RGB_3_bluePin, OUTPUT);
  
  pinMode(RGB_4_redPin, OUTPUT);
  pinMode(RGB_4_greenPin, OUTPUT);
  pinMode(RGB_4_bluePin, OUTPUT);
  
  pinMode(RGB_5_redPin, OUTPUT);
  pinMode(RGB_5_greenPin, OUTPUT);
  pinMode(RGB_5_bluePin, OUTPUT);
  
  pinMode(RGB_6_redPin, OUTPUT);
  pinMode(RGB_6_greenPin, OUTPUT);
  pinMode(RGB_6_bluePin, OUTPUT);
  
  pinMode(RGB_7_redPin, OUTPUT);
  pinMode(RGB_7_greenPin, OUTPUT);
  pinMode(RGB_7_bluePin, OUTPUT);
}

void blinkRGB(int pinRed, int pinGreen, int pinBlue,
              int red, int green, int blue,
              int timeOn, int timeOff, char type, String RGBname) {
  int off = 0;
  if (type == 'A') { red = 255 - red; green = 255 - green; blue = 255 - blue; off = 255 - off; }
  analogWrite(pinRed, red); analogWrite(pinGreen, green); analogWrite(pinBlue, blue);

  //delay(timeOn);
  //analogWrite(pinRed, off); analogWrite(pinGreen, off); analogWrite(pinBlue, off);
  //delay(timeOff);
}

void loop() {
    // apago todo que por ser ánodo arranca prendido
    /*blinkRGB(RGB_1_redPin, RGB_1_greenPin, RGB_1_bluePin, 0, 0, 0, 0, 0, RGB_1_type, RGB_1_name);
    blinkRGB(RGB_2_redPin, RGB_2_greenPin, RGB_2_bluePin, 0, 0, 0, 0, 0, RGB_2_type, RGB_2_name);
    blinkRGB(RGB_3_redPin, RGB_3_greenPin, RGB_3_bluePin, 0, 0, 0, 0, 0, RGB_3_type, RGB_3_name);
    blinkRGB(RGB_4_redPin, RGB_4_greenPin, RGB_4_bluePin, 0, 0, 0, 0, 0, RGB_4_type, RGB_4_name);
    blinkRGB(RGB_5_redPin, RGB_5_greenPin, RGB_5_bluePin, 0, 0, 0, 0, 0, RGB_5_type, RGB_5_name);
    blinkRGB(RGB_6_redPin, RGB_6_greenPin, RGB_6_bluePin, 0, 0, 0, 0, 0, RGB_6_type, RGB_6_name);
    blinkRGB(RGB_7_redPin, RGB_7_greenPin, RGB_7_bluePin, 0, 0, 0, 0, 0, RGB_7_type, RGB_7_name);
    delay(2000);
    */

    blinkRGB(RGB_1_redPin, RGB_1_greenPin, RGB_1_bluePin, 255, 0, 0, 0, 0, RGB_1_type, RGB_1_name);
    blinkRGB(RGB_2_redPin, RGB_2_greenPin, RGB_2_bluePin, 255, 0, 0, 0, 0, RGB_2_type, RGB_2_name);
    blinkRGB(RGB_3_redPin, RGB_3_greenPin, RGB_3_bluePin, 255, 0, 0, 0, 0, RGB_3_type, RGB_3_name);
    blinkRGB(RGB_4_redPin, RGB_4_greenPin, RGB_4_bluePin, 255, 0, 0, 0, 0, RGB_4_type, RGB_4_name);
    blinkRGB(RGB_5_redPin, RGB_5_greenPin, RGB_5_bluePin, 255, 0, 0, 0, 0, RGB_5_type, RGB_5_name);
    blinkRGB(RGB_6_redPin, RGB_6_greenPin, RGB_6_bluePin, 255, 0, 0, 0, 0, RGB_6_type, RGB_6_name);
    blinkRGB(RGB_7_redPin, RGB_7_greenPin, RGB_7_bluePin, 255, 0, 0, 0, 0, RGB_7_type, RGB_7_name);
    delay(1000);

    blinkRGB(RGB_1_redPin, RGB_1_greenPin, RGB_1_bluePin, 255, 0, 255, 0, 0, RGB_1_type, RGB_1_name);
    blinkRGB(RGB_2_redPin, RGB_2_greenPin, RGB_2_bluePin, 255, 0, 255, 0, 0, RGB_2_type, RGB_2_name);
    blinkRGB(RGB_3_redPin, RGB_3_greenPin, RGB_3_bluePin, 255, 0, 255, 0, 0, RGB_3_type, RGB_3_name);
    blinkRGB(RGB_4_redPin, RGB_4_greenPin, RGB_4_bluePin, 255, 0, 255, 0, 0, RGB_4_type, RGB_4_name);
    blinkRGB(RGB_5_redPin, RGB_5_greenPin, RGB_5_bluePin, 255, 0, 255, 0, 0, RGB_5_type, RGB_5_name);
    blinkRGB(RGB_6_redPin, RGB_6_greenPin, RGB_6_bluePin, 255, 0, 255, 0, 0, RGB_6_type, RGB_6_name);
    blinkRGB(RGB_7_redPin, RGB_7_greenPin, RGB_7_bluePin, 255, 0, 255, 0, 0, RGB_7_type, RGB_7_name);
    delay(1000);
    
    blinkRGB(RGB_1_redPin, RGB_1_greenPin, RGB_1_bluePin, 0, 255, 0, 0, 0, RGB_1_type, RGB_1_name);
    blinkRGB(RGB_2_redPin, RGB_2_greenPin, RGB_2_bluePin, 0, 255, 0, 0, 0, RGB_2_type, RGB_2_name);
    blinkRGB(RGB_3_redPin, RGB_3_greenPin, RGB_3_bluePin, 0, 255, 0, 0, 0, RGB_3_type, RGB_3_name);
    blinkRGB(RGB_4_redPin, RGB_4_greenPin, RGB_4_bluePin, 0, 255, 0, 0, 0, RGB_4_type, RGB_4_name);
    blinkRGB(RGB_5_redPin, RGB_5_greenPin, RGB_5_bluePin, 0, 255, 0, 0, 0, RGB_5_type, RGB_5_name);
    blinkRGB(RGB_6_redPin, RGB_6_greenPin, RGB_6_bluePin, 0, 255, 0, 0, 0, RGB_6_type, RGB_6_name);
    blinkRGB(RGB_7_redPin, RGB_7_greenPin, RGB_7_bluePin, 0, 255, 0, 0, 0, RGB_7_type, RGB_7_name);
    delay(1000);

    blinkRGB(RGB_1_redPin, RGB_1_greenPin, RGB_1_bluePin, 255, 255, 0, 0, 0, RGB_1_type, RGB_1_name);
    blinkRGB(RGB_2_redPin, RGB_2_greenPin, RGB_2_bluePin, 255, 255, 0, 0, 0, RGB_2_type, RGB_2_name);
    blinkRGB(RGB_3_redPin, RGB_3_greenPin, RGB_3_bluePin, 255, 255, 0, 0, 0, RGB_3_type, RGB_3_name);
    blinkRGB(RGB_4_redPin, RGB_4_greenPin, RGB_4_bluePin, 255, 255, 0, 0, 0, RGB_4_type, RGB_4_name);
    blinkRGB(RGB_5_redPin, RGB_5_greenPin, RGB_5_bluePin, 255, 255, 0, 0, 0, RGB_5_type, RGB_5_name);
    blinkRGB(RGB_6_redPin, RGB_6_greenPin, RGB_6_bluePin, 255, 255, 0, 0, 0, RGB_6_type, RGB_6_name);
    blinkRGB(RGB_7_redPin, RGB_7_greenPin, RGB_7_bluePin, 255, 255, 0, 0, 0, RGB_7_type, RGB_7_name);
    delay(1000);

    blinkRGB(RGB_1_redPin, RGB_1_greenPin, RGB_1_bluePin, 0, 0, 255, 0, 0, RGB_1_type, RGB_1_name);
    blinkRGB(RGB_2_redPin, RGB_2_greenPin, RGB_2_bluePin, 0, 0, 255, 0, 0, RGB_2_type, RGB_2_name);
    blinkRGB(RGB_3_redPin, RGB_3_greenPin, RGB_3_bluePin, 0, 0, 255, 0, 0, RGB_3_type, RGB_3_name);
    blinkRGB(RGB_4_redPin, RGB_4_greenPin, RGB_4_bluePin, 0, 0, 255, 0, 0, RGB_4_type, RGB_4_name);
    blinkRGB(RGB_5_redPin, RGB_5_greenPin, RGB_5_bluePin, 0, 0, 255, 0, 0, RGB_5_type, RGB_5_name);
    blinkRGB(RGB_6_redPin, RGB_6_greenPin, RGB_6_bluePin, 0, 0, 255, 0, 0, RGB_6_type, RGB_6_name);
    blinkRGB(RGB_7_redPin, RGB_7_greenPin, RGB_7_bluePin, 0, 0, 255, 0, 0, RGB_7_type, RGB_7_name);
    delay(1000);
    
    blinkRGB(RGB_1_redPin, RGB_1_greenPin, RGB_1_bluePin, 0, 255, 255, 0, 0, RGB_1_type, RGB_1_name);
    blinkRGB(RGB_2_redPin, RGB_2_greenPin, RGB_2_bluePin, 0, 255, 255, 0, 0, RGB_2_type, RGB_2_name);
    blinkRGB(RGB_3_redPin, RGB_3_greenPin, RGB_3_bluePin, 0, 255, 255, 0, 0, RGB_3_type, RGB_3_name);
    blinkRGB(RGB_4_redPin, RGB_4_greenPin, RGB_4_bluePin, 0, 255, 255, 0, 0, RGB_4_type, RGB_4_name);
    blinkRGB(RGB_5_redPin, RGB_5_greenPin, RGB_5_bluePin, 0, 255, 255, 0, 0, RGB_5_type, RGB_5_name);
    blinkRGB(RGB_6_redPin, RGB_6_greenPin, RGB_6_bluePin, 0, 255, 255, 0, 0, RGB_6_type, RGB_6_name);
    blinkRGB(RGB_7_redPin, RGB_7_greenPin, RGB_7_bluePin, 0, 255, 255, 0, 0, RGB_7_type, RGB_7_name);
    delay(1000);

}
