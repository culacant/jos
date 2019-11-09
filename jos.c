#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "timer_lib/timer.h"

#define PASSCNT 6
#define LOOPCNT 10
#define RANDCNT 254

int mem_size_pass[] = 
{
	 1000,
	10000,
   100000,
  1000000,
 10000000,
100000000,
};

int rand_arr_i[] = 
{
	23237,
	24425,
	27223,
	635,
	7039,
	31374,
	37313,
	41455,
	43971,
	13909,
	31998,
	46854,
	24686,
	30023,
	20780,
	23529,
	43924,
	14635,
	35158,
	38515,
	22123,
	24903,
	45576,
	10277,
	17000,
	21061,
	7609,
	2021,
	34556,
	10914,
	10868,
	42110,
	21986,
	33762,
	13407,
	21325,
	12869,
	36457,
	47134,
	26912,
	24700,
	6357,
	27045,
	36362,
	41,
	21208,
	3467,
	37785,
	15186,
	9053,
	25600,
	8969,
	23877,
	36561,
	1018,
	24969,
	35308,
	30170,
	17529,
	25344,
	5306,
	1326,
	16005,
	24302,
	18898,
	10944,
	32151,
	21999,
	48178,
	32064,
	3016,
	36225,
	9723,
	5316,
	39791,
	41212,
	26284,
	1253,
	49964,
	44665,
	30106,
	32460,
	2853,
	12004,
	12893,
	42218,
	47841,
	34582,
	184,
	37655,
	10751,
	8233,
	34662,
	17573,
	4716,
	49594,
	29441,
	34515,
	45685,
	16549,
	2794,
	18713,
	35432,
	31014,
	36017,
	5204,
	43190,
	40171,
	49507,
	16282,
	20877,
	11760,
	39431,
	36340,
	5825,
	49701,
	16095,
	40501,
	22968,
	17666,
	46145,
	2987,
	39855,
	29817,
	38580,
	40543,
	9732,
	43174,
	44918,
	26235,
	47510,
	36556,
	2543,
	23858,
	33155,
	15908,
	10122,
	447,
	32984,
	6000,
	21450,
	27554,
	37477,
	30430,
	26808,
	44437,
	27733,
	34269,
	27962,
	45169,
	14189,
	35093,
	23049,
	32902,
	11073,
	14424,
	17558,
	26309,
	39201,
	28411,
	23099,
	49206,
	12519,
	13106,
	4121,
	48491,
	30540,
	4408,
	22784,
	7145,
	24714,
	8928,
	29279,
	8927,
	9525,
	38607,
	8240,
	42493,
	41104,
	42734,
	37392,
	47025,
	6042,
	6855,
	22991,
	38012,
	2913,
	23444,
	24290,
	8971,
	7767,
	15045,
	11896,
	16172,
	30898,
	45971,
	18824,
	13135,
	38756,
	44157,
	27960,
	49321,
	193,
	26012,
	43223,
	3984,
	39771,
	28724,
	31788,
	42392,
	39524,
	25369,
	38093,
	2433,
	6427,
	11049,
	34625,
	3406,
	48934,
	19783,
	45118,
	2976,
	20490,
	891,
	16835,
	20237,
	10572,
	27474,
	18483,
	46098,
	23401,
	7782,
	41340,
	49935,
	7685,
	43930,
	48588,
	8255,
	10909,
	45108,
	2217,
	38333,
	49718,
	14455,
	1403,
	22785,
	21285,
	2301,
	13236,
	44805,
	43949,
	40856,
	19695,
	47682,
	39793
};
float rand_arr_f[] = 
{
10.287,
10,590,
42.433,
37.276,
11.290,
14.662,
12.758,
30.806,
21.19,
48.734,
23.909,
23.096,
95.41,
21.97,
47.437,
32.819,
17.740,
23.220,
46.171,
17.143,
44.040,
46.788,
25.248,
74.1,
38.98,
42.401,
38.350,
33.327,
13.159,
26.970,
17.750,
15.780,
16.836,
13.731,
10.282,
33.872,
83.45,
28.080,
64.55,
40.484,
41.667,
49.027,
12.873,
43.040,
22.178,
27.600,
18.959,
59.59,
35.73,
39.945,
34.843,
14.317,
32.335,
13.80,
35.884,
27.666,
15.46,
11.804,
22.437,
13.467,
24.370,
10.061,
39.86,
33.495,
72.13,
15.583,
27.636,
36.986,
39.80,
28.727,
36.649,
37.271,
22.154,
53.6,
19.211,
46.345,
27.267,
31.468,
15.909,
40.773,
25.671,
70.90,
33.2,
17.88,
22.727,
48.611,
25.006,
67.25,
10.618,
25.461,
74.41,
17.041,
24.661,
14.05,
40.359,
18.497,
23.08,
33.37,
42.810,
45.092,
40.324,
49.135,
31.19,
40.738,
31.41,
25.875,
22.210,
44.732,
42.306,
23.836,
30.704,
28.953,
22.389,
10.295,
38.763,
28.284,
22.997,
20.529,
33.142,
30.732,
10.342,
22.810,
42.733,
80.74,
62.78,
19.800,
34.005,
35.034,
38.630,
38.052,
44.92,
46.191,
18.720,
31.268,
23.490,
20.891,
12.965,
36.485,
12.169,
34.475,
66.29,
24.373,
22.979,
88.41,
17.98,
79.6,
35.404,
12.643,
41.517,
10.520,
23.40,
47.553,
45.872,
23.017,
22.227,
37.157,
15.987,
31.712,
18.52,
44.506,
30.941,
29.181,
23.315,
40.69,
37.684,
23.719,
29.812,
60.4,
43.296,
16.856,
11.976,
29.798,
12.721,
43.536,
32.214,
48.748,
10.392,
21.781,
49.816,
38.118,
19.115,
47.218,
49.515,
17.206,
32.009,
83.92,
28.597,
35.762,
47.91,
84.20,
30.681,
11.490,
38.429,
12.882,
49.775,
83.70,
31.07,
43.087,
34.352,
95.52,
36.938,
55.44,
98.94,
13.681,
20.455,
14.491,
77.39,
65.63,
45.214,
68.3,
31.04,
26.553,
51.2,
19.102,
43.744,
37.01,
33.990,
12.916,
56.17,
49.944,
46.752,
23.336,
13.0,
49.725,
12.077,
43.163,
10.075,
37.541,
66.0,
15.175,
71.24,
44.395,
17.925,
29.260,
23.663,
15.616,
59.74,
11.605,
54.00,
46.646,
52.38,
31.620,
28.081,
24.022,
25.022,
33.145,
25.766,
19.86,
88.63,
46.474,
22.286,
11.713,
24.314,
39.024,
44.17
};

