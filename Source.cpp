#include <string>

#include "Huffman.h"

// Метод архивирует данные из потока original
void Encode( IInputStream& original, IOutputStream& compressed )
{
	byte fromFirst = 0;
	while( original.Read( fromFirst ) ) {
		compressed.Write( fromFirst );
	}
}

// Метод восстанавливает оригинальные данные
void Decode( IInputStream& compressed, IOutputStream& original )
{
	byte fromFirst = 0;
	while( compressed.Read( fromFirst ) ) {
		original.Write( fromFirst );
	}
}
