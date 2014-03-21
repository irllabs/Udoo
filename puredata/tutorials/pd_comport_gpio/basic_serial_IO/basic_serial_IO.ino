void setup() {
  Serial.begin(9600); 
  pinMode(53, OUTPUT);
  digitalWrite(53, LOW);
}



void loop(){
  int dval, aval;

//read off the serial port
//a non zero is HIGH, zero for LOW
  if(Serial.available()){
    delay(3);
    while(Serial.available()>0){
      dval = Serial.read();
      if(dval>0) digitalWrite(53, HIGH);
      else digitalWrite(53, LOW);       
    }
    Serial.flush();
  }


//simply print out the value on pin A7 (no smoothing)
  Serial.println(analogRead(A7), DEC);
  delay(10);

}

