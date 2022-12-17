# FBI Reloaded FR

FBI Reloaded FR est une traduction de FBI Reloaded étant une version améliorée de FBI, Un gestionaire de logiciel Open source pour 3ds.

téléchargement: https://github.com/cooolgamer/FBI-Reloaded-FR/releases

# Fonctionnalités

* Navigation et modification de la carte SD, TWL sound, TWL photo, sauvegardes et données aditionnelles.
* Exporter, Importer, et effacer les sauvegardes de cartouches DS.
* Exporter, Importer, et effacer les Secure Values des sauvegardes (anti-restoration de sauvegarde).
* Installer des logiciels/tickets depuis un système de fichier, depuis un réseau ou depuis internet avec une URL ou un QRcode.
  * Importe automatiquement la seed d'un logiciel après son installation depuis internet ou la carte SD.
* Navigation et effacement des logiciels en attente (mise à jours téléchargés, logiciels en cours de téléchargement sur l'eshop, etc).
* Customisation de l'apparence en remplaçant les ressources des RomFS dans "sdmc:/fbi/theme/".

* Seulement disponible avec Luma3DS:
  * Navigation et modification de la CTR NAND, TWL NAND, et sauvegardes système.
  * Copier l'image de la NAND dans la carte SD.
  * Démarrer les logiciels installés dans la console.

# Compilation (linux)

Vous avez besoin de [devkitARM](http://sourceforge.net/projects/devkitpro/files/devkitARM/), avec 3ds-curl, 3ds-zlib, et 3ds-jansson depuis le repo pacman de devkitPro, pour compiler.

Soyez sûr que la variable devkitARM est assignée (généralement `DEVKITARM=/opt/devkitpro/devkitARM` dans la console).

Exécutez `make install` dans le dossier FBI-Reloaded . Les dossiers nommés `build` and `output` vont être créés.

Les fichiers CIA installable et les fichiers .3dsx vont être créé dans `output/3ds-arm/`.

# Crédits

Bannière: Originellement créé par [OctopusRift](http://gbatemp.net/members/octopusrift.356526/), améliorée par [Apache Thunder](https://gbatemp.net/members/apache-thunder.105648/), mit à jour pour le nouveau logo par [PabloMK7](http://gbatemp.net/members/pablomk7.345712/).

Logo: [PabloMK7](http://gbatemp.net/members/pablomk7.345712/)

SPI Protocol Information: [TuxSH](https://github.com/TuxSH/) ([TWLSaveTool](https://github.com/TuxSH/TWLSaveTool))

Traductions: cooolgamer
