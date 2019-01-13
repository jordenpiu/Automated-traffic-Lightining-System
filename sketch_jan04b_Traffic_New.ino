int IR1=8;
int IR2=7;
int ledr=10;
int ledG=10;
int ledg=12;
int ledR=12;
int n1;
int n2;
// (ledr and ledg are for road 1) 
//(ledR and ledG are for road2)
void setup() {
  Serial.begin(9600);
  pinMode(IR1,INPUT);
  pinMode(IR1,INPUT);
  pinMode(ledR,OUTPUT);
  pinMode(ledG,OUTPUT);
  pinMode(ledr,OUTPUT);
  pinMode(ledg,OUTPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  int ir1=digitalRead(8);
  if (ir1==1)
  {n1++;
  Serial.print("n1= ");
  Serial.println(n1);
  delay(500);}

  int ir2=digitalRead(7);
  if (ir2==1)
  {n2++;
  Serial.print("n2= ");
  Serial.println(n2);
  delay(500);}



 
  
  if(n1>n2)
  {
    digitalWrite(ledr,HIGH);
    Serial.println("on Road 2 Red LED IS GLOWING");
    digitalWrite(led2,HIGH);
    digitalWrite(ledg,LOW);
       
    
    digitalWrite(led1,LOW);
    Serial.println("on Road 1 Green LED IS GLOWING");

  }
  if (n2>n1)
  {  digitalWrite(ledr,LOW);
   digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    Serial.println("on Road 1 Red LED IS GLOWING");
    digitalWrite(ledg,HIGH);
    Serial.println("on Road 2 Green LED IS GLOWING");
    
    
  }}
  // put your main code here, to run repeatedly:

}
