/*
 * Copyright (C) 2015 Martin Willi
 *
 * Copyright (C) secunet Security Networks AG
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the Licenseor (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be usefulbut
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#include <crypto/crypto_tester.h>

/**
 * Test vectors from RFC5114
 */

ke_test_vector_t ecp192 = {
	.method = ECP_192_BIT, .priv_len = 24, .pub_len = 48, .shared_len = 24,
	.priv_a	= "\x32\x3f\xa3\x16\x9d\x8e\x9c\x65\x93\xf5\x94\x76\xbc\x14\x20\x00"
			  "\xab\x5b\xe0\xe2\x49\xc4\x34\x26",
	.priv_b	= "\x63\x1f\x95\xbb\x4a\x67\x63\x2c\x9c\x47\x6e\xee\x9a\xb6\x95\xab"
			  "\x24\x0a\x04\x99\x30\x7f\xcf\x62",
	.pub_a	= "\xcd\x46\x48\x9e\xcf\xd6\xc1\x05\xe7\xb3\xd3\x25\x66\xe2\xb1\x22"
			  "\xe2\x49\xab\xaa\xdd\x87\x06\x12\x68\x88\x7b\x48\x77\xdf\x51\xdd"
			  "\x4d\xc3\xd6\xfd\x11\xf0\xa2\x6f\x8f\xd3\x84\x43\x17\x91\x6e\x9a",
	.pub_b	= "\x51\x9a\x12\x16\x80\xe0\x04\x54\x66\xba\x21\xdf\x2e\xee\x47\xf5"
			  "\x97\x3b\x50\x05\x77\xef\x13\xd5\xff\x61\x3a\xb4\xd6\x4c\xee\x3a"
			  "\x20\x87\x5b\xdb\x10\xf9\x53\xf6\xb3\x0c\xa0\x72\xc6\x0a\xa5\x7f",
	.shared	= "\xad\x42\x01\x82\x63\x3f\x85\x26\xbf\xe9\x54\xac\xda\x37\x6f\x05"
			  "\xe5\xff\x4f\x83\x7f\x54\xfe\xbe",
};

ke_test_vector_t ecp224 = {
	.method = ECP_224_BIT, .priv_len = 28, .pub_len = 56, .shared_len = 28,
	.priv_a	= "\xb5\x58\xeb\x6c\x28\x8d\xa7\x07\xbb\xb4\xf8\xfb\xae\x2a\xb9\xe9"
			  "\xcb\x62\xe3\xbc\x5c\x75\x73\xe2\x2e\x26\xd3\x7f",
	.priv_b	= "\xac\x3b\x1a\xdd\x3d\x97\x70\xe6\xf6\xa7\x08\xee\x9f\x3b\x8e\x0a"
			  "\xb3\xb4\x80\xe9\xf2\x7f\x85\xc8\x8b\x5e\x6d\x18",
	.pub_a	= "\x49\xdf\xef\x30\x9f\x81\x48\x8c\x30\x4c\xff\x5a\xb3\xee\x5a\x21"
			  "\x54\x36\x7d\xc7\x83\x31\x50\xe0\xa5\x1f\x3e\xeb\x4f\x2b\x5e\xe4"
			  "\x57\x62\xc4\xf6\x54\xc1\xa0\xc6\x7f\x54\xcf\x88\xb0\x16\xb5\x1b"
			  "\xce\x3d\x7c\x22\x8d\x57\xad\xb4",
	.pub_b	= "\x6b\x3a\xc9\x6a\x8d\x0c\xde\x6a\x55\x99\xbe\x80\x32\xed\xf1\x0c"
			  "\x16\x2d\x0a\x8a\xd2\x19\x50\x6d\xcd\x42\xa2\x07\xd4\x91\xbe\x99"
			  "\xc2\x13\xa7\xd1\xca\x37\x06\xde\xbf\xe3\x05\xf3\x61\xaf\xcb\xb3"
			  "\x3e\x26\x09\xc8\xb1\x61\x8a\xd5",
	.shared	= "\x52\x27\x2f\x50\xf4\x6f\x4e\xdc\x91\x51\x56\x90\x92\xf4\x6d\xf2"
			  "\xd9\x6e\xcc\x3b\x6d\xc1\x71\x4a\x4e\xa9\x49\xfa",
};

