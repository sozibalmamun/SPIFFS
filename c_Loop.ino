void loop()
{
  Read("/data_one.txt", read_data_one);
  delay(2000);
  Read("/data_two.txt", read_data_two);
  delay(3000);
//if you want to delete data uncomment bellow
//  deleteFile("/data_one.txt");
//  delay(2000);
//  deleteFile("/data_two.txt");
}
