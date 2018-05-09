int  ledpin1 =12;
int  ledpin2 =13;

void setup() {
  // put your setup code here, to run once:
   pinMode(ledpin1, OUTPUT);
   pinMode(ledpin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(ledpin1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(ledpin1, LOW);    // turn the LED off by making the voltage LOW
  delay(150);                       // wait for a second
   digitalWrite(ledpin2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                       // wait for a second
  digitalWrite(ledpin2, LOW);    // turn the LED off by making the voltage LOW
  delay(100);    
   digitalWrite(ledpin2, HIGH); delay(1000);digitalWrite(ledpin2, LOW);delay(100);  // wait for a second
}