ke_test_vector_t ecp256 = {
	.method = ECP_256_BIT, .priv_len = 32, .pub_len = 64, .shared_len = 32,
	.priv_a	= "\x81\x42\x64\x14\x5f\x2f\x56\xf2\xe9\x6a\x8e\x33\x7a\x12\x84\x99"
			  "\x3f\xaf\x43\x2a\x5a\xbc\xe5\x9e\x86\x7b\x72\x91\xd5\x07\xa3\xaf",
	.priv_b	= "\x2c\xe1\x78\x8e\xc1\x97\xe0\x96\xdb\x95\xa2\x00\xcc\x0a\xb2\x6a"
			  "\x19\xce\x6b\xcc\xad\x56\x2b\x8e\xee\x1b\x59\x37\x61\xcf\x7f\x41",
	.pub_a	= "\x2a\xf5\x02\xf3\xbe\x89\x52\xf2\xc9\xb5\xa8\xd4\x16\x0d\x09\xe9"
			  "\x71\x65\xbe\x50\xbc\x42\xae\x4a\x5e\x8d\x3b\x4b\xa8\x3a\xeb\x15"
			  "\xeb\x0f\xaf\x4c\xa9\x86\xc4\xd3\x86\x81\xa0\xf9\x87\x2d\x79\xd5"
			  "\x67\x95\xbd\x4b\xff\x6e\x6d\xe3\xc0\xf5\x01\x5e\xce\x5e\xfd\x85",
	.pub_b	= "\xb1\x20\xde\x4a\xa3\x64\x92\x79\x53\x46\xe8\xde\x6c\x2c\x86\x46"
			  "\xae\x06\xaa\xea\x27\x9f\xa7\x75\xb3\xab\x07\x15\xf6\xce\x51\xb0"
			  "\x9f\x1b\x7e\xec\xe2\x0d\x7b\x5e\xd8\xec\x68\x5f\xa3\xf0\x71\xd8"
			  "\x37\x27\x02\x70\x92\xa8\x41\x13\x85\xc3\x4d\xde\x57\x08\xb2\xb6",
	.shared	= "\xdd\x0f\x53\x96\x21\x9d\x1e\xa3\x93\x31\x04\x12\xd1\x9a\x08\xf1"
			  "\xf5\x81\x1e\x9d\xc8\xec\x8e\xea\x7f\x80\xd2\x1c\x82\x0c\x27\x88",
};

ke_test_vector_t ecp384 = {
	.method = ECP_384_BIT, .priv_len = 48, .pub_len = 96, .shared_len = 48,
	.priv_a	= "\xd2\x73\x35\xea\x71\x66\x4a\xf2\x44\xdd\x14\xe9\xfd\x12\x60\x71"
			  "\x5d\xfd\x8a\x79\x65\x57\x1c\x48\xd7\x09\xee\x7a\x79\x62\xa1\x56"
			  "\xd7\x06\xa9\x0c\xbc\xb5\xdf\x29\x86\xf0\x5f\xea\xdb\x93\x76\xf1",
	.priv_b	= "\x52\xd1\x79\x1f\xdb\x4b\x70\xf8\x9c\x0f\x00\xd4\x56\xc2\xf7\x02"
			  "\x3b\x61\x25\x26\x2c\x36\xa7\xdf\x1f\x80\x23\x11\x21\xcc\xe3\xd3"
			  "\x9b\xe5\x2e\x00\xc1\x94\xa4\x13\x2c\x4a\x6c\x76\x8b\xcd\x94\xd2",
	.pub_a	= "\x79\x31\x48\xf1\x78\x76\x34\xd5\xda\x4c\x6d\x90\x74\x41\x7d\x05"
			  "\xe0\x57\xab\x62\xf8\x20\x54\xd1\x0e\xe6\xb0\x40\x3d\x62\x79\x54"
			  "\x7e\x6a\x8e\xa9\xd1\xfd\x77\x42\x7d\x01\x6f\xe2\x7a\x8b\x8c\x66"
			  "\xc6\xc4\x12\x94\x33\x1d\x23\xe6\xf4\x80\xf4\xfb\x4c\xd4\x05\x04"
			  "\xc9\x47\x39\x2e\x94\xf4\xc3\xf0\x6b\x8f\x39\x8b\xb2\x9e\x42\x36"
			  "\x8f\x7a\x68\x59\x23\xde\x3b\x67\xba\xce\xd2\x14\xa1\xa1\xd1\x28",
	.pub_b	= "\x5c\xd4\x2a\xb9\xc4\x1b\x53\x47\xf7\x4b\x8d\x4e\xfb\x70\x8b\x3d"
			  "\x5b\x36\xdb\x65\x91\x53\x59\xb4\x4a\xbc\x17\x64\x7b\x6b\x99\x99"
			  "\x78\x9d\x72\xa8\x48\x65\xae\x2f\x22\x3f\x12\xb5\xa1\xab\xc1\x20"
			  "\xe1\x71\x45\x8f\xea\xa9\x39\xaa\xa3\xa8\xbf\xac\x46\xb4\x04\xbd"
			  "\x8f\x6d\x5b\x34\x8c\x0f\xa4\xd8\x0c\xec\xa1\x63\x56\xca\x93\x32"
			  "\x40\xbd\xe8\x72\x34\x15\xa8\xec\xe0\x35\xb0\xed\xf3\x67\x55\xde",
	.shared	= "\x5e\xa1\xfc\x4a\xf7\x25\x6d\x20\x55\x98\x1b\x11\x05\x75\xe0\xa8"
			  "\xca\xe5\x31\x60\x13\x7d\x90\x4c\x59\xd9\x26\xeb\x1b\x84\x56\xe4"
			  "\x27\xaa\x8a\x45\x40\x88\x4c\x37\xde\x15\x9a\x58\x02\x8a\xbc\x0e",
};

