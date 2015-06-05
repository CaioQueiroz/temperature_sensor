const int temperaturePin = 0;


void setup()
{  Serial.begin(9600);
}


int main()
{

  float voltage, degreesC, degreesF;

 

  voltage = getVoltage(temperaturePin);
  


  degreesC = (voltage - 0.5) * 100.0;
  
  
  degreesF = degreesC * (9.0/5.0) + 32.0;
  
  

  Serial.print("voltage: ");
  Serial.print(voltage);
  Serial.print("  deg C: ");
  Serial.print(degreesC);
  Serial.print("  deg F: ");
  Serial.println(degreesF);

  // These statements will print lines of data like this:
  // "voltage: 0.73 deg C: 22.75 deg F: 72.96"

 
   
  delay(1000); // the code is currently measuring 1 second at a time, i think is a good set of data in the end.
}


float getVoltage(int pin)
{
  
  return (analogRead(pin) * 0.004882814);
  
}