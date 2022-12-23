#ifndef STBDXT_LIBRARY_H
#define STBDXT_LIBRARY_H

#ifndef STDBDEF
#ifdef STB_DXT_STATIC
#define STBDDEF static
#else
#define STBDDEF extern
#endif
#endif

STBDDEF void stb_compress_dxt_block(unsigned char *dest, const unsigned char *src_rgba_four_bytes_per_pixel, int alpha, int mode);
STBDDEF void stb_compress_bc4_block(unsigned char *dest, const unsigned char *src_r_one_byte_per_pixel);
STBDDEF void stb_compress_bc5_block(unsigned char *dest, const unsigned char *src_rg_two_byte_per_pixel);

#endif //STBDXT_LIBRARY_H
