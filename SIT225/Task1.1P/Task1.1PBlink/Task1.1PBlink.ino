int led_high = 0;   // vairable to flag on and off
int sleep_sec = 0;  // variable to hold number of seconds to sleep

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // set led pin as output
  digitalWrite(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);  // start serial with transfer rate
}

void loop() {
  sleep_sec = random(1, 5);  // generate random number between 1 and 5


  if (led_high == 0) {
    Serial.println("Led HIGH " + String(sleep_sec) + " sec");
    digitalWrite(LED_BUILTIN, HIGH);  // switch off led (Led ON)
  } else {
    Serial.println("Led LOW " + String(sleep_sec) + " sec");
    digitalWrite(LED_BUILTIN, LOW);  // switch on led (Led OFF)
  }

  // Switch low for a high
  led_high = (led_high + 1) % 2;
  
  // Sleep for a while
  delay(1000 * sleep_sec);
}
