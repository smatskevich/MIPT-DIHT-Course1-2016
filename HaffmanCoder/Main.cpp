#include <iostream>
#include <string>

#include "FileStreams.h"

using std::string;

// Проверка на полное совпадение двух файлов.
bool checkEqualFiles( const string& firstFileName, const string& secondFileName )
{
	CInputFileStream firstStream( firstFileName );
	CInputFileStream secondStream( secondFileName );
	byte fromFirst = 0;
	byte fromSecond = 0;
	while( firstStream.Read( fromFirst ) ) {
		if( !secondStream.Read( fromSecond ) ) {
			return false;
		}
		if( fromFirst != fromSecond ) {
			return false;
		}

	}
	return !secondStream.Read( fromSecond );
}

int main()
{
	const string sourceFileName = "VoinaIMir.txt";
	const string compressedFileName = "Compressed.myzip";
	const string decompressedFileName = "VoinaIMirDecompressed.txt";

	CInputFileStream input( sourceFileName );
	COutputFileStream compressed( compressedFileName );
	Encode( input, compressed );
	input.Close();
	compressed.Close();

	CInputFileStream compressedInput( compressedFileName );
	COutputFileStream decompressed( decompressedFileName );
	Decode( compressedInput, decompressed );
	compressedInput.Close();
	decompressed.Close();

	std::cout << ( checkEqualFiles( sourceFileName, decompressedFileName ) ? "OK" : "FAIL" );
	return 0;
}