ke_test_vector_t ecp521 = {
	.method = ECP_521_BIT, .priv_len = 66, .pub_len = 132, .shared_len = 66,
	.priv_a	= "\x01\x13\xf8\x2d\xa8\x25\x73\x5e\x3d\x97\x27\x66\x83\xb2\xb7\x42"
			  "\x77\xba\xd2\x73\x35\xea\x71\x66\x4a\xf2\x43\x0c\xc4\xf3\x34\x59"
			  "\xb9\x66\x9e\xe7\x8b\x3f\xfb\x9b\x86\x83\x01\x5d\x34\x4d\xcb\xfe"
			  "\xf6\xfb\x9a\xf4\xc6\xc4\x70\xbe\x25\x45\x16\xcd\x3c\x1a\x1f\xb4"
			  "\x73\x62",
	.priv_b	= "\x00\xce\xe3\x48\x0d\x86\x45\xa1\x7d\x24\x9f\x27\x76\xd2\x8b\xae"
			  "\x61\x69\x52\xd1\x79\x1f\xdb\x4b\x70\xf7\xc3\x37\x87\x32\xaa\x1b"
			  "\x22\x92\x84\x48\xbc\xd1\xdc\x24\x96\xd4\x35\xb0\x10\x48\x06\x6e"
			  "\xbe\x4f\x72\x90\x3c\x36\x1b\x1a\x9d\xc1\x19\x3d\xc2\xc9\xd0\x89"
			  "\x1b\x96",
	.pub_a	= "\x01\xeb\xb3\x4d\xd7\x57\x21\xab\xf8\xad\xc9\xdb\xed\x17\x88\x9c"
			  "\xbb\x97\x65\xd9\x0a\x7c\x60\xf2\xce\xf0\x07\xbb\x0f\x2b\x26\xe1"
			  "\x48\x81\xfd\x44\x42\xe6\x89\xd6\x1c\xb2\xdd\x04\x6e\xe3\x0e\x3f"
			  "\xfd\x20\xf9\xa4\x5b\xbd\xf6\x41\x3d\x58\x3a\x2d\xbf\x59\x92\x4f"
			  "\xd3\x5c\x00\xf6\xb6\x32\xd1\x94\xc0\x38\x8e\x22\xd8\x43\x7e\x55"
			  "\x8c\x55\x2a\xe1\x95\xad\xfd\x15\x3f\x92\xd7\x49\x08\x35\x1b\x2f"
			  "\x8c\x4e\xda\x94\xed\xb0\x91\x6d\x1b\x53\xc0\x20\xb5\xee\xca\xed"
			  "\x1a\x5f\xc3\x8a\x23\x3e\x48\x30\x58\x7b\xb2\xee\x34\x89\xb3\xb4"
			  "\x2a\x5a\x86\xa4",
	.pub_b	= "\x01\x0e\xbf\xaf\xc6\xe8\x5e\x08\xd2\x4b\xff\xfc\xc1\xa4\x51\x1d"
			  "\xb0\xe6\x34\xbe\xeb\x1b\x6d\xec\x8c\x59\x39\xae\x44\x76\x62\x01"
			  "\xaf\x62\x00\x43\x0b\xa9\x7c\x8a\xc6\xa0\xe9\xf0\x8b\x33\xce\x7e"
			  "\x9f\xee\xb5\xba\x4e\xe5\xe0\xd8\x15\x10\xc2\x42\x95\xb8\xa0\x8d"
			  "\x02\x35\x00\xa4\xa6\xec\x30\x0d\xf9\xe2\x57\xb0\x37\x2b\x5e\x7a"
			  "\xbf\xef\x09\x34\x36\x71\x9a\x77\x88\x7e\xbb\x0b\x18\xcf\x80\x99"
			  "\xb9\xf4\x21\x2b\x6e\x30\xa1\x41\x9c\x18\xe0\x29\xd3\x68\x63\xcc"
			  "\x9d\x44\x8f\x4d\xba\x4d\x2a\x0e\x60\x71\x1b\xe5\x72\x91\x5f\xbd"
			  "\x4f\xef\x26\x95",
	.shared	= "\x00\xcd\xea\x89\x62\x1c\xfa\x46\xb1\x32\xf9\xe4\xcf\xe2\x26\x1c"
			  "\xde\x2d\x43\x68\xeb\x56\x56\x63\x4c\x7c\xc9\x8c\x7a\x00\xcd\xe5"
			  "\x4e\xd1\x86\x6a\x0d\xd3\xe6\x12\x6c\x9d\x2f\x84\x5d\xaf\xf8\x2c"
			  "\xeb\x1d\xa0\x8f\x5d\x87\x52\x1b\xb0\xeb\xec\xa7\x79\x11\x16\x9c"
			  "\x20\xcc",
};
