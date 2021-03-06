
// This is the command sequence that rotates the ILI9341 driver coordinate frame

  rotation = m % 4; // Limit the range of values to 0-3

  writecommand(TFT_MADCTL);
  switch (rotation) {
    case 0:
     if (tabcolor == INITR_BLACKTAB) {
       writedata(TFT_MAD_MX | TFT_MAD_MY | TFT_MAD_RGB);
     } else if(tabcolor == INITR_GREENTAB2) {
       writedata(TFT_MAD_MX | TFT_MAD_MY | TFT_MAD_RGB);
       colstart = 2;
       rowstart = 1;
     } else if(tabcolor == INITR_GREENTAB3) {
       writedata(TFT_MAD_MX | TFT_MAD_MY | TFT_MAD_BGR);
       colstart = 2;
       rowstart = 3;
	 } else {
       writedata(TFT_MAD_MX | TFT_MAD_MY | TFT_MAD_BGR);
     }
      _width  = TFT_WIDTH;
      _height = TFT_HEIGHT;
      break;
    case 1:
     if (tabcolor == INITR_BLACKTAB) {
       writedata(TFT_MAD_MY | TFT_MAD_MV | TFT_MAD_RGB);
     } else if(tabcolor == INITR_GREENTAB2) {
       writedata(TFT_MAD_MY | TFT_MAD_MV | TFT_MAD_RGB);
       colstart = 1;
       rowstart = 2;
     } else if(tabcolor == INITR_GREENTAB3) {
       writedata(TFT_MAD_MY | TFT_MAD_MV | TFT_MAD_BGR);
       colstart = 3;
       rowstart = 2;
	 } else {
       writedata(TFT_MAD_MY | TFT_MAD_MV | TFT_MAD_BGR);
     }
      _width  = TFT_HEIGHT;
      _height = TFT_WIDTH;
      break;
    case 2:
     if (tabcolor == INITR_BLACKTAB) {
       writedata(TFT_MAD_RGB);
     } else if(tabcolor == INITR_GREENTAB2) {
       writedata(TFT_MAD_RGB);
       colstart = 2;
       rowstart = 1;
     } else if(tabcolor == INITR_GREENTAB3) {
       writedata(TFT_MAD_BGR);
       colstart = 2;
       rowstart = 1;
     } else {
       writedata(TFT_MAD_BGR);
     }
      _width  = TFT_WIDTH;
      _height = TFT_HEIGHT;
      break;
    case 3:
     if (tabcolor == INITR_BLACKTAB) {
       writedata(TFT_MAD_MX | TFT_MAD_MV | TFT_MAD_RGB);
     } else if(tabcolor == INITR_GREENTAB2) {
       writedata(TFT_MAD_MX | TFT_MAD_MV | TFT_MAD_RGB);
       colstart = 1;
       rowstart = 2;
     } else if(tabcolor == INITR_GREENTAB3) {
       writedata(TFT_MAD_MX | TFT_MAD_MV | TFT_MAD_BGR);
       colstart = 1;
       rowstart = 2;
	   } else {
       writedata(TFT_MAD_MX | TFT_MAD_MV | TFT_MAD_BGR);
     }
      _width  = TFT_HEIGHT;
      _height = TFT_WIDTH;
      break;

  // These next rotations are for bottum up BMP drawing
  /*  case 4:
      writedata(ST7735_TFT_MAD_MX | ST7735_TFT_MAD_MY | ST7735_TFT_MAD_BGR);
      _width  = TFT_WIDTH;
      _height = TFT_HEIGHT;
      break;
    case 5:
      writedata(ST7735_TFT_MAD_MV | ST7735_TFT_MAD_MX | ST7735_TFT_MAD_BGR);
      _width  = TFT_HEIGHT;
      _height = TFT_WIDTH;
      break;
    case 6:
      writedata(ST7735_TFT_MAD_BGR);
      _width  = TFT_WIDTH;
      _height = TFT_HEIGHT;
      break;
    case 7:
      writedata(ST7735_TFT_MAD_MY | ST7735_TFT_MAD_MV | ST7735_TFT_MAD_BGR);
      _width  = TFT_HEIGHT;
      _height = TFT_WIDTH;
      break;
  */
  }