// Fill the dots one after the other with a color
void colorWipe(uint32_t color, uint8_t wait) {
  for (uint16_t pixel = 0; pixel < strip.numPixels(); pixel++) {
    strip.setPixelColor(ordered_pixels[pixel], color);
    strip.show();
    delay(0);
  }
}