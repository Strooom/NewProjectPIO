#include "fonts.h"


// 
//  Font data for Courier New 12pt
// 

const CH_CN Font12CN_Table[] = 
{
/*--  文字:  你  --*/
/*--  微软雅黑12;  此字体下对应的点阵为：宽x高=16x21   --*/
{"你",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1D,0xC0,0x1D,0x80,0x3B,0xFF,0x3B,0x07,
0x3F,0x77,0x7E,0x76,0xF8,0x70,0xFB,0xFE,0xFB,0xFE,0x3F,0x77,0x3F,0x77,0x3E,0x73,
0x38,0x70,0x38,0x70,0x3B,0xE0,0x00,0x00,0x00,0x00},

/*--  文字:  好  --*/
/*--  微软雅黑12;  此字体下对应的点阵为：宽x高=16x21   --*/
{"好",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x73,0xFF,0x70,0x0F,0xFE,0x1E,
0x7E,0x3C,0x6E,0x38,0xEE,0x30,0xEF,0xFF,0xFC,0x30,0x7C,0x30,0x38,0x30,0x3E,0x30,
0x7E,0x30,0xE0,0x30,0xC1,0xF0,0x00,0x00,0x00,0x00},


/*--  文字:  a  --*/
/*--  微软雅黑12;  此字体下对应的点阵为：宽x高=16x21   --*/
{"a",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x3E,0x00,0x67,0x00,0x07,0x80,0x0F,0x80,0x7F,0x80,0xE3,0x80,0xE7,0x80,0xE7,0x80,
0x7F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

/*--  文字:  b  --*/
/*--  微软雅黑12;  此字体下对应的点阵为：宽x高=16x21   --*/
{"b",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,
0x7F,0x00,0x7B,0x80,0x71,0xC0,0x71,0xC0,0x71,0xC0,0x71,0xC0,0x71,0xC0,0x7B,0x80,
0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

/*--  文字:  c  --*/
/*--  微软雅黑12;  此字体下对应的点阵为：宽x高=16x21   --*/
{"c",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x3F,0x00,0x73,0x00,0xF0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xF0,0x00,0x73,0x00,
0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

/*--  文字:  A  --*/
/*--  微软雅黑12;  此字体下对应的点阵为：宽x高=16x21   --*/
{"A",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x1F,0x00,0x1F,0x00,
0x1F,0x00,0x3B,0x80,0x3B,0x80,0x71,0x80,0x7F,0xC0,0x71,0xC0,0xE0,0xE0,0xE0,0xE0,
0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
};

cFONT Font12CN = {
  Font12CN_Table,
  sizeof(Font12CN_Table)/sizeof(CH_CN),  /*size of table*/
  11, /* ASCII Width */
  16, /* Width */
  21, /* Height */
};

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
