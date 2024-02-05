
void CylonBounce(byte red, byte green, byte blue, int EyeSize, int SpeedDelay, int ReturnDelay){

  for(int i = 0; i < strip.numPixels()-EyeSize-2; i++) {
    strip.show();
    strip.setPixelColor(i, red/10, green/10, blue/10);
    for(int j = 1; j <= EyeSize; j++) {
      strip.setPixelColor(i+j, red, green, blue);
    }
    strip.setPixelColor(i+EyeSize+1, red/10, green/10, blue/10);
    strip.show();
    delay(SpeedDelay);
  }

  delay(ReturnDelay);

  for(int i = strip.numPixels()-EyeSize-2; i > 0; i--) {
    strip.show();
    strip.setPixelColor(i, red/10, green/10, blue/10);
    for(int j = 1; j <= EyeSize; j++) {
      strip.setPixelColor(i+j, red, green, blue);
    }
    strip.setPixelColor(i+EyeSize+1, red/10, green/10, blue/10);
    strip.show();
    delay(SpeedDelay);
  }
 
  delay(ReturnDelay);
}