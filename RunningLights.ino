void RunningLights(byte red, byte green, byte blue, int WaveDelay) {
  int Position=0;
 
  for(int j=0; j<NUM_LEDS*2; j++)
  {
      Position++; // = 0; //Position + Rate;
      for(int i=0; i<NUM_LEDS; i++) {
        // sine wave, 3 offset waves make a rainbow!
        //float level = sin(i+Position) * 127 + 128;
        //setPixel(i,level,0,0);
        //float level = sin(i+Position) * 127 + 128;
        strip.setPixelColor(i,((sin(ordered_pixels[i+Position]) * 127 + 128)/255)*Wheel(i),
                   ((sin(ordered_pixels[i+Position]) * 127 + 128)/255)*Wheel(i),
                   ((sin(ordered_pixels[i+Position]) * 127 + 128)/255)*Wheel(i));
      }
     
      strip.show();
      delay(WaveDelay);
  }
}