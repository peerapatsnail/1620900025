void setup() {
  Serial.begin(115200);
  Serial.println("Which wallet do you want to find?\n Pink\n Orange\n Green\n");

}
  

void loop() {
  char colour;
  if (Serial.available())
    char  colour= Serial.read();
    if (colour == 'Pink')
    {
      Serial.println("We will find pink wallet for you");
    }
    else if (colour == 'Orange')
    {
      Serial.println("We will find orange wallet for you");
    }
     if (colour == 'Green')
    {
      Serial.println("We will find Green wallet for you");
    }
    else
    {
      Serial.println("We don't have this option for you.\nPlease select again");
    }
  
  

}
