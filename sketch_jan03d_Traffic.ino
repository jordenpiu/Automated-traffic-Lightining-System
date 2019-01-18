int IR1=7;//FOR ROAD1             //THIS CODE IS FOR 2 ROAD CONNECTING POINT AUTOMATIC TRAFFIC MANAGEMENT 
int IR2=8;//FOR ROAD 2
int ledr=12;//RED LIGHT FOR ROAD 1
int ledg=4;//GREEN LIGHT FOR ROAD 1
int ledR=11;//RED LIGHT FOR ROAD 2
int ledG=13;//GREEN LIGHT FOR ROAD 2
int n1;//COUNT OF VEHICLES OF ROAD 1
int n2;//COUNT OF VEHIVLES OF ROAD 2
void setup() {
  Serial.begin(9600);
  pinMode(ledr,OUTPUT);
  pinMode(ledg,OUTPUT);
  pinMode(ledR,OUTPUT);
  pinMode(ledG,OUTPUT);
  pinMode(IR1,INPUT);
  pinMode(IR2,INPUT);
  }

void loop() {
  int ir1=digitalRead(7);
 if (ir1==1)     //IF IN ROAD 1 VEHICLES ARE DETECTED INCREMENT THE COUNT N1
{ n1++;
  Serial.print("n1=");
  Serial.println(n1);
   delay(500);}
  
  int ir2=digitalRead(8);
  if (ir2==1)   //IF IN ROAD 2 VEHICLES ARE DETECTED INCREMENT COUNT N2
  {
  n2++;
  Serial.print("n2=");
  Serial.println(n2);
 delay(500);}
  
  if(n1>n2) //TRAFFIC DENSITY IN ROAD 1 IS HIGHER THAN ROAD 2
  {
    digitalWrite(ledR,HIGH); //RED LIGHT WILL GLOW ON ROAD 2
    Serial.println("on Road 2 Red LIGHT IS GLOWING");
    digitalWrite(ledG,LOW);  
    digitalWrite(ledr,LOW);
    digitalWrite(ledg,HIGH);
    Serial.println("on Road 1 Green LIGHT IS GLOWING");
  }
  
  if (n2>n1) //TRAFIC DENSITY IN ROAD 2 IS HIGHER THAN ROAD 1
  {  digitalWrite(ledg,LOW);
   digitalWrite(ledR,LOW);
   digitalWrite(ledr,HIGH); 
    Serial.println("on Road 1 Red LIGHT IS GLOWING");
    digitalWrite(ledG,HIGH);
    Serial.println("on Road 2 Green LIGHT IS GLOWING");
    }
}
 


