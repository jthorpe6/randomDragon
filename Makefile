.PHONY: c swift

all: c swift

c: C/dragon.c
	cd C && $(CC) dragon.c -o dragon
swift: Swift/dragon.swift
	cd Swift && swiftc dragon.swift -o dragon

clean:
	rm -f C/dragon && rm -f swift/dragon
