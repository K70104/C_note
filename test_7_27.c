// ����

// һ��һά����Ĵ����ͳ�ʼ��
// 1. ����Ĵ���
// ������һ����ͬ����Ԫ�صļ���

#include <stdio.h>

int main()
{
	int arr[20];

	return 0;
}

// ���鴴�� []��Ҫ��һ�������ſ��� ����ʹ�ñ���


// 2. �����ʼ��
int main()
{
	int arr1[20] = { 1, 2, 3 }; // ����ȫ��ʼ����ʣ���Ĭ�ϳ�ʼ��Ϊ0
	int arr2[] = { 1, 2, 3 }; // û��ָ����С ���ݳ�ʼ������ȷ��

	char arr3[] = "abc"; // a b c \0  -- 4���ֽ�
	char arr4[] = { 'a', 'b', 'c' }; // a b c
	char arr5[] = { 'a', 98, 'c' }; // a b c

	return 0;
}



// ����ʼ��
int arr[5]; // // ȫ�ֱ�������ʼ�� Ĭ�Ϸ�0

int main()
{
	int arr1[5];
	// �ֲ���������ʼ�� �ŵ������ֵ

	return 0;
}



// 3. һά�����ʹ��
// ���������ʹ������֮ǰ������һ���������� [] ���±����ò�����������ʵ��������ʵĲ�������

// ���±��ӡ1-10
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int i = 0; //���±�

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}


// sizeof ���������Ԫ�ظ���
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

// �ܽ᣺
// 1. ������ʹ���±������ʵģ��±��Ǵ�0��ʼ��
// 2. ����Ĵ�С����ͨ������õ���


// float sc[5] = { 0.0f, 3.0f };
// �ṹ������ҵ���Դ���



// 4. һά�������ڴ��еĴ洢
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i < sz; i++)
	{
		printf("%p\n", &arr[i]); // ��������4  һ��int4���ֽڵĵ�ַ 10��
		// ���������±��������Ԫ�صĵ�ַ��Ҳ���й��ɵĵ����� �ɴ˿��Եó����ۣ��������ڴ�����������ŵ�
		// ���������±����������ַ���ɵ͵��߱仯��
	}

	return 0;
}



// ����ָ���1��4���ֽ�
int main()
{
	int a = 10;
	int* p = &a;

	printf("%p\n", p);
	printf("%p\n", p + 1);

	return 0;
}




// ������ά����Ĵ����ͳ�ʼ��

// 1. ��ά����Ĵ���
int main()
{
	int arr[3][4];
	char arr[3][5];
	double arr[2][4];

	return 0;
}



// 2. ��ά����ĳ�ʼ��

int main()
{
	int arr1[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // �������� һ�з�������һ��
	int arr2[3][5] = { {1, 2}, {3, 4}, {5, 6} }; // ��һ��1 2 0 0 0  �ڶ���3 4 0 0 0  ������5 6 0 0 0

	return 0;
}



int main()
{
	int arr3[][5] = { {1, 2}, {3, 4}, {5, 6} };
	// ��ά�����ʼ������ʡ���У�����������

	return 0;
}



int main()
{
	char ch1[4][6] = { 'a', 'b' }; // ��һ��"ab" ������û��
	char ch2[4][6] = { {'a'}, {'b'} }; // ��һ��"a" �ڶ���"b" ��������û��
	char ch3[4][6] = { "abc", "def", "qwe" }; // ��һ��"abc" �ڶ���"def" ������"qwe" ������û��

	return 0;
}



// 3. ��ά�����ʹ��
// ��ά�����ʹ��Ҳ��ͨ���±�ķ�ʽ
int main()
{
	int arr[3][5] = { {1, 2, 3}, {4, 5}, {6, 7, 8, 9, 10} };
	int i = 0;
	for (i = 0; i < 3; i++) // 0~2
	{
		int j = 0;
		for (j = 0; j < 5; j++) // 0~4
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	// 1 2 3 0 0
	// 4 5 0 0 0
	// 6 7 8 9 10
	return 0;
}



// 4. ��ά�������ڴ��еĴ洢

// ��ӡ��i�е�j�еĵ�ַ
int main()
{
	int arr[3][5] = { {1, 2, 3}, {4, 5}, {6, 7, 8, 9, 10} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
	}
	// ���4  ->  ͨ��������ǿ��Է���������ʵ��ά�������ڴ���Ҳ�������洢�ġ�

	return 0;
}



// �������
// һά����
// ָ����±궼���� ��Ϊ�������ڴ�����������ŵ�
int mian()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = arr; // arr����������Ԫ�صĵ�ַ
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *p);
		p++;
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}


