 int H=9;
 int L=10;

void setup ()
{

   pinMode(L,OUTPUT);
   pinMode(H,OUTPUT);
 
  }
void loop(){ 
  
  for(int L=0; L<255; L++){
   digitalWrite(10,L);
    delay(2);}
  for(int H=0; H<255; H++){
    digitalWrite(9,H);
    delay(2);}
   delay(100);
  for(int L=255; L>=0; L--) {
    digitalWrite(10,L);
    delay(2);}
  for(int H=255; H>=0; H--){
    digitalWrite(9,H);
    delay(2);}
    delay(1000);

}
