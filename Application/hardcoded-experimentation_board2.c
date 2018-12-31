/*
 * Copyright (C) Edward Lu
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 *
 * See AUTHORS.md for complete list of NDN IOT PKG authors and contributors.
 */

#include "hardcoded-experimentation.h"

// these are just some hardcoded values I used for evaluating the sign-on as I implemented it

const uint8_t DEVICE_CAPABILITIES[SIGN_ON_BASIC_CLIENT_DEVICE_CAPABILITIES_MAX_LENGTH] = {
  0x05,
};

const uint8_t DEVICE_IDENTIFIER[SIGN_ON_BASIC_CLIENT_DEVICE_IDENTIFIER_MAX_LENGTH] = {
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02,
};

// these are the raw 32 bytes of the bootstrapping ecc private key
const uint8_t BOOTSTRAP_ECC_PRIVATE[32] = {
  0xD8, 0x9A, 0x9E, 0xD9, 0xD4, 0x5A, 0xFD, 0xA1, 0xE5, 0xA4, 
  0x29, 0x73, 0x2B, 0x18, 0xE5, 0x51, 0xC4, 0xB0, 0x77, 0xEF, 
  0xA3, 0x5E, 0xB3, 0x55, 0x63, 0x73, 0xBC, 0x13, 0xBE, 0xE2, 
  0x5C, 0x2C,
};

const uint8_t BOOTSTRAP_ECC_PUBLIC_NO_POINT_IDENTIFIER[64] = {
  0x41, 0xA0, 0x02, 0x0C, 0x65, 0xCA, 0x1B, 0xD0, 0xB4, 0x4B, 
  0x0B, 0xC9, 0xD3, 0x92, 0xE2, 0x14, 0xDB, 0x7A, 0x97, 0xC3, 
  0x22, 0xEA, 0xC7, 0xD7, 0xEA, 0x05, 0x77, 0xFB, 0x74, 0x4C, 
  0xC0, 0x86, 0x8F, 0xA6, 0xF9, 0x21, 0x72, 0x38, 0x92, 0xF3, 
  0x69, 0xA9, 0xAA, 0x82, 0xE0, 0xEC, 0x69, 0x77, 0x59, 0xA8, 
  0x6C, 0x5E, 0x7D, 0x74, 0x96, 0x1D, 0xB9, 0xCD, 0x9A, 0x3D, 
  0xC0, 0x2F, 0x86, 0x4A,
};

const uint8_t SECURE_SIGN_ON_CODE[SIGN_ON_BASIC_ECC_256_SECURE_SIGN_ON_CODE_LENGTH] = {
  0x30, 0x59, 0x30, 0x13, 0x06, 0x07, 0x2A, 0x86, 0x48, 0xCE, 
  0x3D, 0x02, 0x01, 0x06, 0x08, 0x2A,
};
