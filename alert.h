
extern int emailAlertCallCount;
extern int ledAlertCallCount;

void emailAlerter(void);
void ledAlerter(void);

void check_and_alert(float maxThreshold, alerter_funcptr alert_array[], Stats_t computedStats);

typedef void (*alerter_funcptr)(void);
