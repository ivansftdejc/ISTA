const int pinoDoBotao=2;
const int pinoDoLed=13;
int estadoDoBotao=0;
void setup() {
  // put your setup code here, to run once:
pinMode(pinoDoLed,OUTPUT);
pinMode(pinoDoBotao,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
estadoDoBotao=digitalRead(pinoDoBotao); 
if(estadoDoBotao==HIGH){
  digitalWrite(pinoDoLed,HIGH);
  }
  else{
      digitalWrite(pinoDoLed,LOW);
      }
}
