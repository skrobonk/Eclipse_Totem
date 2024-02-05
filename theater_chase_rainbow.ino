//Theatre-style crawling lights with rainbow effect
void theaterChaseRainbow(uint8_t wait) {
  for (auto cycle = 0; cycle < 100; cycle++) {  //do 10 cycles of chasing
    for (auto offset = 0; offset < CHASE_LEN; offset++) {
      for (uint16_t pixel = 0; pixel < strip.numPixels(); pixel++) {
        auto color = (cycle * strip.numPixels() + pixel) % MAX_UINT8;
        if (((pixel + offset) % CHASE_LEN) == 0) {
            // Turn every CHASE_LEN pixel on
            strip.setPixelColor(ordered_pixels[pixel], Wheel(color));
          }
        else {
          // Turn the rest off
          strip.setPixelColor(ordered_pixels[pixel], 0);
        }
      }
      strip.show();
      delay(wait);
    }
  }
}
