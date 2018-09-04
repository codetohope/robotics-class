
int led = 8;

int walkerRed = 9;
int walkerGreen = 10;

int carRed = 11;
int carYellow = 12;
int carGreen = 13;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(walkerRed, OUTPUT);
  pinMode(walkerGreen, OUTPUT);  
  pinMode(carRed, OUTPUT);
  pinMode(carYellow, OUTPUT);
  pinMode(carGreen, OUTPUT);  
}

void loop() {
  //singleLed();
  //twoLeds();
  semaphore();
}

void singleLed() {
  digitalWrite(led, HIGH);
  delay(100);
  digitalWrite(led, LOW);
  delay(100);
}

void twoLeds() {
  digitalWrite(walkerRed, HIGH);
  digitalWrite(walkerGreen, LOW);
  delay(100);
  digitalWrite(walkerRed, LOW);
  digitalWrite(walkerGreen, HIGH);
  delay(100);
}

void semaphore() {
  // Start as green
  digitalWrite(carGreen, HIGH);
  digitalWrite(carYellow, LOW);
  digitalWrite(carRed, LOW);
  digitalWrite(walkerRed, HIGH);
  digitalWrite(walkerGreen, LOW);
  delay(8000);
  // Changes to Yellow
  digitalWrite(carGreen, LOW);
  digitalWrite(carYellow, HIGH);
  digitalWrite(carRed, LOW);
  digitalWrite(walkerRed, HIGH);
  digitalWrite(walkerGreen, LOW);
  delay(2000);

  // Changes to Red
  digitalWrite(carGreen, LOW);
  digitalWrite(carYellow, LOW);
  digitalWrite(carRed, HIGH);
  digitalWrite(walkerRed, HIGH);
  digitalWrite(walkerGreen, LOW);
  delay(2000);

  // Opens for walkers
  digitalWrite(carGreen, LOW);
  digitalWrite(carYellow, LOW);
  digitalWrite(carRed, HIGH);
  digitalWrite(walkerRed, LOW);
  digitalWrite(walkerGreen, HIGH);
  delay(4000);

  //Blinks
  for(int i = 0; i < 8; i++) {
    digitalWrite(walkerRed, LOW);
    digitalWrite(walkerGreen, LOW);
    delay(200);
    digitalWrite(walkerRed, LOW);
    digitalWrite(walkerGreen, HIGH);
    delay(200);
  }

    // Changes to Red
  digitalWrite(carGreen, LOW);
  digitalWrite(carYellow, LOW);
  digitalWrite(carRed, HIGH);
  digitalWrite(walkerRed, HIGH);
  digitalWrite(walkerGreen, LOW);
  delay(2000);
  
}

