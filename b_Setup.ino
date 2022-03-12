

void setup()
{
  Serial.begin(9600);
  if (!SPIFFS.begin(true)) {
    return;
  }

  Write("/data_one.txt", "This is my 1st test data");
  delay(2000);
  Write("/data_two.txt", "This is my 2nd test data");
  
}
