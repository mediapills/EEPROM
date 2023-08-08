/*!
 *  @file       Read.ino
 *  Project     mediapills::hardware
 *  @brief      A Library to implement Arduino build in EEPROM class wrapper.
 *  @version    0.0.1
 *  @author     Andrew Yatskovets
 *  @date       16/07/2023
 *
 * Copyright (c) 2023 MediaPills
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include "mpEEPROM.h"

using namespace mediapills::hardware;

// the location to read from, starting from 0 (int)
#define EEPROM_ADDRESS 0

mpEEPROMClass memory(EEPROM_ADDRESS);

void setup() {
  // Reads a byte from the EEPROM
  byte value = memory.load();
}

void loop() {
  // your code goes here ...
}
