#define TAIWAN_CONSENSUS_BUILDER(num_countries, num_systems) \
	ANNOUNCE(num_countries country num_systems system), \
	BOTH(IS_ONE_COUNTRY(num_countries), IS_TWO_SYSTEM(num_systems)) ? \
		ANNOUNCE(No such thing. Look at HK.) : \
	IS_ONE_COUNTRY(num_countries) ? \
		ANNOUNCE(Taiwan is not part of china.) : \
	BOTH(IS_TWO_COUNTRY(num_countries), IS_TWO_SYSTEM(num_systems)) ? \
		ANNOUNCE(Taiwan Consensus.) : \
	ANNOUNCE(Funcking kidding.), \
	ANNOUNCE()

#define IS_ONE_COUNTRY(num_countries) !(num_countries ^ 1)
#define IS_TWO_COUNTRY(num_countries) !(num_countries ^ 2)
#define IS_TWO_SYSTEM(num_systems)    !(num_systems   ^ 2)

#define ANNOUNCE(x) puts(#x)
#define BOTH(x, y) ((x) & (y))

int puts(const char *);

int main(void){

	TAIWAN_CONSENSUS_BUILDER(1, 1);

	TAIWAN_CONSENSUS_BUILDER(1, 2);

	TAIWAN_CONSENSUS_BUILDER(2, 1);

	TAIWAN_CONSENSUS_BUILDER(2, 2);

	return 0;
}