// ��ά����Ҳ��������ŵ�
int main()
{
	int arr[3][5] = { {1, 2, 3}, {4, 5}, {6, 7, 8, 9, 0} };
	int* p = &arr[0][0]; // ��һ�е�һ�е�����
	int i = 0;
	for (i = 0; i < 15; i++)
	{
		printf("%d ", *p); // 1 2 3 0 0 4 5 0 0 0 6 7 8 9 0
		p++;
	}

	return 0;
}




// ��������Խ��

// ������±����з�Χ�ģ��涨��0��ʼ��������n��Ԫ�أ����һ��Ԫ�ص��±����n-1
// ������±����С��0�������n-1������Խ����ʣ�����������Ϸ��ռ�ķ���
// C���Ա����ǲ��������±��Խ���飬������Ҳ��һ���ᱨ��������д����ʱ������Լ���Խ��ļ��
int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int i = 0;
	for (i = 0; i <= 5; i++)
	{
		printf("%d ", arr[i]); // 1 2 3 4 5 -858993460 
		// ������0-4�ķ�Χ ���ֵ
	}

	return 0;
}




// �ġ�������Ϊ��������

// 1��ð������
// ð������ĺ���˼�룺�������ڵ�Ԫ�ؽ��бȽ� �ų�����
// һ��ð������ ���Ը㶨һ������ ������������Ӧ�ó��ֵ�λ����
// 10��Ԫ��������9��ð����������������  -> n��Ԫ��n-1��

