// #include <Adafruit_NeoPixel.h>
// #include <EEPROM.h>

// #define NUM_LEDS 496
// #define PIN 6
// Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);

// #define BUTTON 2
// byte selectedEffect=0;

// int const ordered_pixels[NUM_LEDS] = {
//   // Strip
//   0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,

//   // Matrix (8x32)
//   240, 255, 256, 271, 272, 287, 288, 303, 304, 319, 320, 335, 336, 351, 352, 367, 368, 383, 384, 399, 400, 415, 416, 431, 432, 447, 448, 463, 464, 479, 480, 495,
//   241, 254, 257, 270, 273, 286, 289, 302, 305, 318, 321, 334, 337, 350, 353, 366, 369, 382, 385, 398, 401, 414, 417, 430, 433, 446, 449, 462, 465, 478, 481, 494,
//   242, 253, 258, 269, 274, 285, 290, 301, 306, 317, 322, 333, 338, 349, 354, 367, 370, 381, 386, 397, 402, 419, 418, 429, 434, 445, 450, 463, 466, 477, 482, 493,
//   243, 252, 259, 268, 275, 284, 291, 300, 307, 316, 323, 332, 339, 348, 355, 364, 371, 380, 387, 396, 403, 412, 419, 428, 435, 444, 451, 460, 467, 476, 483, 492,
//   244, 251, 260, 267, 276, 283, 292, 299, 308, 315, 324, 331, 340, 347, 356, 363, 372, 379, 388, 395, 404, 411, 420, 427, 436, 443, 452, 459, 468, 475, 484, 491,
//   245, 250, 261, 266, 277, 282, 293, 298, 309, 314, 325, 330, 341, 346, 357, 362, 373, 378, 389, 394, 405, 410, 421, 426, 437, 442, 453, 458, 469, 474, 485, 490,
//   246, 249, 262, 265, 278, 281, 294, 305, 310, 313, 326, 329, 342, 345, 358, 361, 374, 377, 390, 393, 406, 409, 422, 425, 438, 441, 454, 457, 470, 473, 486, 489,
//   247, 248, 263, 264, 279, 280, 295, 296, 311, 312, 327, 328, 343, 344, 359, 360, 375, 376, 391, 392, 407, 408, 423, 424, 439, 440, 455, 456, 471, 472, 487, 488
// };

// void setup()
// {
//   strip.begin();
//   strip.show(); // Initialize all pixels to 'off'
//   strip.setBrightness(30);
//   pinMode(2,INPUT_PULLUP);  // internal pull-up resistor
//   attachInterrupt (digitalPinToInterrupt (BUTTON), changeEffect, CHANGE); // pressed
// }

// // *** REPLACE FROM HERE ***
// void loop() {
//   EEPROM.get(0,selectedEffect);
 
//   if(selectedEffect>9) {
//     selectedEffect=0;
//     EEPROM.put(0,0);
//   }
 
//   switch(selectedEffect) {
   
//     case 0  : {
//                 // RGBLoop - no parameters
//                 RGBLoop();
//                 break;
//               }

//     case 1  : {
//                 // CylonBounce - Color (red, green, blue), eye size, speed delay, end pause
//                 CylonBounce(0xff, 0x00, 0x00, 4, 10, 50);
//                 break;
//               }
             
//     case 2  : {
//                 // NewKITT - Color (red, green, blue), eye size, speed delay, end pause
//                 NewKITT(0xff, 0x00, 0x00, 8, 10, 50);
//                 break;
//               }
              
//     case 3 : {
//                 // Running Lights - Color (red, green, blue), wave dealy
//                 RunningLights(0xff,0x00,0x00, 50);  // red
//                 RunningLights(0xff,0xff,0xff, 50);  // white
//                 RunningLights(0x00,0x00,0xff, 50);  // blue
//                 break;
//               }
             

//     case 4 : {
//                 // rainbowCycle - speed delay
//                 rainbowCycle(20);
//                 break;
//               }


//     case 5 : {
//                 // theaterChaseRainbow - Speed delay
//                 theaterChaseRainbow(50);
//                 break;
//               }

//     case 6 : {
//                 // Fire - Cooling rate, Sparking rate, speed delay
//                 Fire(55,120,15);
//                 break;
//               }


//               // simple bouncingBalls not included, since BouncingColoredBalls can perform this as well as shown below
//               // BouncingColoredBalls - Number of balls, color (red, green, blue) array, continuous
//               // CAUTION: If set to continuous then this effect will never stop!!!


//     case 7 : {
//                 // meteorRain - Color (red, green, blue), meteor size, trail decay, random trail decay (true/false), speed delay
//                 meteorRain(0xff,0xff,0xff,10, 64, true, 30);
//                 break;
//               }

//     case 8:   {
//                 random_effect(0);
//                 break;
//               }
    
//     case 9:   {
//                 rainbow(0);
//                 break;
//               }

//   }
// }

// void changeEffect() {
//   if (digitalRead (BUTTON) == HIGH) {
//     selectedEffect++;
//     EEPROM.put(0, selectedEffect);
//     asm volatile ("  jmp 0");
//   }
// }
