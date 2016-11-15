// �����:
// ��������:

#pragma once

#define interface struct

typedef char byte;

interface IInputStream {
	// ���������� false, ���� ����� ����������
	virtual bool Read( byte& value ) = 0;
};

interface IOutputStream {
	virtual void Write( byte value ) = 0;
};

// ����� ���������� ������ �� ������ original
void Encode( IInputStream& original, IOutputStream& compressed );
// ����� ��������������� ������������ ������
void Decode( IInputStream& compressed, IOutputStream& original );
