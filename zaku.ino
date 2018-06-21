#define LED_PIN 3

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_PIN, OUTPUT);
  delay(1000);
  digitalWrite(LED_PIN, HIGH);
}

// the loop function runs over and over again forever
void loop() {
  /*
  digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  //Serial.println(LED_PIN);
  */
}
