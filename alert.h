
extern int emailAlertCallCount;
extern int ledAlertCallCount;

extern void check_and_alert(float maxThreshold, alerter_funcptr alert_array[], Stats_t computedStats);
extern void emailAlerter(void);
extern void ledAlerter(void);


typedef void (*alerter_funcptr)(void);
