#ifndef RGBLIGHT_EFFECT_BREATHE_TABLE
#define RGBLIGHT_EFFECT_BREATHE_TABLE

const uint8_t rgblight_effect_breathe_table[] PROGMEM = {
  /* #define RGBLIGHT_EFFECT_BREATHE_CENTER   1.85 */
  /* #define RGBLIGHT_EFFECT_BREATHE_MAX      255 */

 #if RGBLIGHT_BREATHE_TABLE_SIZE == 256
  0x22,  0x23,  0x25,  0x26,  0x28,  0x29,  0x2a,  0x2c,
  0x2d,  0x2f,  0x30,  0x32,  0x33,  0x35,  0x36,  0x38,
  0x3a,  0x3b,  0x3d,  0x3e,  0x40,  0x42,  0x43,  0x45,
  0x47,  0x49,  0x4a,  0x4c,  0x4e,  0x50,  0x51,  0x53,
  0x55,  0x57,  0x59,  0x5a,  0x5c,  0x5e,  0x60,  0x62,
  0x64,  0x66,  0x68,  0x69,  0x6b,  0x6d,  0x6f,  0x71,
  0x73,  0x75,  0x77,  0x79,  0x7b,  0x7d,  0x7f,  0x81,
  0x83,  0x85,  0x87,  0x89,  0x8a,  0x8c,  0x8e,  0x90,
  0x92,  0x94,  0x96,  0x98,  0x9a,  0x9c,  0x9e,  0x9f,
  0xa1,  0xa3,  0xa5,  0xa7,  0xa8,  0xaa,  0xac,  0xae,
  0xaf,  0xb1,  0xb3,  0xb4,  0xb6,  0xb8,  0xb9,  0xbb,
  0xbc,  0xbe,  0xbf,  0xc1,  0xc2,  0xc3,  0xc5,  0xc6,
  0xc7,  0xc9,  0xca,  0xcb,  0xcc,  0xcd,  0xce,  0xd0,
  0xd1,  0xd2,  0xd2,  0xd3,  0xd4,  0xd5,  0xd6,  0xd7,
  0xd7,  0xd8,  0xd9,  0xd9,  0xda,  0xda,  0xdb,  0xdb,
  0xdb,  0xdc,  0xdc,  0xdc,  0xdc,  0xdc,  0xdd,  0xdd,
  0xdd,  0xdd,  0xdc,  0xdc,  0xdc,  0xdc,  0xdc,  0xdb,
  0xdb,  0xdb,  0xda,  0xda,  0xd9,  0xd9,  0xd8,  0xd7,
  0xd7,  0xd6,  0xd5,  0xd4,  0xd3,  0xd2,  0xd2,  0xd1,
  0xd0,  0xce,  0xcd,  0xcc,  0xcb,  0xca,  0xc9,  0xc7,
  0xc6,  0xc5,  0xc3,  0xc2,  0xc1,  0xbf,  0xbe,  0xbc,
  0xbb,  0xb9,  0xb8,  0xb6,  0xb4,  0xb3,  0xb1,  0xaf,
  0xae,  0xac,  0xaa,  0xa8,  0xa7,  0xa5,  0xa3,  0xa1,
  0x9f,  0x9e,  0x9c,  0x9a,  0x98,  0x96,  0x94,  0x92,
  0x90,  0x8e,  0x8c,  0x8a,  0x89,  0x87,  0x85,  0x83,
  0x81,  0x7f,  0x7d,  0x7b,  0x79,  0x77,  0x75,  0x73,
  0x71,  0x6f,  0x6d,  0x6b,  0x69,  0x68,  0x66,  0x64,
  0x62,  0x60,  0x5e,  0x5c,  0x5a,  0x59,  0x57,  0x55,
  0x53,  0x51,  0x50,  0x4e,  0x4c,  0x4a,  0x49,  0x47,
  0x45,  0x43,  0x42,  0x40,  0x3e,  0x3d,  0x3b,  0x3a,
  0x38,  0x36,  0x35,  0x33,  0x32,  0x30,  0x2f,  0x2d,
  0x2c,  0x2a,  0x29,  0x28,  0x26,  0x25,  0x23,  0x22
 #endif /* 256 bytes table */

 #if RGBLIGHT_BREATHE_TABLE_SIZE == 128
  0x22,  0x25,  0x28,  0x2a,
  0x2d,  0x30,  0x33,  0x36,
  0x3a,  0x3d,  0x40,  0x43,
  0x47,  0x4a,  0x4e,  0x51,
  0x55,  0x59,  0x5c,  0x60,
  0x64,  0x68,  0x6b,  0x6f,
  0x73,  0x77,  0x7b,  0x7f,
  0x83,  0x87,  0x8a,  0x8e,
  0x92,  0x96,  0x9a,  0x9e,
  0xa1,  0xa5,  0xa8,  0xac,
  0xaf,  0xb3,  0xb6,  0xb9,
  0xbc,  0xbf,  0xc2,  0xc5,
  0xc7,  0xca,  0xcc,  0xce,
  0xd1,  0xd2,  0xd4,  0xd6,
  0xd7,  0xd9,  0xda,  0xdb,
  0xdb,  0xdc,  0xdc,  0xdd,
  0xdd,  0xdc,  0xdc,  0xdc,
  0xdb,  0xda,  0xd9,  0xd8,
  0xd7,  0xd5,  0xd3,  0xd2,
  0xd0,  0xcd,  0xcb,  0xc9,
  0xc6,  0xc3,  0xc1,  0xbe,
  0xbb,  0xb8,  0xb4,  0xb1,
  0xae,  0xaa,  0xa7,  0xa3,
  0x9f,  0x9c,  0x98,  0x94,
  0x90,  0x8c,  0x89,  0x85,
  0x81,  0x7d,  0x79,  0x75,
  0x71,  0x6d,  0x69,  0x66,
  0x62,  0x5e,  0x5a,  0x57,
  0x53,  0x50,  0x4c,  0x49,
  0x45,  0x42,  0x3e,  0x3b,
  0x38,  0x35,  0x32,  0x2f,
  0x2c,  0x29,  0x26,  0x23
 #endif /* 128 bytes table */

 #if RGBLIGHT_BREATHE_TABLE_SIZE == 64
  0x22,  0x28,
  0x2d,  0x33,
  0x3a,  0x40,
  0x47,  0x4e,
  0x55,  0x5c,
  0x64,  0x6b,
  0x73,  0x7b,
  0x83,  0x8a,
  0x92,  0x9a,
  0xa1,  0xa8,
  0xaf,  0xb6,
  0xbc,  0xc2,
  0xc7,  0xcc,
  0xd1,  0xd4,
  0xd7,  0xda,
  0xdb,  0xdc,
  0xdd,  0xdc,
  0xdb,  0xd9,
  0xd7,  0xd3,
  0xd0,  0xcb,
  0xc6,  0xc1,
  0xbb,  0xb4,
  0xae,  0xa7,
  0x9f,  0x98,
  0x90,  0x89,
  0x81,  0x79,
  0x71,  0x69,
  0x62,  0x5a,
  0x53,  0x4c,
  0x45,  0x3e,
  0x38,  0x32,
  0x2c,  0x26
 #endif /* 64 bytes table */
};

static const int table_scale = 256/sizeof(rgblight_effect_breathe_table);

#endif /* RGBLIGHT_EFFECT_BREATHE_TABLE */
