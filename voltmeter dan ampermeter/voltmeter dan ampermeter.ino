int analogInput = A0;
float vout =0.0;
float vin =0.0;
float R1 =3900;//nilai resistansi R1
float R2 =560;//nilai resistansi R2
int value = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(analogInput,INPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
   value = analogRead(analogInput);
   vout = (value * 5.0) / 1024.0; // see text
   vin = vout / (R2/(R1+R2)); 

 Serial.print("Voltage = ");
 Serial.print(vin);
 Serial.println("VOLT");

 delay(500);
}
