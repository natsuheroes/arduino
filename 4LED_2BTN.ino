// 4 LED 2 BTN 
// Salsabila APSDU_20518241012

int led1=13;
int led2=12;
int led3=11;
int led4=10;
int btn1=9;
int btn2=8;
int nilaibtn1; //btn aktif low = bernilai 0
int nilaibtn2;

void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(btn1,INPUT);
pinMode(btn2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
nilaibtn1=digitalRead(btn1);
nilaibtn2=digitalRead(btn2);

if (nilaibtn1==1) {       // menyalakan LED 
  delay(1000);
  digitalWrite(led1,1);
  delay(1000);
  digitalWrite(led2,1);
  delay(1000);
  digitalWrite(led3,1);
  delay(1000);
  digitalWrite(led4,1);
  }
if (nilaibtn2==1) {       // mematikan LED
  delay(1000);
  digitalWrite(led1,0);
  delay(1000);
  digitalWrite(led2,0);
  delay(1000);
  digitalWrite(led3,0);
  delay(1000);
  digitalWrite(led4,0);
  
  }
}
