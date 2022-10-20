#include "stats.h"
# include "math.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

Stats_t compute_statistics(const float* numberset, int setlength) {
    Stats_t s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    
    int i=0;
    
    if(setlength> 0)
    {
        s.min = numberset[i];
        
        for(i=0; i<setlength; i++)
        {
            s.average = s.average + numberset[i];
            if(numberset[i] > s.max)
            {
                s.max = numberset[i];
            }
            if(numberset[i] < s.min)
            {
                s.min = numberset[i];
            }
        }
        s.average = s.average/setlength;
    }
    else
    {
        s.average = NAN;
        s.min = NAN;
        s.max = NAN;
    }
    
    return s;
}
