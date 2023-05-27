const char i2casm[] = {
	0x13, 0xe8, 0x30, 0x07, 0x21, 0x30, 0x78, 0x30,
	0x80, 0x30, 0x21, 0x30, 0x80, 0x30, 0x00, 0x30,
	0x80, 0x30, 0x3f, 0x30, 0x80, 0x30, 0x22, 0x30,
	0x80, 0x30, 0x00, 0x30, 0x80, 0x30, 0x03, 0x30,
	0x80, 0x30, 0x20, 0x30, 0x80, 0x30, 0x01, 0x30,
	0x40, 0x30, 0xc0, 0x30, 0x00, 0x30, 0x1c, 0x30,
	0xf0, 0x30, 0xc0, 0x30, 0x00, 0x30, 0x1c, 0x30,
	0xe0, 0x30, 0xff, 0x30, 0xfc, 0x30, 0xff, 0x30,
	0xc7, 0x30, 0xff, 0x30, 0xfc, 0x30, 0xff, 0x30,
	0x8f, 0x30, 0xff, 0x30, 0xfc, 0x30, 0xff, 0x30,
	0x1f, 0x30, 0xff, 0x30, 0xfc, 0x30, 0xff, 0x30,
	0x3f, 0x30, 0xff, 0x30, 0xfc, 0x30, 0xff, 0x30,
	0x3f, 0x30, 0xff, 0x30, 0xfc, 0x30, 0xff, 0x30,
	0x3f, 0x30, 0xff, 0x30, 0xfc, 0x30, 0xff, 0x30,
	0x3f, 0x30, 0xff, 0x30, 0x3c, 0x30, 0x80, 0x30,
	0x3f, 0x30, 0xff, 0x30, 0x3c, 0x30, 0x80, 0x30,
	0x3f, 0x30, 0xff, 0x30, 0x3c, 0x30, 0xff, 0x30,
	0x3f, 0x30, 0xff, 0x30, 0x3c, 0x30, 0xff, 0x30,
	0x3f, 0x30, 0xff, 0x30, 0x3c, 0x30, 0xfe, 0x30,
	0x1f, 0x30, 0xff, 0x30, 0x3c, 0x30, 0xfc, 0x30,
	0x8f, 0x30, 0xff, 0x30, 0x3c, 0x30, 0xf8, 0x30,
	0xc7, 0x30, 0xff, 0x30, 0x3c, 0x30, 0x01, 0x30,
	0xe0, 0x30, 0xff, 0x30, 0x3c, 0x30, 0x03, 0x30,
	0xf0, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xe7, 0x30, 0xf7, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xc3, 0x30, 0xe7, 0x30,
	0xff, 0x30, 0xff, 0x30, 0x81, 0x30, 0xcf, 0x30,
	0xff, 0x30, 0xff, 0x30, 0x00, 0x30, 0x9f, 0x30,
	0xff, 0x30, 0xff, 0x30, 0x00, 0x30, 0x3f, 0x30,
	0xff, 0x30, 0xff, 0x30, 0x81, 0x30, 0x7f, 0x30,
	0xfe, 0x30, 0xff, 0x30, 0xc3, 0x30, 0xff, 0x30,
	0xfc, 0x30, 0xff, 0x30, 0xe7, 0x30, 0xff, 0x30,
	0xf9, 0x30, 0x8f, 0x30, 0xff, 0x30, 0xe1, 0x30,
	0xf3, 0x30, 0x07, 0x30, 0xff, 0x30, 0xc0, 0x30,
	0xe7, 0x30, 0x03, 0x30, 0x7e, 0x30, 0x80, 0x30,
	0xcf, 0x30, 0x01, 0x30, 0x3c, 0x30, 0x00, 0x30,
	0x9f, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30,
	0x9f, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30,
	0x9f, 0x30, 0x00, 0x30, 0x18, 0x30, 0x00, 0x30,
	0x9f, 0x30, 0x01, 0x30, 0x7c, 0x30, 0x80, 0x30,
	0x9f, 0x30, 0x03, 0x30, 0xfe, 0x30, 0xc0, 0x30,
	0x8f, 0x30, 0x07, 0x30, 0xff, 0x30, 0xe1, 0x30,
	0xc7, 0x30, 0x87, 0x30, 0xff, 0x30, 0xf3, 0x30,
	0xe3, 0x30, 0xc7, 0x30, 0xcf, 0x30, 0xff, 0x30,
	0xe1, 0x30, 0xe3, 0x30, 0x87, 0x30, 0xff, 0x30,
	0xe0, 0x30, 0xf1, 0x30, 0x03, 0x30, 0x7f, 0x30,
	0xc0, 0x30, 0xf9, 0x30, 0x01, 0x30, 0x3e, 0x30,
	0x80, 0x30, 0xf9, 0x30, 0x00, 0x30, 0x18, 0x30,
	0x00, 0x30, 0xf9, 0x30, 0x00, 0x30, 0x00, 0x30,
	0x00, 0x30, 0xf9, 0x30, 0x00, 0x30, 0x00, 0x30,
	0x00, 0x30, 0xf9, 0x30, 0x00, 0x30, 0x3c, 0x30,
	0x80, 0x30, 0xf3, 0x30, 0x01, 0x30, 0x7e, 0x30,
	0xc0, 0x30, 0xe7, 0x30, 0x03, 0x30, 0xff, 0x30,
	0xe0, 0x30, 0xcf, 0x30, 0x87, 0x30, 0xff, 0x30,
	0xf1, 0x30, 0x9f, 0x30, 0xff, 0x30, 0xe7, 0x30,
	0xff, 0x30, 0x3f, 0x30, 0xff, 0x30, 0xc3, 0x30,
	0xff, 0x30, 0x7f, 0x30, 0xfe, 0x30, 0x81, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xfc, 0x30, 0x00, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xf9, 0x30, 0x00, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xf3, 0x30, 0x81, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xe7, 0x30, 0xc3, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xef, 0x30, 0xe7, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0x03, 0x30, 0x00, 0x30,
	0xf0, 0x30, 0xff, 0x30, 0x00, 0x30, 0x00, 0x30,
	0xf0, 0x30, 0x7f, 0x30, 0x00, 0x30, 0x00, 0x30,
	0xe0, 0x30, 0x3f, 0x30, 0x00, 0x30, 0x00, 0x30,
	0xe0, 0x30, 0x1f, 0x30, 0x00, 0x30, 0x00, 0x30,
	0xe0, 0x30, 0x0f, 0x30, 0x00, 0x30, 0x00, 0x30,
	0xc0, 0x30, 0x0f, 0x30, 0x00, 0x30, 0x00, 0x30,
	0xc0, 0x30, 0x07, 0x30, 0xf0, 0x30, 0xff, 0x30,
	0xff, 0x30, 0x07, 0x30, 0xf8, 0x30, 0xff, 0x30,
	0xff, 0x30, 0x07, 0x30, 0xfc, 0x30, 0xff, 0x30,
	0xff, 0x30, 0x07, 0x30, 0xfc, 0x30, 0xff, 0x30,
	0xff, 0x30, 0x07, 0x30, 0xfc, 0x30, 0xff, 0x30,
	0xff, 0x30, 0x07, 0x30, 0xfc, 0x30, 0xff, 0x30,
	0xff, 0x30, 0x07, 0x30, 0xf8, 0x30, 0xff, 0x30,
	0xff, 0x30, 0x07, 0x30, 0xf0, 0x30, 0xff, 0x30,
	0xff, 0x30, 0x0f, 0x30, 0x00, 0x30, 0x00, 0x30,
	0xfc, 0x30, 0x0f, 0x30, 0x00, 0x30, 0x00, 0x30,
	0xf8, 0x30, 0x1f, 0x30, 0x00, 0x30, 0x00, 0x30,
	0xf8, 0x30, 0x3f, 0x30, 0x00, 0x30, 0x00, 0x30,
	0xf8, 0x30, 0x7f, 0x30, 0x00, 0x30, 0x00, 0x30,
	0xf8, 0x30, 0xff, 0x30, 0x00, 0x30, 0x00, 0x30,
	0xf8, 0x30, 0xff, 0x30, 0x03, 0x30, 0x00, 0x30,
	0xf8, 0x30, 0xff, 0x30, 0xff, 0x30, 0x07, 0x30,
	0xf8, 0x30, 0xff, 0x30, 0xff, 0x30, 0x07, 0x30,
	0xf8, 0x30, 0xff, 0x30, 0xff, 0x30, 0x07, 0x30,
	0xf8, 0x30, 0xff, 0x30, 0xff, 0x30, 0x07, 0x30,
	0xf8, 0x30, 0xff, 0x30, 0xff, 0x30, 0x07, 0x30,
	0xf8, 0x30, 0xff, 0x30, 0xff, 0x30, 0x07, 0x30,
	0xf8, 0x30, 0xff, 0x30, 0xff, 0x30, 0x07, 0x30,
	0xf8, 0x30, 0xff, 0x30, 0xff, 0x30, 0x07, 0x30,
	0xf8, 0x30, 0xff, 0x30, 0xff, 0x30, 0x07, 0x30,
	0xf8, 0x30, 0xff, 0x30, 0xff, 0x30, 0x07, 0x30,
	0xf8, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30,
	0xff, 0x13, 0x78, 0x30, 0x80, 0x30, 0xa7, 0x30,
	0x80, 0x30, 0xaf, 0x29
};
