#!/usr/bin/env python3
import os

def main():
    fajlnev = "nevek.csv"
    
    if not os.path.exists(fajlnev):
        return

    pti_hallgatok = []

    with open(fajlnev, "r", encoding="utf-8") as f:
        for sor in f:
            sor = sor.strip()
            if not sor:
                continue
            
            keresztnev, eletkor, szak = sor.split(",")
            
            if szak.strip().lower() == "pti":
                pti_hallgatok.append(keresztnev.strip().capitalize())

    pti_hallgatok.sort()

    print(", ".join(pti_hallgatok))

if __name__ == "__main__":
    main()