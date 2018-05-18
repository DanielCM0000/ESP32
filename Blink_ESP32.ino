void setup(){ 
  pinMode(LED_BUILTIN, OUTPUT);//LED_BUILTIN 2 == GPIO2
}

void loop() {
  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));   
  delay(250);
}
//NECESSÁRIO PRECIONAR O BOTÃO BOOT QUANDO COMEÇAR A CONEXÃO 
//Connceting.........._____....
