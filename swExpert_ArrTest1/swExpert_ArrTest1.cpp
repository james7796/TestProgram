// swExpert_ArrTest1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
//#include <string>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstdlib>
#include <functional>

using namespace std;

typedef pair <int, int> pi;

int main()
{

#if 1

	int N, num, i;
	pi temp;
	priority_queue<pi, vector<pi>, greater<pi> > q;

	scanf_s("%d", &N);

	for (i = 0; i < N; i++) {
		scanf_s("%d", &num);
		if (num == 0) {
			if (q.empty()) printf("0\n");
			else {
				temp = q.top();
				printf("%d\n", temp.second);
				q.pop();
			}
		}
		else {
			q.push(make_pair(abs(num), num));
		}
	}

	return 0;


#endif 



#if 0
	std::cout << "integer input: ";
	int len;
	std::cin >> len;

	int *arr = new int[len];

	std::cout << "intger of len " << len << '\n';

	arr[0] = 5;

	for (int i = 0; i < len; i++)
	{
		printf("Arr:%d\n", arr[i]);
	}

	delete[] arr;

    return 0;
#endif 

#if 0

	string strInput;	// ���� �������� N���� ���� �Է¹��� String
	vector<int> vecNum;	// �Է¹��� N���� ���� ������ Vector

						// ���� �Է� �ޱ�
	cout << "���ڸ� �Է��ϼ��� : ";
	getline(cin, strInput);

	// ���ڿ� ���
	cout << "���ڿ�	: " << strInput << endl;


	string strNum = "";	// ������ ���ڸ� ������ �ӽ� String
	for (int i = 0; i < strInput.length(); i++)
	{
		if (strInput.at(i) == ' ')
		{
			// ������� ������ ����(����)���� Vector�� �߰� �� String �ʱ�ȭ
			vecNum.push_back(atoi(strNum.c_str()));
			strNum = "";
		}
		else
		{
			// ���Ⱑ ���� ������ ���� ����
			strNum += strInput.at(i);
			continue;
		}
	}
	vecNum.push_back(atoi(strNum.c_str()));	// ������ ���ڵ� ���Ϳ� �߰�


	cout << "����	: ";
	for (int i = 0; i < vecNum.size(); i++)
	{
		cout << vecNum[i] << " ";
	}
	cout << endl;


	return 0;

#endif 

#if 0
	int size,Osize;
	cout << "Size:";
	cin >> size;
	int* dyary;
	dyary = new int[size];

	int* oyary;
	oyary = new int[Osize];

	int minVal;


	//input
	for (int i = 0; i < size; i++)
	{
		cin >> dyary[i];
	}
	//output
	int *curr = 0;
	int* begin, *end;
	begin = dyary;
	end = dyary + size; 

	curr = begin;

	while (curr != end)
	{
		cout << *(curr) << "\t";
		curr++;
	}

	cout << endl;

	//algo 
	for (int k = 0; k < size; k++)
	{
		if (dyary[k] == 0)
		{
			//oyary[k] = dyary[k];
			minVal = *min_element(dyary, dyary + size);
			oyary[k] = minVal;
			printf("oyary:%d\n", oyary[k]);
		}
		else
		{
			oyary[k] = dyary[k];
		}
	}

	for (int i = 0; i < Osize; i++)
	{
		printf("oyary:%d\n", oyary[i]);
	}

	//arr delete
	delete[] dyary;
	delete[] oyary;

	return 0;
#endif
}

