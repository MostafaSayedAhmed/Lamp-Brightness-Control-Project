bool check1=0;
bool check2=0;
int count=0;
int brightness=0;
void setup() {
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  check1= digitalRead(2);
  if(check1==HIGH)
  {
    count++;
  }
  check2= digitalRead(3);
  if(check2==HIGH)
  {
    count--;
  }
  if(count >9)
  {count =0;}
  if(count <0)
  {count = 9;}
  brightness=map(count,0,9,0,255);
  analogWrite(5,brightness);
  Serial.println(brightness);
  delay(150);
}
