/*************************************************************************
	> File Name: ListTable.c
	> Author: YazongMa
	> Mail: mayazong@126.com 
	> Created Time: 2017年04月12日 16:28:57
 ************************************************************************/

#include <stdlib.h>
#include "ListTable.h"

/*初始化操作, 建立一个空的线性表*/
int	InitList(ListTable** L)
{
	*L = (ListTable*)calloc(1, sizeof(ListTable));
	return 0;
}

/*判断线性表是否为空, 空返回true, 否则false*/
bool ListEmpty(ListTable* L)
{
	return true;
}

/*清空线性表*/
void ClearList(ListTable* L)
{
}

/*将线性表中第i个位置的元素返回给e*/
int GetElem(ListTable* L, int i, DataType* e)
{
	return 0;
}

/*在线性表L中查找元素e, 如果查找成功返回该元素序号, 否则返回0*/
int FindElem(ListTable* L, DataType e)
{
	return 0;
}

/*在线性表L的第i个位置插入新元素e*/
int ListInsert(ListTable* L, int i, DataType e)
{
	return 0;
}

/*删除线性表L中第i个位置的元素, 并用e返回其值*/
int ListDelete(ListTable* L, int i, DataType* e)
{
	return 0;
}

/*返回线性表L的元素个数1*/
int ListLength(ListTable* L)
{
	return 0;
}
