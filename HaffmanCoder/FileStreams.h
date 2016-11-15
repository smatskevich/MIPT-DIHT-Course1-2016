// �����: ������.
// ��������: ���������� IInputStream � IOutputStream �� ������.

#pragma once

#include <string>
#include "Huffman.h"

class CInputFileStream : public IInputStream {
public:
	explicit CInputFileStream( const std::string& fileName ) { fileName; }
	virtual ~CInputFileStream() { /*Close();*/ }

	// IInputStream.
	bool Read( byte& /*value*/ ) override { return false; }

	// ��������� ����.
	void Close() {}
};

class COutputFileStream : public IOutputStream {
public:
	explicit COutputFileStream( const std::string& fileName ) { fileName; }
	virtual ~COutputFileStream() { /*Close();*/ }

	// IOutputStream.
	void Write( byte /*value*/ ) override {}

	// ��������� ����.
	void Close() {}
};
