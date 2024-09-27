#include <conio.h> 
#include <graphics.h> 
#include <stdio.h> 

void flood(int x, int y, int new_col, int old_col) 
{ 
    if (getpixel(x, y) == old_col)
	{ 
        putpixel(x, y, new_col); 
        	
        flood(x + 1, y, new_col, old_col); 
        
       
        flood(x - 1, y, new_col, old_col); 
        
       
        flood(x, y + 1, new_col, old_col); 
        
        
        flood(x, y - 1, new_col, old_col); 
    } 
}
//Driver Code
int main() 
{ 
    // Initialize of gdriver with 
    // DETECT macros 
    int gdriver = DETECT, gmode; 
    //Setting the margin
    line (0,0,700,0);
    line(500,0,0,0);
	// Initialize structure of 
    // the house 
    initgraph(&gdriver, &gmode, ""); 
    
    //Boundary
    line(0,0,700,0);
    line(0,0,0,500);
    line(700,0,700,500);
    line(0,500,700,500);
    
    // create structure for the  house 
    line(150,200,250,200);
    line(150,200,100,250);
    line(250,200,200,250);
    line(100,250,200,250);
    line(100,250,100,350);
    line(200,250,200,350);
    line(100,350,200,350);
    line(250,200,300,250);
    line(300,250,300,350);
    line(200,350,300,350);
    
    // doors and window 
    line(225,350,225,275);
    line(225,275,275,275);
    line(275,275,275,350);
    
    line(125,275,175,275);
    line(175,275,125,325);
    line(125,325,175,325);
    line(125,275,175,325);
    
    //sun
    circle(350,100,20);
    setcolor(12);
    line(350,80,350,60);
    line(350,120,350,140);
    line(330,100,310,100);
    line(370,100,390,100);
    setcolor(15);
    
    //horizon
    line(0,300,100,300);
    line(300,300,700,300);
    //hills
    line(0,300,200,110);
    line(200,110,330,250);
    line(330,250,410,180);
    line(410,180,460,250);
    line(460,250,580,110);
    line(580,110,700,300);
    
    //cloud1
    arc(200,50,81,300,20);
    arc(220,40,0,155,20);
    arc(220,60,180,330,20);
    arc(240,50,0,100,20);
    arc(240,50,220,0,20);
    //cloud2
    arc(430,50,81,300,20);
    arc(450,40,0,155,20);
    arc(450,60,180,330,20);
    arc(470,50,0,100,20);
    arc(470,50,220,0,20);
    //cloud3
    arc(60,100,81,300,20);
    arc(80,90,0,155,20);
    arc(80,110,180,330,20);
    arc(100,100,0,100,20);
    arc(100,100,220,0,20);
    
    //Tree1
    rectangle(420,379,440,500);
     rectangle(510,389,530,500);
    setcolor(2);
    arc(410,350,81,300,20);
    arc(430,340,0,155,20);
    arc(430,360,180,330,20);
    arc(450,350,0,100,20);
    arc(450,350,220,0,20);
    
    
    //Tree2
   
    arc(500,360,81,300,20);
    arc(520,350,0,155,20);
    arc(520,370,180,330,20);
    arc(540,360,0,100,20);
    arc(540,360,220,0,20);
    setcolor(15);
    
    //Pond
    setcolor(10);
    line(25,360,107,360);
    arc(125,355,200,275,20);
    //arc(125,380,315,80,5);
    arc(30,380,106,250,20);
    line(22,398,122,398);
    arc(107,385,317,32,21);
    setcolor(15);
    
    //sky
   flood(1,1,11,0);
    
    //cloud
    flood(201,51,15,0);
    flood(431,51,15,0);
    flood(61,101,15,0);
    
    //sun
    flood(351,101,14,0);
    //POND
    flood(26,361,1,0);
    
    //land
    flood(1,301,10,0);
    
    //hills
    flood(5,299,6,0);
	
	//house
	flood(155,210,4,0);
	flood(151,251,8,0);
	flood(310,251,8,0);
	//doors windows
	flood(226,276,13,0);
	flood(126,276,13,0);
	flood(174,324,13,0);
	
	//tree1
	flood(421,380,6,0);
	flood(411,351,2,0);
	
	//tree2
	flood(511,390,6,0);
	flood(501,361,2,0);   
	
	setcolor(15);
	 ellipse(200,400,0,360,10,30);
	 flood(201,401,14,10);
	  ellipse(200,400,0,360,30,10);
	  flood(171,401,14,10);
	  flood(215,401,14,10);
	  circle(200,400,12);
	  flood(201,401,4,14);
	  
	  setcolor(6);
	  arc(205,420,0,90,15);
	  
	  line(220,420,225,480);
	 setcolor(15);
	 
	  ellipse(300,400,0,360,10,30);
	 flood(301,401,14,10);
	  ellipse(300,400,0,360,30,10);
	  flood(271,401,14,10);
	  flood(315,401,14,10);
	  circle(300,400,12);
	  flood(301,401,4,14);
	  
	  setcolor(6);
	  arc(300,425,90,180,15);
	  
	  line(285,420,275,480);
	  setcolor(15);
	  
	  //grass
	  line(20,500,10,450);
	  line(10,450,30,480);
	  line(30,480,35,440);
	  line(35,440,45,480);
	  line(45,480,55,440);
	  line(55,440,65,480);
	  line(65,480,80,420);
	  line(80,420,90,480);
	  line(90,480,110,430);
	  line(110,430,100,500);
	  flood(21,499,2,10);
	  
	  int i=150;
	  
	  line(50+i,500,40+i,450);
	  line(40+i,450,60+i,480);
	  line(60+i,480,65+i,440);
	  line(65+i,440,75+i,480);
	  line(75+i,480,85+i,440);
	  line(85+i,440,95+i,480);
	  line(95+i,480,110+i,420);
	  line(110+i,420,120+i,480);
	  line(120+i,480,140+i,430);
	  line(140+i,430,130+i,500);
	  flood(201,499,2,10);
	  
	 i=120;
	  
	arc(500+i,360+i,81,300,20);
    arc(520+i,350+i,0,155,20);

    arc(540+i,360+i,0,100,20);
    arc(540+i,360+i,220,0,20);
    flood(621,481,2,10);
	  
	   
	 getch();
  
    // Close the initialized gdriver 
    closegraph();
   
	return 0; 
}
    
   
    



