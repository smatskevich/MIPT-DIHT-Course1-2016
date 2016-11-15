// Автор: Степан.
// Описание: Реализации IInputStream и IOutputStream на файлах.

#pragma once

#include <string>
#include "Huffman.h"

class CInputFileStream : public IInputStream {
public:
	explicit CInputFileStream( const std::string& fileName ) { fileName; }
	virtual ~CInputFileStream() { /*Close();*/ }

	// IInputStream.
	bool Read( byte& /*value*/ ) override { return false; }

	// Закрывает файл.
	void Close() {}
};

class COutputFileStream : public IOutputStream {
public:
	explicit COutputFileStream( const std::string& fileName ) { fileName; }
	virtual ~COutputFileStream() { /*Close();*/ }

	// IOutputStream.
	void Write( byte /*value*/ ) override {}

	// Закрывает файл.
	void Close() {}
};
