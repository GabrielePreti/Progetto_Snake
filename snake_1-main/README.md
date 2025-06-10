# 🐍 Snake ASCII - Versione Semplificata in C++
Questo progetto prevede l'implementazione di una versione semplificata del celebre gioco Snake in C++ in stile ASCII.
Il progetto utilizza la libreria ncurses ed è pensato per essere eseguita direttamente nel terminale 

# Obiettivo del gioco
Il progetto mira a ricreare il gameplay di Snake in ambiente terminale, mantenendo una semplicità grafica e fornendo diverse funzionalità tra le quali:
- Scelta del livello
- Salvataggio del punteggio
- Menù e schermata di GameOver
- Pausa e uscita dal gioco
L'obiettivo è quello di mangiare più mele possibili nel tempo a disposizione

# Struttura del progetto
Il codice sorgente è diviso in due cartelle
Snake/
|-- Linux_Window/ (Versione per Linux e Windows)
|-- MacOS/ (layout grafico adattato al terminale Mac)
Ogni cartella contiene gli stessi file sorgente ".cpp" e ".hpp", un "Makefile" e i file di supporto per la logica del gioco

# Requisiti
- C++ 11 o superiore
- Libreria "ncurses" installata
- Mingw per esecuzione da Windows

# Compilazione e avvio
- Linux
Entrare nella cartella "Linux_Windows" da terminale
Compilaizone: make
Esecuzione: ./snake_1

- MacOs
Entrare nella cartella "MacOS" da terminale
Compilaizone: make
Esecuzione: ./snake_1

- Windows da Powershell
Entrare nella cartella "Linux_Windows" da terminale
Compilazione: mingw32-make
Esecuzione: ./snake_1-main

# Comandi di Gioco
Freccia sù/giù/sinistra/destra: per il movimento del serpente
ctrl + P: Pausa di Gioco
ctrl + C: Arresto forzato

# File Principali
- main.cpp: Entry point del gioco
- Snake.cpp/.hpp: logica del serpente
- Position.cpp/.hpp: supporto alla logica del serpente
- Leveles.cpp/.hpp: scelta del livello
- WindowScelta.cpp/.hpp: gestione generale dei menù intermedi
- GameOver.cpp/.hpp e PauseExit.cpp/.hpp: grstione specifica dei menù intermedi
- menu.cpp/.hpp: menù principale di inizio gioco
- default_funcions.cpp/.hpp: funzioni di supporto per la creazione di finestre

# Autori
- Lisi Grazia:
- Preti Gabriele
- Zironi Mirko