
#define enA 3

#define in1 6 

#define in2 7 

#define in3 10 

#define in4 11

#define enB 9 

#define s1 4

#define s2 2 

#define s3 5

#define s4 8

#define s5 12

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);

pinMode(s1, INPUT); 

pinMode(s2, INPUT); 

pinMode(s3, INPUT);

pinMode(s4, INPUT);

pinMode(s5, INPUT);

pinMode(enA, OUTPUT); 

pinMode(in1, OUTPUT); 

pinMode(in2, OUTPUT); 

pinMode(in3, OUTPUT); 

pinMode(in4, OUTPUT); 

pinMode(enB, OUTPUT);

digitalWrite(enA, HIGH); 

digitalWrite(enB, HIGH); 

delay(1000);

}

void loop() {
  // put your main code here, to run repeatedly:
  if((digitalRead(s4) ==1)&&(digitalRead(s1) ==0)&&(digitalRead(s5) ==0))
  {
    right();
  }
  else if((digitalRead(s4) ==0)&&(digitalRead(s3) ==1)&&(digitalRead(s1) ==0)&&(digitalRead(s5) ==0))
  {
    forward();
  }
  else if((digitalRead(s4) ==0)&&(digitalRead(s3) ==0)&&(digitalRead(s2) ==1)&&(digitalRead(s1) ==0)&&(digitalRead(s5) ==0))
  {
    left();
  }
  else if((digitalRead(s4) ==0)&&(digitalRead(s3) ==0)&&(digitalRead(s2) ==0)&&(digitalRead(s1) ==0)&&(digitalRead(s5) ==0))
  {
    uturn();
  }
  else
  {
    Stop();
  }
}

void forward()
{
 analogWrite(enA, 50);
 analogWrite(enB, 50);

digitalWrite(in1, LOW); 

digitalWrite(in2, HIGH);  

digitalWrite(in3, HIGH);  

digitalWrite(in4, LOW); 

delay(1000);
}


void right(){
 analogWrite(enA, 50);
	analogWrite(enB, 50);

digitalWrite(in1, LOW); 

digitalWrite(in2, HIGH);  

digitalWrite(in3, LOW); 

digitalWrite(in4, HIGH);  

delay(10);
}


void left(){
  analogWrite(enA, 50);
	analogWrite(enB, 50);

digitalWrite(in1, HIGH); 

digitalWrite(in2, LOW);  

digitalWrite(in3, HIGH);  

digitalWrite(in4, LOW);

delay(10);

}


void uturn(){
  analogWrite(enA, 50);
	analogWrite(enB, 50);

digitalWrite(in1, LOW); 

digitalWrite(in2, HIGH);  

digitalWrite(in3, LOW); 

digitalWrite(in4, HIGH);  

delay(100);

digitalWrite(in1, LOW); 

digitalWrite(in2, HIGH);  

digitalWrite(in3, LOW); 

digitalWrite(in4, HIGH);  

delay(10);
}


void Stop(){
  digitalWrite(in1, LOW); 
  
  digitalWrite(in2, LOW); 

  digitalWrite(in3, LOW);

  digitalWrite(in4, LOW); 
}


  
  
    

   
