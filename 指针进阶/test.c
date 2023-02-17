#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int (*pa)[10] = &arr;
	
	return 0;
}