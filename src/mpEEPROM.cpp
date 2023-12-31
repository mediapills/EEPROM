/*!
 *  @file       mpEEPROM.cpp
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

#include "Arduino.h"

namespace mediapills {
namespace hardware {

void mpEEPROMClass::setAddress(uint8_t idx) { this->idx = idx; }

uint8_t mpEEPROMClass::load() {
  uint8_t val = 0;
  val = EEPROM.read(idx);

  Serial.print("mpEEPROMClass load data: idx => ");
  Serial.print(idx);
  Serial.print(", val => ");
  Serial.println(val);

  return val;
}

void mpEEPROMClass::save(uint8_t val) {
  EEPROM.write(idx, val);

  Serial.print("mpEEPROMClass save data: idx => ");
  Serial.print(idx);
  Serial.print(", val => ");
  Serial.println(val);
}

}  //  namespace hardware
}  //  namespace mediapills
