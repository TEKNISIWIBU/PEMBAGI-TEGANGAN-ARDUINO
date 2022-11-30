void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int Vin =(analogRead(A0));
 float voltage = Vin*(5.0/1023.0);
 voltage = voltage/0.091;

 Serial.print("Voltage = ");
 Serial.print(voltage);
 Serial.println(" V");

 delay(1000);
}

