//https://www.youtube.com/c/VTMVlogVoThongMinh
#include <Stepper.h>
const int stepsPerRevolution = 20; //360 độ / 18 độ = 20
//Khai báo các chân để điều khiển step là 8 9 10 11 như trong Proteus
Stepper myStepper(stepsPerRevolution, 11, 10, 9, 8);
//....................................................
void setup() {
  //tốc độ 50rpm
  myStepper.setSpeed(50);
  pinMode(8, OUTPUT); //Khai báo chân xuất tín hiệu
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}
//....................................................
void loop() {
  Serial.println("+360 do theo chieu kim dong ho -->"); //In ra dòng chữ trên Serial
  myStepper.step(stepsPerRevolution); // Quay thuận 1 vòng 360 độ
  delay(1000); //Sau đó dừng 1 giây

  Serial.println("-360 do nguoc chieu kim dong ho <--");
  myStepper.step(-stepsPerRevolution);
  delay(1000);
}
