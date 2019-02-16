int ledsArray[] = {1,2,3,4,5,6,7,8};
int count = 0;



void setup() {
for(count = 0; count < 8; count++)
{pinMode (ledsArray[count], OUTPUT);}
}

void loop() {
  
 for(count = 0; count < 8; count++){
  digitalWrite(ledsArray[count],HIGH);
  delay(3);
digitalWrite(ledsArray[count],LOW);
  delay(3);
 }
  if(count == 8){
  for(count = 8; count > 0; count--){
  digitalWrite(ledsArray[count],HIGH);
  delay(3);
digitalWrite(ledsArray[count],LOW);
  delay(3);
  }}}


