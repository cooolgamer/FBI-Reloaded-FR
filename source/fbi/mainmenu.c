#include <malloc.h>
#include <stdio.h>

#include <3ds.h>

#include "resources.h"
#include "section.h"
#include "../core/core.h"

static list_item sd = {"Carte SD", COLOR_TEXT, files_open_sd};
static list_item ctr_nand = {"CTR NAND", COLOR_TEXT, files_open_ctr_nand};
static list_item twl_nand = {"TWL NAND", COLOR_TEXT, files_open_twl_nand};
static list_item twl_photo = {"TWL Photo", COLOR_TEXT, files_open_twl_photo};
static list_item twl_sound = {"TWL Sound", COLOR_TEXT, files_open_twl_sound};
static list_item dump_nand = {"Sauvegarder la NAND", COLOR_TEXT, dumpnand_open};
static list_item titles = {"Logiciels", COLOR_TEXT, titles_open};
static list_item pending_titles = {"Logiciels en attente", COLOR_TEXT, pendingtitles_open};
static list_item tickets = {"Tickets", COLOR_TEXT, tickets_open};
static list_item ext_save_data = {"Données aditionnelles", COLOR_TEXT, extsavedata_open};
static list_item system_save_data = {"Sauvegardes système", COLOR_TEXT, systemsavedata_open};
static list_item remote_install = {"Installation en ligne", COLOR_TEXT, remoteinstall_open};
static list_item update = {"Mise à jour", COLOR_TEXT, update_open};

static void mainmenu_draw_top(ui_view* view, void* data, float x1, float y1, float x2, float y2, list_item* selected) {
    u32 logoWidth;
    u32 logoHeight;
    screen_get_texture_size(&logoWidth, &logoHeight, TEXTURE_LOGO);

    float logoX = x1 + (x2 - x1 - logoWidth) / 2;
    float logoY = y1 + (y2 - y1 - logoHeight) / 2;
    screen_draw_texture(TEXTURE_LOGO, logoX, logoY, logoWidth, logoHeight);
}

static void mainmenu_update(ui_view* view, void* data, linked_list* items, list_item* selected, bool selectedTouched) {
    if(hidKeysDown() & KEY_START) {
        ui_pop();
        list_destroy(view);

        return;
    }

    if(selected != NULL && (selectedTouched || hidKeysDown() & KEY_A) && selected->data != NULL) {
        ((void(*)()) selected->data)();
        return;
    }

    if(linked_list_size(items) == 0) {
        linked_list_add(items, &sd);
        linked_list_add(items, &ctr_nand);
        linked_list_add(items, &twl_nand);
        linked_list_add(items, &twl_photo);
        linked_list_add(items, &twl_sound);
        linked_list_add(items, &dump_nand);
        linked_list_add(items, &titles);
        linked_list_add(items, &pending_titles);
        linked_list_add(items, &tickets);
        linked_list_add(items, &ext_save_data);
        linked_list_add(items, &system_save_data);
        linked_list_add(items, &remote_install);
        linked_list_add(items, &update);
    }
}

void mainmenu_open() {
    resources_load();

    list_display("Menu principal", "A: Sélectionner, START: Quitter", NULL, mainmenu_update, mainmenu_draw_top);
}
