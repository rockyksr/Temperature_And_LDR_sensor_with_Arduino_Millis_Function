
const byte LDR = 2; 
const byte tempSensor = 4; 

const long eventTime_1_LDR = 1000; 
const long eventTime_2_temp = 5000; 


unsigned long previousTime_1 = 0;
unsigned long previousTime_2 = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {


  unsigned long currentTime = millis();


  if ( currentTime - previousTime_1 >= eventTime_1_LDR) {
    Serial.print("LDR: ");
    Serial.println( analogRead(LDR) );
    
    previousTime_1 = currentTime;
  }

 
  if ( currentTime - previousTime_2 >= eventTime_2_temp) {

    Serial.print("Temp: ");
    Serial.println( analogRead(tempSensor) );
    
    previousTime_2 = currentTime;
  }

}
