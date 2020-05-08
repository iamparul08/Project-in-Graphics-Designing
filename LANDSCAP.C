/*A landscape having cartoon castle; made by:- Parul Mathur, Dated: March 30,2019
HAPPY CODING! */
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
/*arc(200,200,0,180,50); //x,y coordinates,from point,angle,radius
bottom left grass
arc(0,440,0,110,50);
arc(10,480,0,110,50);
arc(265,470,20,160,30);        */
//DESIGINING CASTLE
				//castle root
			//MIDDLE_PART OF THE CASTLE
line(60,400,60,390);
line(60,390,70,390);
line(70,390,70,400);
line(70,400,80,400);
line(80,400,80,390);
line(80,390,80,400);
line(80,390,90,390);
line(90,390,90,400);
line(90,400,100,400);
line(100,400,100,390);
line(100,390,110,390);
line(110,390,110,400);
line(110,400,120,400);
line(120,400,120,390);
line(120,390,130,390);
line(130,390,130,400);
line(130,400,140,400);
line(140,400,140,390);
line(140,390,150,390);      //
line(150,390,150,400);
line(150,400,160,400);
line(160,400,160,390);
line(160,390,170,390);
line(170,390,170,400);
line(170,400,180,400);
line(180,400,180,390);
line(180,390,180,400);
line(180,390,190,390);
line(190,390,190,400);     //
line(190,400,200,400);
line(200,400,200,390);
line(200,390,210,390);
line(210,390,210,400);
line(210,400,220,400);
line(220,400,220,390);
line(220,390,230,390);
line(230,390,230,400);
line(230,400,240,400);
line(240,400,240,390);
line(240,390,250,390);
line(250,390,250,400);
line(250,400,260,400);
line(260,400,260,390);
line(260,390,270,390);
line(270,390,270,400);
line(270,400,280,400);
line(280,400,280,390);
line(280,390,290,390);
line(290,390,290,400);
line(290,400,300,400);
line(300,400,300,390);
line(300,390,310,390);
line(310,390,310,400);
line(310,400,323,400);
//
line(140,390,140,350);
line(190,400,190,350);
line(140,350,190,350);  //joining the two points
//produced upward+outer triangle
line(140,350,140,330);
line(190,350,190,330);
line(140,330,166,300);
line(190,330,166,300);
setfillstyle(SOLID_FILL,8);
floodfill(141,349,WHITE);
//inside line parallel to upward+inner triangle
line(146,350,146,335);
line(184,350,184,335);
line(146,335,166,310);
line(184,335,166,310);
setfillstyle(SOLID_FILL,BROWN);
floodfill(147,349,WHITE);
//
line(140,340,115,340);     //left horizontal
line(190,340,215,340);     //right horizontal
line(115,340,115,400);     //left  vertical
line(215,340,215,400);     //right vertical
setfillstyle(SOLID_FILL,RED);
floodfill(117,341,WHITE);     //color in left
floodfill(214,341,WHITE);     //color in right
//left and right towers connected as histogram which are somewhat slanted

line(115,340,108,290);  //1 tilted
line(215,340,222,290);  //2 tilted
line(100,395,109,290);  //parallel to 1
line(230,390,223,290);  //parallel to 2
line(100,290,115,290);	//closing 1
line(215,290,230,290);	//closing 2
//triangles on them+color
line(100,290,108,280);    		//on 1
line(108,280,115,290);
setfillstyle(SOLID_FILL,BROWN);
floodfill(108,289,WHITE); 		//coloring 1st

line(215,290,223,280);    		//on 2
line(223,280,230,290);
floodfill(223,289,WHITE); 		//coloring 2nd

