#pragma once
class SafeArray
{
private:


public:
	int length;
	int* _array;

	SafeArray();
	// �R���ʺA�t�m���귽

	~SafeArray();
	// �ʺA�t�m�}�C
	SafeArray(int len);

	// ���լO�_�W�X�}�C����
	bool isSafe(int i);

	// ���o�}�C������
	int get(int i);

	// �]�w�}�C������
	void set(int i, int value);

};

