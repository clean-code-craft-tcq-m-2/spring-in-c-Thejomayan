#include "alert.h"
#include "stats.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void check_and_alert(float maxThreshold, alerter_funcptr alert_array[], Stats_t computedStats)
{
	if (computedStats.max > maxThreshold)
	{
		alert_array[0]();
		alert_array[1]();
	}
}

void emailAlerter(void)
{
	emailAlertCallCount++;
}

void ledAlerter(void)
{
	ledAlertCallCount++;
}
