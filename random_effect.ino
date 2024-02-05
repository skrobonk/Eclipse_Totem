// Fill the dots one after the other with a random color
void Random_effect(uint32_t c, uint8_t wait) {
  uint16_t i, j, p, y;

  for(uint16_t i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(ordered_pixels[i], random(255));
      strip.show();
      delay(0);
  }
}
