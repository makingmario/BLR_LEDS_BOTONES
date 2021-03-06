/*
Manejo de leds y botones con Basic Line Robot V1.0
Por: MakingMario 
De: Making Robotics Colombia  
*/

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define LEDTX   1          //PD1 (Integrado en BabyOrangutan)
#define LED1    9          //PB1 (izquierdo)
#define LED2    7          //PD7 (derecho)

#define PUSH1   10         //botón PB2 (izquierdo)
#define PUSH2   4          //botón PD4 (derecho)

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void setup() {
  
  pinMode(LEDTX, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
 
  pinMode(PUSH1, INPUT);
  digitalWrite(PUSH1, HIGH);//ACTIVA PULL UP

  pinMode(PUSH2, INPUT);
  digitalWrite(PUSH2, HIGH);//ACTIVA PULL UP
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void loop() 
{

   if(digitalRead(PUSH1)==LOW) 
   {
    digitalWrite(LED1,HIGH);
   }else
   {
    digitalWrite(LED1,LOW);
   }
     
   if(digitalRead(PUSH2)==LOW) 
   {
      digitalWrite(LED2,HIGH);
   }else
   {
    digitalWrite(LED2,LOW);  
   }
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


