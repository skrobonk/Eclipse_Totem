// // Slightly different, this makes the rainbow equally distributed throughout

// void rainbowCycle(uint8_t wait) {
//   for (auto color = 0; color < MAX_UINT8; color++) {
//     for (auto pixel = 0; pixel < strip.numPixels(); pixel++) {
//       strip.setPixelColor(ordered_pixels[pixel], Wheel(((pixel * 256 / strip.numPixels()) + color) & 255));
//       strip.show();
//       delay(wait);
//     }
//   }
// }

void rainbowCycle(int SpeedDelay) {
  byte *c;
  uint16_t i, j;

  for(j=0; j<256*5; j++) { // 5 cycles of all colors on wheel
    for(i=0; i< NUM_LEDS; i++) {
      c=Wheel_2(((i * 256 / NUM_LEDS) + j) & 255);
      strip.setPixelColor(ordered_pixels[i], *c, *(c+1), *(c+2));
    }
    strip.show();
    delay(SpeedDelay);
  }
}

byte * Wheel_2(byte WheelPos) {
  static byte c[3];
 
  if(WheelPos < 85) {
   c[0]=WheelPos * 3;
   c[1]=255 - WheelPos * 3;
   c[2]=0;
  } else if(WheelPos < 170) {
   WheelPos -= 85;
   c[0]=255 - WheelPos * 3;
   c[1]=0;
   c[2]=WheelPos * 3;
  } else {
   WheelPos -= 170;
   c[0]=0;
   c[1]=WheelPos * 3;
   c[2]=255 - WheelPos * 3;
  }

  return c;
}