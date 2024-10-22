#include "config.h"
#include "app.h"

// Define menus

char feature_items[NUM_MENUS][MAX_MENU_LENGTH] {
	{"Ambil Obat"},
	{"Masukkan Obat"},
	{"Informasi Obat"},
  {"Tentang Kami"}
};


// Button Actions 
// index [0] of buttonPressed[i]
void up_select(){
  if (current_screen == 1){
    selected_menu = selected_menu - 1;
    if (selected_menu < 0){
      selected_menu = NUM_MENUS - 1;
    }  
  } else if (current_screen == 0) {
    current_screen = 1;
  }
}
// index [1] of buttonPressed[i]
void down_select(){
  if (current_screen == 1) {
    selected_menu = selected_menu + 1;
    if (selected_menu >= NUM_MENUS){
    selected_menu = 0;
    }
  } else if (current_screen == 0) {
    current_screen = 1;
  }
}
// index [2] of buttonPressed[i]
void yes_select(){
  if (current_screen == 0){current_screen == 1;}      // Idle screen -> feature screen

  else if (current_screen == 1){                      // Feature screen 
    switch (selected_menu){
    case 0:   // Masukkan obat
      for (int i=0; i < MAX_ROOM_OF_CONTAINER; i++){
        if (room_containers_state[i] == false) {
          room_containers_state[i] = true;
          int using_container = i;
          // Screen "arahkan obat ke kamera"
          // screen "processing"; 
          // container terbuka -> pengguna memasukkan obat
          // Selesai
        } else {
          // Print "error all container is already used"
          return;
        }
      }
      break;
   } 
  }
}
// index [3] of buttonPressed[i]
void no_select(){
  return;

}

// Feature 