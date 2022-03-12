bool Write(String fileName , String file_data) {
Serial.print("Writing file: " + fileName);
  Serial.println("  file data data : " + file_data);
  File file_to_WRITE = SPIFFS.open(fileName, FILE_WRITE);
  if (!file_to_WRITE) {
 Serial.println("file not found");
    return false;
  }
  file_to_WRITE.print(file_data);
  file_to_WRITE.close();
  return true;
}
bool Read(String fileName , String& fileData) {
  Serial.println("Reading file name: " + fileName);
  File file_to_Read = SPIFFS.open(fileName);
  if (!file_to_Read) {
    return false;
  }
  Serial.print("Read file data: ");
  while (file_to_Read.available()) {
    char c = file_to_Read.read();
    fileData += c;
  }
  Serial.println(fileData);
  file_to_Read.close();
  return true;
}
