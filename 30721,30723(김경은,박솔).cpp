/*
������ : �����, �ڼ�
������ : 2021.09.08.
����   : parksol0509@gmail.com
*/ 
#include <stdio.h>

void mousecallback(objectID object, int x, int y, mouseAction action)
{
	endGame();
}


int main()
{
	sceneID room1 = createscene("��1", "����-1.png");
	
	objectID door1 = createobject("����-Ž��.png");
	locateobject(door1, room1, �ŵ�����, �޸���);
	objectID door1 = createobject("�޸���-�б�");
	showobject(door1); 
	
	startGame(room1);
}
�� ����ؿ�(����), ������ �ϰڽ��ϴ�(��) 
