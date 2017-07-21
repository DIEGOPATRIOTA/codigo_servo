/**
 * Projetos Arduino
 * 
 * @author diego patriota
 * @link https://github.com/diegopatriota
 * 19/05/2016 
 */

//inclusão de biblioteca
#include <Servo.h>

//variáveis
int pos = 0;    
int pos2 = 0;    
Servo myservo;
int servoPin = 3;

//Configuração inicial
void setup()
{
myservo.attach(servoPin); 
}


//Loop para execução da funcionalidade
void loop(){
   
 
  for(pos = 0; pos < 90; pos++){
    myservo.write(pos);
    delay(15);
  }
  //parar tempo em milisegundos
  delay(1000);
  
  for(pos = 90; pos > 0; pos--){
    myservo.write(pos);
    delay(15);
  }
}