//rectangular window between two triangles
setfillstyle(SOLID_FILL,7);
line(115,290,120,250);
line(215,290,210,250);
line(120,250,210,250);	//joining line
floodfill(121,251,WHITE);
//smaller boxes in this rectangular window which are 4 in number+coloring
setfillstyle(SOLID_FILL,BLACK);      //two windows on left
rectangle(127,260,132,275);
floodfill(128,261,WHITE);
rectangle(135,260,140,275);
floodfill(136,261,WHITE);
rectangle(192,260,197,275);	//two windows on right
floodfill(193,261,WHITE);
rectangle(200,260,205,275);
floodfill(201,261,WHITE);
//above outer rectangle on top of this window which has just been coded+color
line(120,250,120,170); 	 //left
line(210,250,210,170); 	 //right
line(120,170,210,170);	 //joiner
setfillstyle(SOLID_FILL,YELLOW);
floodfill(121,249,WHITE);
//triangle on top of it+color
line(120,170,165,125);
line(165,125,210,170);
setfillstyle(SOLID_FILL,BROWN);
floodfill(165,126,WHITE);

//inner rectangle with a lot of windows
line(140,250,140,210);   //left
line(190,250,190,210);   //right
line(140,210,190,210);	//joiner
setfillstyle(SOLID_FILL,8);
floodfill(141,209,WHITE);
line(140,210,146,200);  //left slanter
line(190,210,184,200);	//right slanter
line(146,200,184,200);	//joining the slanters
setfillstyle(SOLID_FILL,7); //coloring trapezium
floodfill(147,209,WHITE);
//small windows 1st row with color
setfillstyle(SOLID_FILL,BLACK);
rectangle(144,215,149,225);
floodfill(145,216,WHITE);
rectangle(152,215,157,225);
floodfill(153,216,WHITE);
rectangle(160,215,165,225);
floodfill(161,216,WHITE);
rectangle(168,215,173,225);
floodfill(169,216,WHITE);
rectangle(176,215,181,225);
floodfill(177,216,WHITE);
//small windows 2nd row with color
setfillstyle(SOLID_FILL,BLACK);
rectangle(144,235,149,245);
floodfill(145,236,WHITE);
rectangle(152,235,157,245);
floodfill(153,236,WHITE);
rectangle(160,235,165,245);
floodfill(161,236,WHITE);
rectangle(168,235,173,245);
floodfill(169,236,WHITE);
rectangle(176,235,181,245);
floodfill(177,236,WHITE);
//straight line on top of tri
line(165,125,165,70);
circle(165,110,5);  //above circle
circle(165,120,5);  //below circle
setfillstyle(SOLID_FILL,11);
floodfill(166,109,WHITE);  //colored above       /*half
floodfill(164,119,WHITE);  //colored below        colored*/
//end of middle part

		//LEFT_PART_OF_THE_CASTLE
//setfillstyle(SOLID_FILL,YELLOW);
//floodfill(106,271,WHITE);
line(100,290,100,110);      //1st pillar+arcs+color
line(115,290,115,110);
arc(107.5,130,180,0,7);    //u-shaped
//arc(107.5,140,180,0,7);    //u-shaped
arc(107.5,110,0,180,7);    //inverted u(i.e. closing)
arc(90,110,0,45,25);	   //right arc of tri
arc(119,110,116,180,20);   //left arc of tri
//top line with colored circle of pillar1
line(108,50,108,95);
circle(108,77,5);//above
circle(108,87,5);//below
setfillstyle(SOLID_FILL,11);
floodfill(109,76,WHITE);
floodfill(107,86,WHITE);       //end of pillar1

line(75.5,400,80.5,190);      //2nd pillar adjacent to above+arcs+color
arc(90.3,220,179,0,10);       //u
//setfillstyle(SOLID_FILL,CYAN);
//floodfill(WHITE);
//arc(90.3,230,179,0,10);       //u
arc(90.3,190,0,180,9.4);      //inverted u
arc(70,190,0,45,30);          //right arc of tri
arc(110,190,130,180,30);      //left arc of tri
//top line with colored circles of pillar2
line(90,170,90,120);
circle(90,154,5);
circle(90,164,5);
setfillstyle(SOLID_FILL,11);
floodfill(91,153,WHITE);
floodfill(89,163,WHITE);           //end of pillar 2

