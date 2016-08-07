#include <Servo.h>

int pin1 = 1;
int pin2 = 2;
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;
int pin6 = 6;
int quoteCount = 0;

Servo myservo7;
Servo myservo8;
Servo myservo9;
Servo myservo10;
Servo myservo11;
Servo myservo12;

int pos7 = 0;    // variable to store the servo position
int pos8 = 25;    // variable to store the servo position
int pos9 = 0;    // variable to store the servo position
int pos10 = 0;    // variable to store the servo position
int pos11 = 0;    // variable to store the servo position
int pos12 = 0;    // variable to store the servo position


void setup() {
  // put your setup code here, to run once:
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);

  myservo7.attach(7);  // attaches the servo on pin 9 to the servo object
  myservo8.attach(8);  // attaches the servo on pin 9 to the servo object
  myservo9.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo10.attach(10);  // attaches the servo on pin 9 to the servo object
  myservo11.attach(11);  // attaches the servo on pin 9 to the servo object
  myservo12.attach(12);  // attaches the servo on pin 9 to the servo object

  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly
  byte numBytesAvailable= Serial.available();

  if(numBytesAvailable > 0) {
    for (int i = 0; i < numBytesAvailable; i++) {
      clear();
      char inChar = Serial.read();
      braillePrintServo(inChar);
      braillePrint(inChar);
      delay(200);
    }

  }

}

void clear() {
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);

  myservo7.write(0);
  delay(50);
  myservo8.write(25);
  delay(50);
  myservo9.write(0);
  delay(50);
}

// only three servos

void pin1Servo() {
  myservo7.write(25);
  delay(50);
}

void pin2Servo() {
  myservo8.write(0);
  delay(50);
}

void pin3Servo() {
  myservo9.write(25);
  delay(50);  
}

void a() {
  digitalWrite(pin1, HIGH);
}

void aServo() {
  pin1Servo();
}

void b() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
}

void bServo() {
  pin1Servo();
  pin2Servo();
}


void c() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin4, HIGH);
}

void cServo() {
  pin1Servo();
}

void d() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
}

void dServo() {
  pin1Servo();  
}


void e() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin5, HIGH);
}

void eServo() {
  pin1Servo();
}

void f() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin4, HIGH);
}

void fServo() {
  pin1Servo();
  pin2Servo();
}

void g() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
}

void gServo() {
  pin1Servo();
  pin2Servo();
}

void h() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin5, HIGH);
}

void hServo() {
  pin1Servo();
  pin2Servo();
}

void i() {
  digitalWrite(pin2, HIGH);
  digitalWrite(pin4, HIGH);
}

void iServo() {
  pin2Servo();
}

void j() {
  digitalWrite(pin2, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
}

void jServo() {
  pin2Servo();
}

void k() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin3, HIGH);
}

void kServo() {
  pin1Servo();
  pin3Servo();
}

void l() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
}

void lServo() {
  pin1Servo();
  pin2Servo();
  pin3Servo();
}

void m() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
}

void mServo() {
  pin1Servo();
  pin3Servo();
}

void n() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
}

void nServo() {
  pin1Servo();
  pin3Servo();  
}

void o() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin5, HIGH);
}

void oServo() {
  pin1Servo();
  pin3Servo();
}

void p() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
}

void pServo() {
  pin1Servo();
  pin2Servo();
  pin3Servo();
}

void q() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
}

void qServo() {
  pin1Servo();
  pin2Servo();
  pin3Servo();
}

void r() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin5, HIGH);
}

void rServo() {
  pin1Servo();
  pin2Servo();
  pin3Servo();
}

void s() {
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
}

void sServo() {
  pin2Servo();
  pin3Servo();
}

void t() {
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
}

void tServo() {
  pin2Servo();
  pin3Servo();
}

void u() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin6, HIGH);
}

void uServo() {
  pin1Servo();
  pin3Servo();
}

void v() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin6, HIGH);
}

void vServo() {
  pin1Servo();
  pin2Servo();
  pin3Servo();  
}

void w() {
  digitalWrite(pin2, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
}

void wServo() {
  pin2Servo();
}

void x() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin6, HIGH);
}

void xServo() {
  pin1Servo();
  pin3Servo();
}

void y() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
}

void yServo() {
  pin1Servo();
  pin3Servo();
}

void z() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
}

void zServo() {
  pin1Servo();
  pin3Servo();
}

void comma() {
  digitalWrite(pin2, HIGH);
}

void commaServo() {
  pin2Servo();
}

void semicolon() {
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
}

void semicolonServo() {
  pin2Servo();
  pin3Servo();
}

void apostrophe() {
  digitalWrite(pin3, HIGH);
}

void apostropheServo() {
  pin3Servo();
}

void colon() {
  digitalWrite(pin2, HIGH);
  digitalWrite(pin5, HIGH);
}

void colonServo() {
  pin2Servo();
}

