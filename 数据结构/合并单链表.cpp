#include <stdio.h>
#include <stdlib.h>   
 
typedef int ElementType;
typedef struct Node *node;
struct Node {
    ElementType Data;    
    node   Next;    
};
typedef node List;    
 
List Read();    
void Print( List L );   
List Merge( List L1, List L2 );    
 
int main() {
    List L1, L2, L;
    L1 = Read();
    L2 = Read();
    L = Merge(L1, L2);
    Print(L);
    Print(L1);
    Print(L2);
    return 0;
}
 
List Read() {
	int N, i;
	scanf("%d", &N);
	
	List L = (List)malloc(sizeof(struct Node));
	L->Next = NULL;    
	List r = L;    
	for ( i = 0; i < N; i++ ) {
		List p = (List)malloc(sizeof(struct Node));   
		scanf("%d", &p->Data);   
		r->Next = p;   
		r = p;   
	}
	r->Next = NULL;  
	
	return L;   
}
 
void Print( List L ) {
	List p = L->Next;    //��pָ���һ����㣬L��ͷ��㣬������һ�������ǵ�һ����㡣
	if ( p ) {    //����ǿա�
		List r = L;    //����һ����ʱָ��r��ָ��L.
		while ( r->Next ) {    //��r�����һ������ʱ��r->Next�պ���NULL�˳�ѭ����
			r = r->Next;    //ÿ�ָ���r.
			printf("%d ", r->Data);    //��ӡ��ǰ����������
		}
	} 
	else	printf("NULL");    //����Ϊ�գ�ֱ�����NULL.
	printf("\n");
}
 
List Merge( List L1, List L2 ) {
	List pa, pb, pc, L;
	L = (List)malloc(sizeof(struct Node));    //����һ��ͷ���L.
	pa = L1->Next;    //ָ��paָ��L1�ĵ�һ����㡣
	pb = L2->Next;    //ָ��pbָ��L2�ĵ�һ����㡣
	pc = L;    //ָ��pcָ�����洴����ͷ���L.
	while ( pa && pb ) {    //��L1��L2����û�б�����ɵ�ʱ��
		if ( pa->Data <= pb->Data ) {    //��pa��������С��
			pc->Next = pa;    //��pa����L�С�
			pc = pa;    //pc����ǰ���һ�����pa����Ҳ��β�塣
			pa = pa->Next;    //��L1�����У�����paλ�á�
		} else {
			pc->Next = pb;
			pc = pb;
			pb = pb->Next;
		}
	}
    /*���L1δ�����꣬��L1ȫ������L�����L2δ�����꣬��L2ȫ������L*/
	pc->Next = pa ? pa : pb;
	L1->Next = NULL;
	L2->Next = NULL;
	
	return L;
} 

