int pin1 = 1;
int pin2 = 2;
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;
int pin6 = 6;
String testText = ",;':-.!""(/";
int quoteCount = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);

  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:

  for (int i = 0; i < testText.length(); i++) {
    char c = testText.charAt(i);
    clear();
    braillePrint(c);
    delay(1000);
  }
}

void clear() {
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);
}

void a() {
  digitalWrite(pin1, HIGH);  
}

void b() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
}

void c() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin4, HIGH);
}

void d() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
}

void e() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin5, HIGH);
}

void f() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin4, HIGH);
}

void g() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
}

void h() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin5, HIGH);
}

void i() {
  digitalWrite(pin2, HIGH);
  digitalWrite(pin4, HIGH);
}

void j() {
  digitalWrite(pin2, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
}

void k() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin3, HIGH);
}

void l() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
}

void m() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
}

void n() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
}

void o() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin5, HIGH);
}

void p() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
}

void q() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
}

void r() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin5, HIGH);
}

void s() {
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
}

void t() {
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
}

void u() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin6, HIGH);
}

void v() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin6, HIGH);
}

void w() {
  digitalWrite(pin2, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);  
}

void x() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin6, HIGH);
}

void y() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
}

void z() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
}

void comma() {
  digitalWrite(pin2, HIGH);
}

void semicolon() {
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);  
}

void apostrophe() {
  digitalWrite(pin3, HIGH);
}

void colon() {
  digitalWrite(pin2, HIGH);
  digitalWrite(pin5, HIGH);
}

void hyphen() {
  digitalWrite(pin3, HIGH);
  digitalWrite(pin6, HIGH);
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

void exclamationPoint() {
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin5, HIGH);
}

void openQuote() {
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin6, HIGH);
}

void closeQuote() {
  digitalWrite(pin3, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
}

void bracket() {
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
}

void slash() {
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
}

void braillePrint(char letter) {
  if (letter == 'a' || letter == 'A') {
    a();
  }
  else if (letter == 'b' || letter == 'B') {
    b();
  }
  else if (letter == 'c' || letter == 'C') {
    c();
  }
  else if (letter == 'd' || letter == 'D') {
    d();
  }
  else if (letter == 'e' || letter == 'E') {
   e(); 
  }
  else if (letter == 'f' || letter == 'F') {
    f();
  }
  else if (letter == 'g' || letter == 'G') {
    g();
  }
  else if (letter == 'h' || letter == 'H') {
    h();  
  }
  else if (letter == 'i' || letter == 'I') {
    i();
  }
  else if (letter == 'j' || letter == 'J') {
    j();
  }
  else if (letter == 'k' || letter == 'K') {
    k();
  }
  else if (letter == 'l' || letter == 'L') {
    l();
  }
  else if (letter == 'm' || letter == 'M') {
    m();
  }
  else if (letter == 'n' || letter == 'N') {
    n();
  }
  else if (letter == 'o' ||  letter == 'O') {
    o();
  }
  else if (letter == 'p' || letter == 'P') {
    p();
  }
  else if (letter == 'q' || letter == 'Q') {
    q();
  }
  else if (letter == 'r' || letter == 'R') {
    r();
  }
  else if (letter == 's' || letter == 'S') {
    s();
  }
  else if (letter == 't' || letter == 'T') {
    t();
  }
  else if (letter == 'u' || letter == 'U') {
    u();
  }
  else if (letter == 'v' || letter == 'V') {
    v();
  }
  else if (letter == 'w' || letter == 'W') {
    w();
  }
  else if (letter == 'x' || letter == 'X') {
    x();
  }
  else if (letter == 'y' || letter == 'Y') {
    y();
  }
  else if (letter == 'z' || letter == 'Z') {
    z();
  }
  else if (letter == ',') {
    comma();
    Serial.print(letter);
  }
  else if (letter == ';') {
    semicolon();
    Serial.print(letter);
  }
  else if (letter == '\'') {
    apostrophe();
    Serial.print(letter);    
  }
  else if (letter == ':') {
    colon();
    Serial.print(letter);
  }
  else if (letter == '-') {
    hyphen();
    Serial.print(letter);
  }
  else if (letter == '.') {
    fullStop();
    Serial.print(letter);
  }
  else if (letter == '!') {
    exclamationPoint();
    Serial.print(letter);
  }
  else if (letter == '"' && !quoteCount) {
    openQuote();
    quoteCount = 1;
    Serial.print(letter);
  }
  else if (letter == '"' && quoteCount) {
    closeQuote();
    quoteCount = 0;
    Serial.print(letter);
  }
  else if (letter == '(' || letter == ')') {
    bracket();
    Serial.print(letter);
  }
  else if (letter == '/' || letter == '\\') {
    slash();
    Serial.print(letter);
  }
  else {
    Serial.print("Not caught.");
  }
}


