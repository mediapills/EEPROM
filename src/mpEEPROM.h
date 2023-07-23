/*!
 *  @file       mpEEPROM.h
 *  Project     mediapills::hardware
 *  @brief      A Library to implement Arduino build in EEPROM class wrapper.
 *  @version    0.0.1
 *  @author     Andrew Yatskovets
 *  @date       16/07/2023
 *  @license    MIT - (c) 2023 - Mediapills
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

#ifndef _MP_EEPROM_
#define _MP_EEPROM_

#include "Arduino.h"

namespace mediapills { namespace hardware {

class mpEEPROMClass {
  private:
    int idx;

  public:
    // constructor
    mpEEPROMClass(int idx = 0);

    void setAddress(int idx);
    void init(int idx);

    void save(uint8_t val);
    uint8_t load();
};

}} // end namespace mediapills::hardware

#endif
