void setup() {
  Serial.begin(115200);
  while(!Serial){
    
    }
}

void loop() {
  if(Serial.available() > 0){
    String message = Serial.readStringUntil('\n');
    Serial.println(message);
    }
}
