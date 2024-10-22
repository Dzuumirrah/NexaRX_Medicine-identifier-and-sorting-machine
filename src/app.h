#ifndef APP_H
#define APP_H

// From connection.c
void CheckWifiConnection();
void check();

// From action-and-feature
int selected_menu = 0;;
int item_sel_previous;
int item_sel_next;

int current_screen = 0;

bool room_containers_state[MAX_ROOM_OF_CONTAINER] = {false};

void up_select();
void down_select();
void yes_select();
void no_select();



#endif
