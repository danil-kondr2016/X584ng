#ifndef NEW_BMP_H
#define NEW_BMP_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char new_bmp[] =
{
	0x42, 0x4D, 0x8A, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x8A, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x10, 0x00, 
	0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x18, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 
	0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 
	0x42, 0x47, 0x52, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xFE, 
	0xFF, 0xBD, 0xE4, 0xF0, 0xFE, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xF2, 0xF8, 0xC6, 
	0xE6, 0xF1, 0xC8, 0xE7, 0xF4, 0xEA, 0xF6, 0xFA, 0xFD, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x50, 0x82, 0xA4, 
	0x50, 0x82, 0xA4, 0x50, 0x82, 0xA4, 0x50, 0x82, 0xA4, 0x50, 
	0x82, 0xA4, 0x50, 0x82, 0xA4, 0x50, 0x82, 0xA4, 0x50, 0x82, 
	0xA4, 0x5A, 0x8B, 0xAB, 0x94, 0xD3, 0xE7, 0xE9, 0xF5, 0xFB, 
	0x94, 0xD2, 0xE5, 0xAC, 0xDE, 0xEB, 0xE9, 0xF7, 0xFB, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x50, 0x82, 0xA4, 0x2A, 0xAD, 
	0xD9, 0x39, 0xB3, 0xDC, 0x44, 0xB7, 0xDE, 0x4E, 0xBB, 0xDF, 
	0x52, 0xBD, 0xE0, 0x4E, 0xBB, 0xDF, 0x86, 0xD0, 0xE9, 0x93, 
	0xCF, 0xE6, 0xD9, 0xEF, 0xF6, 0xFF, 0xFF, 0xFF, 0xCE, 0xEA, 
	0xF4, 0x83, 0xCA, 0xE2, 0xD9, 0xEF, 0xF7, 0xFD, 0xFE, 0xFE, 
	0xFF, 0xFF, 0xFF, 0x50, 0x82, 0xA4, 0x39, 0xB3, 0xDC, 0x4D, 
	0xBA, 0xDF, 0x60, 0xC2, 0xE3, 0x6D, 0xC7, 0xE5, 0x74, 0xCA, 
	0xE6, 0x6D, 0xC7, 0xE5, 0xD1, 0xEB, 0xF5, 0xF2, 0xF9, 0xFD, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE8, 
	0xF6, 0xF8, 0xDC, 0xEE, 0xF6, 0xCF, 0xEA, 0xF3, 0xFF, 0xFF, 
	0xFF, 0x50, 0x82, 0xA4, 0x44, 0xB7, 0xDE, 0x60, 0xC2, 0xE3, 
	0x77, 0xCB, 0xE7, 0x89, 0xD2, 0xEA, 0x93, 0xD5, 0xEC, 0x89, 
	0xD2, 0xEA, 0x98, 0xD4, 0xE8, 0xB2, 0xDE, 0xED, 0xD6, 0xEB, 
	0xF5, 0xFF, 0xFF, 0xFF, 0xD7, 0xED, 0xF4, 0x96, 0xD3, 0xE4, 
	0xC6, 0xE7, 0xF1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x50, 
	0x82, 0xA4, 0x4E, 0xBB, 0xDF, 0x6D, 0xC7, 0xE5, 0x89, 0xD2, 
	0xEA, 0x9D, 0xD9, 0xEE, 0xA9, 0xDE, 0xF0, 0x9D, 0xD9, 0xEE, 
	0xA9, 0xDE, 0xF0, 0x93, 0xD5, 0xEC, 0xC1, 0xE6, 0xEF, 0xF3, 
	0xFA, 0xFC, 0xC8, 0xE8, 0xF1, 0x9E, 0xD6, 0xE8, 0xF1, 0xF9, 
	0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x50, 0x82, 0xA4, 
	0x71, 0xC8, 0xE6, 0x84, 0xD0, 0xE9, 0x9B, 0xD9, 0xED, 0xAE, 
	0xE0, 0xF1, 0xA2, 0xDB, 0xEF, 0x95, 0xD7, 0xED, 0xAD, 0xE0, 
	0xF0, 0x97, 0xD7, 0xEC, 0x8F, 0xD2, 0xE7, 0xD7, 0xEF, 0xF4, 
	0xAD, 0xDB, 0xEB, 0xC4, 0xE5, 0xEF, 0xF2, 0xFA, 0xFC, 0xFE, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3C, 0x8F, 0xB4, 0x8C, 0xD3, 
	0xEB, 0x96, 0xD7, 0xEC, 0xA3, 0xDB, 0xEF, 0xAD, 0xE1, 0xF0, 
	0x97, 0xD8, 0xEC, 0x9F, 0xDA, 0xEE, 0x8A, 0xD2, 0xEA, 0x6E, 
	0xC7, 0xE5, 0x4E, 0xBB, 0xDF, 0x8E, 0xBC, 0xD1, 0xA6, 0xD9, 
	0xE8, 0xF4, 0xFA, 0xF9, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x3C, 0x8F, 0xB4, 0xAA, 0xDF, 0xF0, 0xAC, 
	0xDF, 0xF0, 0xB2, 0xE0, 0xF1, 0xAD, 0xDF, 0xF0, 0x9B, 0xD8, 
	0xED, 0x8C, 0xD2, 0xEB, 0x63, 0xC3, 0xE3, 0x39, 0xB3, 0xDC, 
	0x2A, 0xAD, 0xD9, 0x50, 0x82, 0xA4, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0x37, 0x93, 0xBA, 0xC8, 0xEA, 0xF5, 0xC4, 0xE9, 0xF4, 
	0xBD, 0xE5, 0xF4, 0xAF, 0xE0, 0xF0, 0x86, 0xD0, 0xEB, 0x63, 
	0xC3, 0xE2, 0x3B, 0xB3, 0xDD, 0x2A, 0xAD, 0xD9, 0x2A, 0xAD, 
	0xD9, 0x50, 0x82, 0xA4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2B, 
	0x9D, 0xC5, 0xE3, 0xF4, 0xFA, 0xD7, 0xF0, 0xF8, 0xCA, 0xEA, 
	0xF6, 0xCA, 0xEB, 0xF6, 0x6D, 0xC9, 0xE5, 0x50, 0x82, 0xA4, 
	0x50, 0x82, 0xA4, 0x50, 0x82, 0xA4, 0x50, 0x82, 0xA4, 0x50, 
	0x82, 0xA4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1D, 0xA5, 0xD1, 
	0xF9, 0xFD, 0xFE, 0xEB, 0xF7, 0xFB, 0xD7, 0xEF, 0xF9, 0xD8, 
	0xF0, 0xF9, 0x89, 0xD2, 0xEA, 0x3C, 0x8F, 0xB4, 0xFA, 0xFA, 
	0xFA, 0xFA, 0xFA, 0xFA, 0x50, 0x82, 0xA4, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1D, 0xA5, 0xD1, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xF3, 0xFB, 0xFD, 0xE5, 0xF6, 0xFA, 
	0xA2, 0xDB, 0xEC, 0x1D, 0xA5, 0xD1, 0xFA, 0xFA, 0xFA, 0x50, 
	0x82, 0xA4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x1D, 0xA5, 0xD1, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xFD, 0xFD, 0xB8, 0xE4, 
	0xF2, 0x1D, 0xA5, 0xD1, 0x50, 0x82, 0xA4, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0x1D, 0xA5, 0xD1, 0x1D, 0xA5, 0xD1, 0x1D, 0xA5, 0xD1, 
	0x27, 0x9E, 0xC9, 0x2D, 0x98, 0xC1, 0x50, 0x82, 0xA4, 0x50, 
	0x82, 0xA4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
};

wxBitmap& new_bmp_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( new_bmp, sizeof( new_bmp ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_BMP );
	static wxBitmap bmp( image );
	return bmp;
}


#endif //NEW_BMP_H