// ð���������Ĵ������
void Sort(int arr[])
{
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	// ð�����������
	for (i = 0; i < sz - 1; i++)
	{
		// aһ��ð������Ĺ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) // ��һ��9�� �ڶ���8��
		{
			if (arr[j] > arr[j + 1]) // ����
			{
				// ����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = { 1, 3, 5, 2, 6, 9, 4, 8, 7, 0 };
	// ���鴫��
	// ����
	Sort(arr);

	//Print(arr);

	return 0;
}
// ���鴫����ָ����գ�void Sort(int arr[])��������void Sort(int* arr)����ָ��
// arr��ָ�룬��ôsizeof(arr)�����ָ���С��4��sizeof(arr[0])��һ��Ԫ�������Σ���С��4��4/4=1



// ð������������ȷ���
// void Sort(int arr[], int sz)
void Sort(int* arr, int sz)
{
	int i = 0;
	// ð�����������
	for (i = 0; i < sz - 1; i++)
	{
		// aһ��ð������Ĺ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) // ��һ��9�� �ڶ���8��
		{
			if (arr[j] > arr[j + 1]) // ����
			{
				// ����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = { 1, 3, 5, 2, 6, 9, 4, 8, 7, 0 };
	// ���鴫��
	// ����

	// ���������û�д��Σ���������sizeof�ڲ���ʱ���磺sizeof(arr)�������arr��ʾ�������飬������Ԫ�صĵ�ַ
	int sz = sizeof(arr) / sizeof(arr[0]); // ��ʱsizeof(arr)���������������Ĵ�С 40 / 4

	// �����ڴ��ݸ�������ʱ�� ==�������ή�������Ԫ�ص�ַ==
	Sort(arr, sz);

	Print(arr, sz);

	return 0;
}
// �����鴫�ε�ʱ��ʵ����ֻ�ǰ��������Ԫ�صĵ�ַ���ݹ�ȥ�ˡ�
// ���Լ�ʹ�ں�����������д���������ʽ�� int arr[] ��ʾ����Ȼ��һ��ָ�룺 int* arr ��
// ��ô�������ڲ��� sizeof(arr) �����4��



// ����print����
void Print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", p[i]);
		// printf("%d ", *(p + i));
		// printf("%d ", *p++); // �ȼ�������++
	}
}

void Sort(int* arr, int sz)
{
	int i = 0;
	// ð�����������
	for (i = 0; i < sz - 1; i++)
	{
		// aһ��ð������Ĺ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) // ��һ��9�� �ڶ���8��
		{
			if (arr[j] > arr[j + 1]) // ����
			{
				// ����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = { 1, 3, 5, 2, 6, 9, 4, 8, 7, 0 };
	// ���鴫��
	// ����

	// ���������û�д��Σ���������sizeof�ڲ���ʱ���磺sizeof(arr)�������arr��ʾ�������飬������Ԫ�صĵ�ַ
	int sz = sizeof(arr) / sizeof(arr[0]); // ��ʱsizeof(arr)���������������Ĵ�С 40 / 4

	// �����ڴ��ݸ�������ʱ�� ==�������ή�������Ԫ�ص�ַ==
	Sort(arr, sz);

	Print(arr, sz);

	return 0;
}



// �Ż� flag ���Ч��
void Print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", p[i]);
		// printf("%d ", *(p + i));
		// printf("%d ", *p++); // �ȼ�������++
	}
}

void Sort(int* arr, int sz)
{
	int i = 0;
	// ð�����������
	for (i = 0; i < sz - 1; i++)
	{
		// aһ��ð������Ĺ���
		int j = 0;

		int flag = 1; // ����������

		for (j = 0; j < sz - 1 - i; j++) // ��һ��9�� �ڶ���8��
		{
			if (arr[j] > arr[j + 1]) // ����
			{
				// ����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0; // ��������н��� �Ͱ�flag��Ϊ0 ������������
			}
		}

		if (flag == 1) // ���û�н��� ˵�������� break���� ���Ч��
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 1, 3, 5, 2, 6, 9, 4, 8, 7, 0 };
	// ���鴫��
	// ����

	// ���������û�д��Σ���������sizeof�ڲ���ʱ���磺sizeof(arr)�������arr��ʾ�������飬������Ԫ�صĵ�ַ
	int sz = sizeof(arr) / sizeof(arr[0]); // ��ʱsizeof(arr)���������������Ĵ�С 40 / 4

	// �����ڴ��ݸ�������ʱ�� ==�������ή�������Ԫ�ص�ַ==
	Sort(arr, sz);

	Print(arr, sz);

	return 0;
}



// ��������ʲô��
// ���ۣ�
// ��������������Ԫ�صĵ�ַ�������������⣩

// �������������Ԫ�ص�ַ����ô��
// int arr[10] = { 0 };
// printf("%d\n", sizeof(arr));
// Ϊʲô����Ľ���ǣ�40��

// ���䣺
// 1. sizeof(������)���������������ʾ�������飬sizeof(������)���������������Ĵ�С��
// 2. &���������������������ʾ�������飬ȡ����������ĵ�ַ��


int main()
{
	int arr[10] = { 1, 2, 3, 4, 5 };

	printf("%p\n", arr); // ��Ԫ�صĵ�ַ
	printf("%p\n", &arr[0]); // ��Ԫ�صĵ�ַ
	printf("%p\n", &arr); // ����ĵ�ַ

	printf("------------------------------------------\n");

	printf("%p\n", arr + 1); // ��4
	printf("%p\n", &arr[0] + 1); // ��4
	printf("%p\n", &arr + 1); //��40  ��Ϊ��������10��Ԫ�� һ��Ԫ����һ������ 10��Ԫ�ؾ���10������ ��С��40 

	return 0;
}
// ָ��Ԫ�ص�ָ��+1������һ��Ԫ��
// ָ�������ָ��+1������һ������


// �����Ӧ��ʵ��1��������