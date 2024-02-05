void NewKITT(byte red, byte green, byte blue, int EyeSize, int SpeedDelay, int ReturnDelay){
  RightToLeft(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
  LeftToRight(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
  OutsideToCenter(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
  CenterToOutside(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
  LeftToRight(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
  RightToLeft(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
  OutsideToCenter(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
  CenterToOutside(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
}

void CenterToOutside(byte red, byte green, byte blue, int EyeSize, int SpeedDelay, int ReturnDelay) {
  for(int i =((NUM_LEDS-EyeSize)/2); i>=0; i--) {
    //strip.show(0);
    strip.setPixelColor(ordered_pixels[i], 0);
    strip.setPixelColor(ordered_pixels[i], red/10, green/10, blue/10);
    for(int j = 1; j <= EyeSize; j++) {
      strip.setPixelColor(ordered_pixels[i+j], red, green, blue);
    }
    strip.setPixelColor(ordered_pixels[i+EyeSize+1], red/10, green/10, blue/10);
   
    strip.setPixelColor(ordered_pixels[NUM_LEDS-i], red/10, green/10, blue/10);
    for(int j = 1; j <= EyeSize; j++) {
      strip.setPixelColor(ordered_pixels[NUM_LEDS-i-j], red, green, blue);
    }
    strip.setPixelColor(ordered_pixels[NUM_LEDS-i-EyeSize-1], red/10, green/10, blue/10);
   
    strip.show();
    delay(SpeedDelay);
  }
  delay(ReturnDelay);
}

void OutsideToCenter(byte red, byte green, byte blue, int EyeSize, int SpeedDelay, int ReturnDelay) {
  for(int i = 0; i<=((NUM_LEDS-EyeSize)/2); i++) {
    //strip.show(0);
    strip.setPixelColor(ordered_pixels[i], 0);
    strip.setPixelColor(ordered_pixels[i], red/10, green/10, blue/10);
    for(int j = 1; j <= EyeSize; j++) {
      strip.setPixelColor(ordered_pixels[i+j], red, green, blue);
    }
    strip.setPixelColor(ordered_pixels[i+EyeSize+1], red/10, green/10, blue/10);
   
    strip.setPixelColor(ordered_pixels[NUM_LEDS-i], red/10, green/10, blue/10);
    for(int j = 1; j <= EyeSize; j++) {
      strip.setPixelColor(ordered_pixels[NUM_LEDS-i-j], red, green, blue);
    }
    strip.setPixelColor(ordered_pixels[NUM_LEDS-i-EyeSize-1], red/10, green/10, blue/10);
    strip.show();
    delay(SpeedDelay);
  }
  delay(ReturnDelay);
}

void LeftToRight(byte red, byte green, byte blue, int EyeSize, int SpeedDelay, int ReturnDelay) {
  for(int i = 0; i < NUM_LEDS-EyeSize-2; i++) {
    strip.setPixelColor(ordered_pixels[i], 0); //strip.show(0);
    strip.setPixelColor(ordered_pixels[i], red/10, green/10, blue/10);
    for(int j = 1; j <= EyeSize; j++) {
      strip.setPixelColor(ordered_pixels[i+j], red, green, blue);
    }
    strip.setPixelColor(ordered_pixels[i+EyeSize+1], red/10, green/10, blue/10);
    strip.show();
    delay(SpeedDelay);
  }
  delay(ReturnDelay);
}

void RightToLeft(byte red, byte green, byte blue, int EyeSize, int SpeedDelay, int ReturnDelay) {
  for(int i = NUM_LEDS-EyeSize-2; i > 0; i--) {
    strip.setPixelColor(ordered_pixels[i], 0);  //strip.show(0);
    strip.setPixelColor(ordered_pixels[i], red/10, green/10, blue/10);
    for(int j = 1; j <= EyeSize; j++) {
      strip.setPixelColor(ordered_pixels[i+j], red, green, blue);
    }
    strip.setPixelColor(ordered_pixels[i+EyeSize+1], red/10, green/10, blue/10);
    strip.show();
    delay(SpeedDelay);
  }
  delay(ReturnDelay);
}