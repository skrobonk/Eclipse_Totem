// //Theatre-style crawling lights.
// void theaterChase(uint32_t c, uint8_t wait) {
//   for (int j=0; j<10; j++) {  //do 10 cycles of chasing
//     for (int q=0; q < 3; q++) {   
//       for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
//         if (i < 240){
//         strip.setPixelColor(i+q, c);    //turn every third pixel on
//         strip.show();
//         delay(wait);
        
//       for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
//         strip.setPixelColor(i+q, 0);        //turn every third pixel off
//       }}
//       else {
//        for (int y=0; y<8; y++){
//           for (int p=0; p<32; p++){
//             strip.setPixelColor(row_array[y][p], c);
//             strip.show();
//             delay(wait); 
//         for (int y=0; y<8; y++){
//           for (int p=0; p<32; p++){
//             strip.setPixelColor(row_array[y][p], 0);
//             strip.show();
//             delay(wait); 
//           }}
//       }
//     }}
//   }
// }}}