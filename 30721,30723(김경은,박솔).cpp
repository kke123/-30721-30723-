/*
개발자 : 김경은, 박솔
개발일 : 2021.09.08.
문의   : parksol0509@gmail.com
*/ 
#include <stdio.h>

void mousecallback(objectID object, int x, int y, mouseAction action)
{
	endGame();
}


int main()
{
	sceneID room1 = createscene("룸1", "옷장-1.png");
	
	objectID door1 = createobject("옷장-탐색.png");
	locateobject(door1, room1, 신데렐라, 메모지);
	objectID door1 = createobject("메모지-읽기");
	showobject(door1); 
	
	startGame(room1);
}
쌤 사랑해요(경은), 열심히 하겠습니다(솔) 
