typedef struct Stats_s
{
	float average;
	float min;
	float max;
}Stats_t;

Stats_t compute_statistics(const float* numberset, int setlength);

