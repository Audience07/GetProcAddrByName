#include "Head.h"


typedef (_stdcall *Plus)(int, int);

int main() {
	//打开dll,获取FileBuffer
	LPVOID DLLFileBuffer = _vOpenFile("MyDLL.dll", 0);

	
	
	Plus Plus1 = _GetFunctionAddrByName(DLLFileBuffer, "Div");

	printf("%d", Plus1(10, 5));
	














	//读取关键PE关键字段
	//struct FileSign* pFileSign = malloc(sizeof(pFileSign));
	//if (!pFileSign) {
	//	return 0;
	//}
	//_ReadData(DLLFileBuffer, pFileSign);


	//读取节表关键字段
	//struct SectionTable* pSectionTable = malloc(sizeof(pSectionTable) * pFileSign->NumberOfSection);
	//if (!pSectionTable) {
	//	return 0;
	//}
	//_ReadSectionTable(pSectionTable, pFileSign);
	//

	//定位导出表
	//LPVOID pExportTable = (DWORD)pFileSign->OptionalHeader + pFileSign->SizeOfOptionHeader - (8 * 16);




}