line(40,387,50,240);	      	//3rd pillar
arc(63,260,180,0,13);          //u
arc(63,270,180,0,14);          //u
arc(64,240,0,180,14.3);	       //inverted u
arc(47,240,0,60,30);		//right arc of tri
arc(80,240,120,180,30);         //left arc of tri
//setfillstyle(SOLID_FILL,14);
//floodfill(42,242,WHITE);
//top line with colored circles of pillar3
line(63,215,63,170);
circle(63,210,5);
circle(63,200,5);
setfillstyle(SOLID_FILL,11);
floodfill(64,209,WHITE);
floodfill(62,199,WHITE);   //end of pillar3

line(10,380,25,272);           //4th pillar
arc(33,300,180,0,12); 		//u
arc(33,310,180,0,13);		 //u
arc(35,280,0,180,12.5);		//inverted u
//setfillstyle(SOLID_FILL,BLUE);
//floodfill(12,387,WHITE);
arc(22,280,0,60,25);		//right arc of tri
arc(48,280,120,170,25);		//left arc of tri
//top line with colored circles of pillar 4
line(35,258,35,215);
circle(35,253,5);
circle(35,243,5);
setfillstyle(SOLID_FILL,11);
floodfill(36,252,WHITE);
floodfill(34,242,WHITE);		//end of pillar 4

		//RIGHT_PART_OF_THE_CASTLE
line(215,290,215,110);  //1st pillar+arcs+color
line(230,290,230,110);
arc(222.5,130,180,0,7);    //u-shaped above
arc(222.5,140,180,0,7);    //u-shaped below
arc(222.5,110,0,180,7);    //inverted(i.e. closing)
arc(206,110,0,45,25);      //right arc of tri
arc(234,110,116,180,20);   //left arc of tri
//top line with colored circle of pillar1
line(223,93,223,53);
circle(223,85,5);
circle(223,75,5);
setfillstyle(SOLID_FILL,11);
floodfill(222,86,WHITE);
floodfill(224,76,WHITE);          //end of pillar1

line(255,400,250,190); //2nd pillar adjacent to 1st i.e. above+arcs+color
arc(241,220,179,0,10);       //u
arc(241,230,179,0,10);       //u
arc(241,190,0,180,9.4);      //inverted u
arc(221,190,0,45,30);        //right arc of tri
arc(261,190,130,180,30);     //left arc of tri
//top line with colored circle of pillar2
line(241,168,241,120);
circle(241,164,5);
circle(241,154,5);
setfillstyle(SOLID_FILL,11);
floodfill(240,166,WHITE);
floodfill(242,156,WHITE);       //end of pillar2

line(290,400,280,240);   	 //3rd pillar
arc(267,260,180,0,14);		//u
arc(267,270,180,0,14); 	        //u
arc(266,240,0,180,14.5);        //inverted u
arc(246,240,0,55,35);		//right arc of tri
arc(285,240,120,180,34);        //left arc of tri
//top line with colored circles of pillar3
line(266,212,266,170);
circle(266,208,5);
circle(266,198,5);
setfillstyle(SOLID_FILL,11);
floodfill(265,209,WHITE);      //end of pillar3
floodfill(267,199,WHITE);

line(320,410,310,272);		//4th pillar
arc(298,300,180,0,14);          //u
arc(298,310,180,0,14);          //u
arc(297,280,0,180,13.8);	//inverted u
//setfillstyle(SOLID_FILL,BLUE);
//floodfill(318,397,WHITE);
arc(285,275,0,58,25);          //right arc
arc(307.5,275,110,182,25);	//left arc
//top line with colored circles of pillar4
line(297,251,297,215);
circle(297,247,5);
circle(297,237,5);
setfillstyle(SOLID_FILL,11);
floodfill(296,248,WHITE);
floodfill(298,238,WHITE);           //end of pillar4

//line(0,470,640,470);	//ending line from the starting to end
//land
arc(10,450,15,150,70);        //left
arc(80,500,0,110,70);
setfillstyle(SOLID_FILL,GREEN);
floodfill(11,453,WHITE);
//setfillstyle(SOLID_FILL,BLUE);	       //water
//floodfill(140,401,WHITE);
arc(625,500,80,180,150);      //right
arc(400,450,10,200,95);
setfillstyle(SOLID_FILL,GREEN);
floodfill(405,453,WHITE);
setfillstyle(SOLID_FILL,GREEN);
floodfill(635,540,WHITE);
getch();
closegraph();
}