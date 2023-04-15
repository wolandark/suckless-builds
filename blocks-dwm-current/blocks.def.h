//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {" CPU ", "mpstat 1 1 | awk 'NR==4 {print $4}'",					5,		0},
    {"  ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
    {" ", "date '+%b %d %I:%M %p'",					5,		0},
    {" ", "cat /sys/class/power_supply/BAT0/capacity",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
