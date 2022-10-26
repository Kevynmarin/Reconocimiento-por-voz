#include <Servo.h>

int option;
Servo servo;

void setup(){

  Serial.begin(9600);
  Serial.println("Conexion");
  servo.attach(A0);

}
void loop() {
  if(Serial.available() > 0){
    option = Serial.read();
    Serial.println(option);
    if(option == 66){
      servo.write(0);
    }
  else if (option == 65){
    servo.write(90);
    }
  }
}
