/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: bomba de agua
   alumno:Carlos Ceballos
   Fecha: 20 de abril
*/
#define rele 2
#define Transistor 3
#define lED 5



 

 void setup()// defino los pines de entradas y salida
 {
  pinMode(rele  , OUTPUT);
  pinMode(lED , OUTPUT);
  pinMode(Transistor , INPUT);
 }
 void loop()
 {
  bool ET = digitalRead(Transistor); //lee el transistor y guarda valor en la variable
 
    if(ET == LOW)
    {
    digitalWrite(rele, LOW);
    digitalWrite(lED, HIGH);
    }
       
    if(ET == HIGH);
    {
    digitalWrite(rele,HIGH);
    digitalWrite(lED, LOW);
    }
 }
