#define PROGMEM
#define pgm_read_word(x)		(x)
#define pgm_read_byte_near(x)	(x)
#define float double			/* ELKS gcc 'double' use gen much less code */
#define FS_ACCESS_ALLOWED

void host_cls();
void host_showBuffer();
void host_moveCursor(int x, int y);
void host_outputString(char *str);
void host_outputChar(char c);
void host_outputLong(long num);
void host_outputFloat(float f);
char *host_floatToStr(float f, char *buf);
void host_newLine();
char *host_readLine();
char host_getKey();
int host_ESCPressed();
void host_outputFreeMem(unsigned int val);
void host_sleep(long ms);
void host_digitalWrite(int pin,int state);
int host_digitalRead(int pin);
int host_analogRead(int pin);
void host_pinMode(int pin, int mode);
double host_floor(double x);

#ifdef FS_ACCESS_ALLOWED
void host_directoryListing();
int host_saveProgramToFile(char *fileName);
int host_loadProgramFromFile(char *fileName);
int host_removeFile(char *fileName);
#endif
