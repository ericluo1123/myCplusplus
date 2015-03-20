#include "SafeArray.h"
#include "ArrayIndexOutOfBoundsException.h"

// �ʺA�t�m�}�C
SafeArray::SafeArray(int len) {
	length = len;
	_array = new int[length];
}

// ���լO�_�W�X�}�C����
bool SafeArray::isSafe(int i) {
	// 
	if (i >= length || i < 0) {
		return false;
	}
	else {
		return true;
	}
}

// ���o�}�C������
int SafeArray::get(int i) {
	if (isSafe(i)) {
		return _array[i];
	}
	else {
		// �s���W�L�}�C���סA��X�ҥ~ 
		throw ArrayIndexOutOfBoundsException(i);
	}
}

// �]�w�}�C������
void SafeArray::set(int i, int value) {
	if (isSafe(i)) {
		_array[i] = value;
	}
	else {
		// �s���W�L�}�C���סA��X�ҥ~
		throw ArrayIndexOutOfBoundsException(i);
	}
}

// �R���ʺA�t�m���귽
SafeArray::~SafeArray() {
	delete[] _array;
}
