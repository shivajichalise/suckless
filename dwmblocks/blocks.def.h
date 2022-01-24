//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/																										/*Update Interval*/	/*Update Signal*/
	{"", 			"/home/alphajr/.local/share/dwmblocks/scripts/resources",			5,									0},
	{"", 			"/home/alphajr/.local/share/dwmblocks/scripts/updates",				360,								0},
	{"", 			"/home/alphajr/.local/share/dwmblocks/scripts/volume",				5,									0},
	{"", 			"/home/alphajr/.local/share/dwmblocks/scripts/network",				60,									0},
	{"", 			"/home/alphajr/.local/share/dwmblocks/scripts/date",					1,									0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
