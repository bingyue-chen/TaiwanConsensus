all: TaiwanConsensus

TaiwanConsensus: TaiwanConsensus.c
	gcc -o $@ $<

preprocess: TaiwanConsensus.c
	gcc -E $<

clean:
	rm TaiwanConsensus
