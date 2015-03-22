#pragma once
class SafeArray
{
private:


public:
	int length;
	int* _array;

	SafeArray();
	// 刪除動態配置的資源

	~SafeArray();
	// 動態配置陣列
	SafeArray(int len);

	// 測試是否超出陣列長度
	bool isSafe(int i);

	// 取得陣列元素值
	int get(int i);

	// 設定陣列元素值
	void set(int i, int value);

};

