#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

void readDate(struct date *today) {
    scanf("%d", &(*today).year);
    scanf("%d", &(*today).month);
    scanf("%d", &(*today).day);
}
void printDate(struct date today) {
    printf("%02d/%02d/%d \n", today.month, today.day, today.year);
}
struct date advanceDay(struct date today) {
    struct date tomorrow;
    
    if((today.day == 31) | (today.day == 30)) {
        tomorrow.day = 1;
        
        if(today.month == 12) {
            tomorrow.month = 1;
            tomorrow.year = today.year +1;
        } else {
            tomorrow.month = today.month +1;
            tomorrow.year = today.year;
        }
    } else {
        tomorrow.day = today.day +1;
    }
    
  return tomorrow;  
};