void hyphen() {
  digitalWrite(pin3, HIGH);
  digitalWrite(pin6, HIGH);
}

void hyphenServo() {
  pin3Servo();
}

void decimalPoint() {
  digitalWrite(pin4, HIGH);
  digitalWrite(pin6, HIGH);
}

void fullStop() {
  digitalWrite(pin2, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
}

void fullStopServo() {
  pin2Servo();
}

void exclamationPoint() {
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin5, HIGH);
}

void fullStopServo() {
  pin2Servo();
  pin3Servo();
}

void openQuote() {
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin6, HIGH);
}

void openQuoteServo() {
  pin2Servo();
  pin3Servo();
}

void closeQuote() {
  digitalWrite(pin3, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
}

void closeQuoteServo() {
  pin3Servo();
}

void bracket() {
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
}

void bracketServo() {
  pin2Servo();
  pin3Servo();
}

void slash() {
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
}

void slashServo() {
  pin3Servo();
}

//void braillePrintServo(char letter) {
//  if (letter == 'a' || letter == 'A') {
//    aServo();
//  }
//  else if (letter == 'b' || letter == 'B') {
//    bServo();
//  }
//  else if (letter == 'k' || letter == 'K') {
//    kServo();
//  }
//}

void braillePrint(char letter) {
  if (letter == 'a' || letter == 'A') {
    a();
    aServo();
  }
  else if (letter == 'b' || letter == 'B') {
    b();
    bServo();
  }
  else if (letter == 'c' || letter == 'C') {
    c();
    cServo();
  }
  else if (letter == 'd' || letter == 'D') {
    d();
    dServo();
  }
  else if (letter == 'e' || letter == 'E') {
   e();
   eServo();
  }
  else if (letter == 'f' || letter == 'F') {
    f();
    fServo();
  }
  else if (letter == 'g' || letter == 'G') {
    g();
    gServo();
  }
  else if (letter == 'h' || letter == 'H') {
    h();
    hServo();
  }
  else if (letter == 'i' || letter == 'I') {
    i();
    iServo();
  }
  else if (letter == 'j' || letter == 'J') {
    j();
    jServo();
  }
  else if (letter == 'k' || letter == 'K') {
    k();
    kServo();
  }
  else if (letter == 'l' || letter == 'L') {
    l();
    lServo();
  }
  else if (letter == 'm' || letter == 'M') {
    m();
    mServo();
  }
  else if (letter == 'n' || letter == 'N') {
    n();
    nServo();
  }
  else if (letter == 'o' ||  letter == 'O') {
    o();
    oServo();
  }
  else if (letter == 'p' || letter == 'P') {
    p();
    pServo();
  }
  else if (letter == 'q' || letter == 'Q') {
    q();
    qServo();
  }
  else if (letter == 'r' || letter == 'R') {
    r();
    rServo();
  }
  else if (letter == 's' || letter == 'S') {
    s();
    sServo();
  }
  else if (letter == 't' || letter == 'T') {
    t();
    tServo();
  }
  else if (letter == 'u' || letter == 'U') {
    u();
    uServo();
  }
  else if (letter == 'v' || letter == 'V') {
    v();
    vServo();
  }
  else if (letter == 'w' || letter == 'W') {
    w();
    wServo();
  }
  else if (letter == 'x' || letter == 'X') {
    x();
    xServo();
  }
  else if (letter == 'y' || letter == 'Y') {
    y();
    yServo();
  }
  else if (letter == 'z' || letter == 'Z') {
    z();
    zServo();
  }
  else if (letter == ',') {
    comma();
    commaServo();
    Serial.print(letter);
  }
  else if (letter == ';') {
    semicolon();
    semicolonServo();
    Serial.print(letter);
  }
  else if (letter == '\'') {
    apostrophe();
    apostropheServo();
    Serial.print(letter);
  }
  else if (letter == ':') {
    colon();
    colonServo();
    Serial.print(letter);
  }
  else if (letter == '-') {
    hyphen();
    hyphenServo();
    Serial.print(letter);
  }
  else if (letter == '.') {
    fullStop();
    fullStopServo();
    Serial.print(letter);
  }
  else if (letter == '!') {
    exclamationPoint();
    exclamationPointServo();
    Serial.print(letter);
  }
  else if (letter == '"' && !quoteCount) {
    openQuote();
    openQuoteServo();
    quoteCount = 1;
    Serial.print(letter);
  }
  else if (letter == '"' && quoteCount) {
    closeQuote();
    closeQuoteServo();
    quoteCount = 0;
    Serial.print(letter);
  }
  else if (letter == '(' || letter == ')') {
    bracket();
    bracketServo();
    Serial.print(letter);
  }
  else if (letter == '/' || letter == '\\') {
    slash();
    slashServo();
    Serial.print(letter);
  }
  else {
    Serial.print("Not caught.");
  }
}
