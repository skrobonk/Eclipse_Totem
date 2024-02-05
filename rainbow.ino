void rainbow(uint8_t wait) {
  for (auto color = 0; color < MAX_UINT8; color++) {
    for (auto pixel = 0; pixel < strip.numPixels(); pixel++) {
      strip.setPixelColor(ordered_pixels[pixel], Wheel(pixel));
      strip.show();
      delay(wait);
    }
  }
}