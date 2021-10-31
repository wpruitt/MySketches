//Read and return Soil Moisture and Soil Moisture Percentage
//Created using tutorial at https://how2electronics.com/interface-capacitive-soil-moisture-sensor-arduino/

const int AirValue = 620;
const int WaterValue = 310;
int soilMoistureValue = 0;
int soilMoisturePercent = 0 ;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  soilMoistureValue = analogRead(A0);
  Serial.print("Soil Moisture is: ");
  Serial.println(soilMoistureValue);
  soilMoisturePercent = map(soilMoistureValue, AirValue, WaterValue, 0, 100);
  Serial.print("Soil Moisture percentage is: ");
  Serial.print(soilMoisturePercent);
  Serial.println("%");
  delay(2500);
}
