# FBI Reloaded FR

FBI Reloaded FR est une traduction de FBI Reloaded étant une version améliorée de FBI, Un gestionaire de titre Open source pour 3ds.

téléchargement: https://github.com/cooolgamer/FBI-Reloaded-FR/releases

# Fonctionnalités

* Navigation et modification de la carte SD, TWL sound, TWL photo, sauvegardes et sauvegardes aditionnelles.
* Exporter, Importer, et effacer les sauvegardes de cartouches DS.
* Exporter, Importer, et effacer les Secure Values des sauvegardes (anti-restoration de sauvegarde).
* Installer des titres/tickets depuis un système de fichier, depuis un réseau ou depuis internet avec une URL ou un QRcode.
  * Importe automatiquement la seed d'un titre après son installation depuis internet ou la carte SD.
* Navigation et effacement des titres en attente (mise à jours téléchargés, titres en cours de téléchargement sur l'eshop, etc).
* Customisation de l'apparence en remplaçant les ressources des RomFS dans "sdmc:/fbi/theme/".

* Seulement disponible avec Luma3DS:
  * Navigation et modification de la CTR NAND, TWL NAND, et sauvegardes système.
  * Copier l'image de la NAND dans la carte SD.
  * Démarrer les titres installés dans la console.

# Build (linux)

Requires [devkitARM](http://sourceforge.net/projects/devkitpro/files/devkitARM/), along with 3ds-curl, 3ds-zlib, and 3ds-jansson from the devkitPro pacman repository, to build.

Make sure that the devkitARM variable is assigned (usually `DEVKITARM=/opt/devkitpro/devkitARM` in your shell).

Run `make install` in the FBI-Reloaded directory. Directories named `build` and `output` will be created.

The directly installable CIA and 3dsx files are under `output/3ds-arm/`.

# Credit

Banner: Originally created by [OctopusRift](http://gbatemp.net/members/octopusrift.356526/), touched up by [Apache Thunder](https://gbatemp.net/members/apache-thunder.105648/), updated for new logo by [PabloMK7](http://gbatemp.net/members/pablomk7.345712/).

Logo: [PabloMK7](http://gbatemp.net/members/pablomk7.345712/)
Traductions: cooolgamer

SPI Protocol Information: [TuxSH](https://github.com/TuxSH/) ([TWLSaveTool](https://github.com/TuxSH/TWLSaveTool))