int rand_int()
{
	static int i;
	i++;
	if(i>RANDCNT)
		i = i%RANDCNT;
	return rand_arr_i[i];
}
float rand_float()
{
	static int i;
	i++;
	if(i>RANDCNT)
		i = i%RANDCNT;
	return rand_arr_f[i];
}

int main()
{
	tick_t pass_start, pass_elapsed;
	tick_t loop_start, loop_elapsed;
	long jos;
	timer_lib_initialize();

	float *floatmem = NULL;
	int *intmem = NULL;
	for(int i=0;i<PASSCNT;i++)
	{
		pass_start = timer_current();
		printf("\nstarting pass %i, %i ops\n", i, mem_size_pass[i]*LOOPCNT);

		floatmem = malloc(sizeof(float)*mem_size_pass[i]);
		intmem = malloc(sizeof(int)*mem_size_pass[i]);

		if(floatmem == NULL)
		{
			printf("float malloc error pass #%i\n", i);
			continue;
		}
		if(intmem == NULL)
		{
			printf("int malloc error pass #%i\n", i);
			continue;
		}

		for(int j=0;j<mem_size_pass[i];j++)
		{
			floatmem[j] = rand_float();
			intmem[j] = rand_int();
		}
// int arithmetic
		loop_start = timer_current();
		for(int k=0;k<LOOPCNT;k++)
		{
			for(int j=1;j<mem_size_pass[i]-1;j++)
			{
				if(intmem[j] == 0)
					intmem[j] = rand_int();
				intmem[j+1] 	= intmem[j] 	/ intmem[j-1];
				intmem[j] 		= intmem[j-1] 	* intmem[j+1];
				intmem[j+1] 	= intmem[j] 	+ intmem[j+1];
				intmem[j] 		= intmem[j+1] 	- intmem[j-1];
			}
		}
		loop_elapsed = timer_elapsed_ticks(loop_start);
		jos = (mem_size_pass[i]*LOOPCNT)/timer_ticks_to_seconds(loop_elapsed);
		printf("int loop:\t %fs\t %ld jos\n", timer_ticks_to_seconds(loop_elapsed), jos);
// float arithmetic
		loop_start = timer_current();
		for(int k=0;k<LOOPCNT;k++)
		{
			for(int j=1;j<mem_size_pass[i]-1;j++)
			{
				if(floatmem[j] == 0)
					floatmem[j] = rand_float();
				floatmem[j+1] 	= floatmem[j] 		/ floatmem[j-1];
				floatmem[j] 	= floatmem[j-1] 	* floatmem[j+1];
				floatmem[j+1] 	= floatmem[j] 		+ floatmem[j+1];
				floatmem[j] 	= floatmem[j+1] 	- floatmem[j-1];
			}
		}
		loop_elapsed = timer_elapsed_ticks(loop_start);
		jos = (mem_size_pass[i]*LOOPCNT)/timer_ticks_to_seconds(loop_elapsed);
		printf("float loop:\t %fs\t %ld jos\n", timer_ticks_to_seconds(loop_elapsed), jos);
// float math
		loop_start = timer_current();
		for(int k=0;k<LOOPCNT;k++)
		{
			for(int j=0;j<mem_size_pass[i];j++)
			{
				floatmem[j] 	= tanf(floatmem[j]);
				floatmem[j]		= sinf(floatmem[j]);
				floatmem[j]		= cosf(floatmem[j]);
			}
		}
		loop_elapsed = timer_elapsed_ticks(loop_start);
		jos = (mem_size_pass[i]*LOOPCNT)/timer_ticks_to_seconds(loop_elapsed);
		printf("math loop:\t %fs\t %ld jos\n", timer_ticks_to_seconds(loop_elapsed), jos);

		free(floatmem);
		free(intmem);

		pass_elapsed = timer_elapsed_ticks(pass_start);
		printf("time pass:\t %f s\n", timer_ticks_to_seconds(pass_elapsed));

	}
	timer_lib_shutdown();
	return 0;
}
