# Grafika
2025 Számítógépes Grafika I89JMB

## Projekt leírása
A beadandó egy interaktív, 3D-s Farkle játék, amely OpenGL-t használ C nyelven. A játék egy virtuális asztalon játszódik, ahol a játékos dobókockákkal dob, pontoz, és a klasszikus Farkle szabályok szerint játszik. A program textúrázott modellekkel, dinamikus fényekkel és interaktív elemekkel rendelkezik. A minimális követelményeket teljesíti, és több többlet funkciót is megvalósít a jobb érdemjegy érdekében.

## Minimális követelmények teljesítése
- **Kamerakezelés**: Az egérrel szabadon körbenézhetünk az asztal körül.
- **Objektumok**: Az asztal, dobókockák és egyéb objektumok .obj fájlokból töltődnek be.
- **Animáció, mozgatás**: A dobókockák animáltak: dobáskor forgó animációval "landolnak" az asztalon, véletlenszerű eredménnyel. A már kijelölt kockák az asztal szélére mozdulnak. 
- **Textúrák**: Az asztal fahatású, a kockák pedig számozott PNG textúrákkal rendelkeznek.
- **Fények**: Dinamikus pontfények világítják meg az asztalt, amelyek erőssége a '+' és '-' billentyűkkel állítható. A fények pozíciója az asztal felett van, hogy kiemeljék a kockákat.
- **Használati útmutató**: Az F1 gomb megnyomására egy overlay jelenik meg, amely a játék vezérlését, a Farkle szabályait és a pontozási rendszert ismerteti.

## Többlet funkciók
A program az alábbi extra funkciókat valósítja meg:
1. **Objektumok kijelölése egérrel**: A játékos egérkattintással kijelölhet egy kockát, amely körül halvány kiemelés jelenik meg, jelezve a kiválasztást.
2. **Felhasználói felület**: Egy egyszerű UI panel a képernyő szélén lehetővé teszi a játékosnak a dobás indítását, a pontszámok rögzítését, és a játék újraindítását gombokkal.
3. **Bounding box**: A kockák kijelölése egy raycast lesz bounding boxot eltalálásával.
4. **AI**: Egy egyszerű AI ellenfél, amely a Farkle szabályai szerint játszik, automatikusan dob és pontoz, így egyjátékos módot biztosít.
