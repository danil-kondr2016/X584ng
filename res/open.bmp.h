#ifndef OPEN_BMP_H
#define OPEN_BMP_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char open_bmp[] =
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
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x52, 
	0x5C, 0xBF, 0x4F, 0x59, 0xD4, 0x85, 0x8B, 0xF3, 0xD8, 0xDB, 
	0xFF, 0xFC, 0xFD, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFE, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x50, 0x5A, 0xDD, 
	0xA0, 0xA5, 0xCE, 0x86, 0x8F, 0xBF, 0x4F, 0x59, 0xCE, 0x7B, 
	0x82, 0xE7, 0xBC, 0xC1, 0xF3, 0xDD, 0xDE, 0xFD, 0xF8, 0xF9, 
	0xFE, 0xFE, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x4F, 0x59, 0xE7, 0xBC, 0xC0, 
	0xE9, 0xD0, 0xD1, 0xE4, 0xC4, 0xC4, 0xDF, 0xB1, 0xB3, 0xD0, 
	0x7F, 0x85, 0xC1, 0x54, 0x5E, 0xC3, 0x59, 0x62, 0xED, 0xCB, 
	0xCE, 0xF7, 0xEC, 0xEE, 0xFB, 0xF7, 0xF8, 0xFE, 0xFE, 0xFE, 
	0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xBF, 0x4F, 0x59, 0xDF, 0xA5, 0xA9, 0xE9, 0xD0, 
	0xD1, 0xE9, 0xD0, 0xD0, 0xE9, 0xCD, 0xCF, 0xE9, 0xCA, 0xCD, 
	0xE7, 0xC1, 0xC4, 0xE2, 0xB2, 0xB5, 0xD7, 0x8E, 0x92, 0xCB, 
	0x6F, 0x78, 0xC3, 0x59, 0x63, 0xEB, 0xC9, 0xCC, 0xF7, 0xE8, 
	0xE9, 0xFE, 0xFA, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xBF, 0x4F, 0x59, 0xD2, 0x7E, 0x86, 0xE8, 0xC6, 0xC8, 0xE8, 
	0xC5, 0xC7, 0xE8, 0xC4, 0xC6, 0xE8, 0xC3, 0xC6, 0xE8, 0xC2, 
	0xC5, 0xE7, 0xC1, 0xC3, 0xE5, 0xB8, 0xBA, 0xE7, 0xB5, 0xB7, 
	0xDF, 0xA1, 0xA5, 0xD0, 0x7B, 0x7F, 0xC1, 0x53, 0x5D, 0xE9, 
	0xC1, 0xC5, 0xFD, 0xFD, 0xFD, 0xFF, 0xFF, 0xFF, 0xBF, 0x4F, 
	0x59, 0xC2, 0x56, 0x60, 0xE7, 0xBE, 0xC0, 0xE6, 0xBD, 0xBF, 
	0xE6, 0xBB, 0xBE, 0xE6, 0xBA, 0xBC, 0xE6, 0xBA, 0xBD, 0xE7, 
	0xBB, 0xBD, 0xE6, 0xB9, 0xBA, 0xE6, 0xB9, 0xB9, 0xE6, 0xB6, 
	0xB8, 0xE5, 0xB5, 0xB7, 0xE1, 0xB0, 0xB2, 0xC7, 0xA2, 0xA6, 
	0xF8, 0xF1, 0xF2, 0xFF, 0xFF, 0xFF, 0xBF, 0x4F, 0x59, 0xBF, 
	0x4F, 0x59, 0xDF, 0x99, 0x9E, 0xE6, 0xB4, 0xB7, 0xD0, 0xCA, 
	0xC8, 0xE5, 0xD6, 0xD6, 0xD0, 0xCA, 0xC8, 0xE0, 0xD1, 0xD1, 
	0xDC, 0xCA, 0xCB, 0xD9, 0xC5, 0xC6, 0xD1, 0xC1, 0xC2, 0xD2, 
	0xC2, 0xC3, 0xD2, 0xC3, 0xC4, 0xD7, 0x97, 0x9B, 0xEB, 0xCF, 
	0xD1, 0xFE, 0xFE, 0xFE, 0xBF, 0x4F, 0x59, 0xBF, 0x4F, 0x59, 
	0xCA, 0x68, 0x70, 0xE4, 0xAD, 0xB0, 0xC4, 0xCC, 0xCA, 0xE4, 
	0xE3, 0xE2, 0xC4, 0xCC, 0xCA, 0xE4, 0xE3, 0xE2, 0xE3, 0xE2, 
	0xE2, 0xE3, 0xE1, 0xE2, 0xE1, 0xDC, 0xDD, 0xD9, 0xD1, 0xD3, 
	0xD4, 0xD0, 0xD1, 0xC8, 0xC6, 0xC6, 0xCB, 0x85, 0x8A, 0xF7, 
	0xF2, 0xF3, 0xBF, 0x4F, 0x59, 0xC4, 0x5F, 0x69, 0xC1, 0x59, 
	0x63, 0xE2, 0xA4, 0xA8, 0xB8, 0xC9, 0xC7, 0xDD, 0xE4, 0xE5, 
	0xB8, 0xC9, 0xC7, 0xDD, 0xE4, 0xE5, 0xDD, 0xE4, 0xE5, 0xDD, 
	0xE4, 0xE5, 0xDD, 0xE3, 0xE5, 0xDA, 0xDD, 0xDF, 0xDA, 0xDD, 
	0xDF, 0xBB, 0xC8, 0xC7, 0xE3, 0xA7, 0xAA, 0xDE, 0xBC, 0xBF, 
	0xBF, 0x4F, 0x59, 0xCD, 0x7F, 0x87, 0xCD, 0x81, 0x88, 0xBF, 
	0x4F, 0x59, 0xB1, 0xC7, 0xC6, 0xD3, 0xE0, 0xE2, 0xB1, 0xC7, 
	0xC6, 0xD3, 0xE0, 0xE2, 0xD9, 0xE6, 0xE7, 0xD9, 0xE6, 0xE7, 
	0xD9, 0xE6, 0xE7, 0xDB, 0xE6, 0xE7, 0xDB, 0xE6, 0xE7, 0xB7, 
	0xCD, 0xCC, 0xDF, 0xAF, 0xB2, 0xB7, 0x6C, 0x72, 0xBF, 0x4F, 
	0x59, 0xD4, 0x96, 0x9C, 0xD8, 0x9E, 0xA3, 0xD7, 0x9B, 0xA1, 
	0xBF, 0x4F, 0x59, 0xBF, 0x4F, 0x59, 0xBF, 0x4F, 0x59, 0xBF, 
	0x4F, 0x59, 0xBF, 0x4F, 0x59, 0xBF, 0x4F, 0x59, 0xC5, 0x5E, 
	0x68, 0xC5, 0x5E, 0x68, 0xC5, 0x5E, 0x68, 0xC8, 0x65, 0x6C, 
	0xC2, 0x60, 0x66, 0xC3, 0x66, 0x6D, 0xBF, 0x4F, 0x59, 0xE9, 
	0xC6, 0xC8, 0xE4, 0xC1, 0xC4, 0xEF, 0xDA, 0xDB, 0x45, 0x89, 
	0xAD, 0xB5, 0xE1, 0xF0, 0x1D, 0xA5, 0xD1, 0xF7, 0xFC, 0xFD, 
	0xCD, 0xEC, 0xF5, 0x85, 0xCF, 0xE6, 0x1D, 0xA5, 0xD1, 0x1E, 
	0xA6, 0xD1, 0x6A, 0xC4, 0xE0, 0x30, 0x9A, 0xC1, 0x1D, 0xA5, 
	0xD1, 0xFF, 0xFF, 0xFF, 0xBF, 0x4F, 0x59, 0xF9, 0xF1, 0xF2, 
	0xF9, 0xF1, 0xF2, 0xFA, 0xF4, 0xF4, 0x30, 0x9A, 0xC1, 0xEE, 
	0xF8, 0xFB, 0x1D, 0xA5, 0xD1, 0x1D, 0xA5, 0xD1, 0x44, 0xB5, 
	0xD7, 0x80, 0xCA, 0xE3, 0xC3, 0xE7, 0xF3, 0xB5, 0xE2, 0xF0, 
	0xA3, 0xDB, 0xEC, 0x1D, 0xA5, 0xD1, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xBF, 0x4F, 0x59, 0xBF, 0x4F, 0x59, 0xBF, 0x4F, 
	0x59, 0xBF, 0x4F, 0x59, 0x26, 0xA1, 0xC8, 0xF7, 0xFC, 0xFD, 
	0xF6, 0xFC, 0xFC, 0xEC, 0xF9, 0xFB, 0xDB, 0xF1, 0xF6, 0xA1, 
	0xDA, 0xEB, 0x47, 0xB7, 0xDA, 0x1D, 0xA5, 0xD1, 0x1D, 0xA5, 
	0xD1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x1D, 0xA5, 0xD1, 0xF7, 0xFC, 0xFD, 0xCC, 0xEB, 
	0xF4, 0x85, 0xCD, 0xE5, 0x21, 0xA6, 0xD2, 0x60, 0xC0, 0xDF, 
	0xAF, 0xE0, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0x1D, 0xA5, 0xD1, 0x24, 0xA7, 0xD2, 0x58, 0xBB, 0xDC, 0x9A, 
	0xD5, 0xEA, 0xE9, 0xF2, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
};

wxBitmap& open_bmp_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( open_bmp, sizeof( open_bmp ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_BMP );
	static wxBitmap bmp( image );
	return bmp;
}


#endif //OPEN_BMP_H
