#include "Head.h"


typedef (_stdcall *Plus)(int, int);

int main() {
	//��dll,��ȡFileBuffer
	LPVOID DLLFileBuffer = _vOpenFile("MyDLL.dll", 0);

	
	
	Plus Plus1 = _GetFunctionAddrByName(DLLFileBuffer, "Div");

	printf("%d", Plus1(10, 5));
	














	//��ȡ�ؼ�PE�ؼ��ֶ�
	//struct FileSign* pFileSign = malloc(sizeof(pFileSign));
	//if (!pFileSign) {
	//	return 0;
	//}
	//_ReadData(DLLFileBuffer, pFileSign);


	//��ȡ�ڱ�ؼ��ֶ�
	//struct SectionTable* pSectionTable = malloc(sizeof(pSectionTable) * pFileSign->NumberOfSection);
	//if (!pSectionTable) {
	//	return 0;
	//}
	//_ReadSectionTable(pSectionTable, pFileSign);
	//

	//��λ������
	//LPVOID pExportTable = (DWORD)pFileSign->OptionalHeader + pFileSign->SizeOfOptionHeader - (8 * 16);




}